// Copyright Epic Games, Inc. All Rights Reserved.

#include "DefaultPlayableCharacter.h"

#include <Kismet/GameplayStatics.h>

#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
// Components
#include "HealthComponent.h"
#include "DamageComponent.h"
#include "HealComponent.h"
#include "Engine/LocalPlayer.h"
// Systems
#include "Systems/DamageSystem.h"
#include "Systems/HealSystem.h"

#define CLASS_NAME(CLASS) {#CLASS}

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AUE5_3_ExampleCharacter

ADefaultPlayableCharacter::ADefaultPlayableCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	SplinePredict = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	SplinePredict->SetupAttachment(GetCapsuleComponent());
}

void ADefaultPlayableCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	mOwnerId = this->GetUniqueID();

	if (UWorld* lWorld = GetWorld())
	{
		mWorld = lWorld;
		mGameMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
		ActorEntity = mGameMode->EntityManager->CreateEntity();
		for (FEntityComponentWrapper Component : AttachedComponents)
		{
			if (IsValid(Component.Template))
			{
				Component.Template->InitComponent(mWorld, this);
				mGameMode->EntityManager->AddCreatedComponent(ActorEntity, Component.Template);
				CreatedComponents.Emplace(Component.Template);
			}
		}
	}

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	OnTakeAnyDamage.AddUniqueDynamic(this, &ADefaultPlayableCharacter::TakeCharacterDamage);
	OnTakeRadialDamage.AddUniqueDynamic(this, &ADefaultPlayableCharacter::TakeCharacterRadialDamage);
}

//////////////////////////////////////////////////////////////////////////// Input

void ADefaultPlayableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADefaultPlayableCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADefaultPlayableCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void ADefaultPlayableCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ADefaultPlayableCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ADefaultPlayableCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}
bool ADefaultPlayableCharacter::GetHasRifle()
{
	return bHasRifle;
}

void ADefaultPlayableCharacter::TakeCharacterDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UDamageComponent* DamageComp = mGameMode->EntityManager->AddComponent<UDamageComponent>(ActorEntity);
	if (DamageComp)
	{
		DamageComp->DamageAmount = Damage;
	}
	DamageSystem::ApplyDamage(mGameMode->EntityManager);
}

void ADefaultPlayableCharacter::TakeCharacterRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser)
{
	UDamageComponent* DamageComp = mGameMode->EntityManager->AddComponent<UDamageComponent>(ActorEntity);
	if (DamageComp)
	{
		DamageComp->DamageAmount = Damage;
	}
	DamageSystem::ApplyDamage(mGameMode->EntityManager);
}

void ADefaultPlayableCharacter::Heal(float InHealAmount)
{
	UHealComponent* HealComp = mGameMode->EntityManager->AddComponent<UHealComponent>(ActorEntity);
	if (HealComp)
	{
		HealComp->HealAmount = InHealAmount;
	}
	HealSystem::ApplyHeal(mGameMode->EntityManager);
}
