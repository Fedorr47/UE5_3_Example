// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ThrowableActor.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ThrowableComponent.h"
#include "Systems/ThrowableSystem.h"
#include "InputActionValue.h"

AThrowableActor::AThrowableActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
	if (RootComponent == nullptr)
	{
		RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	}
	//StatTVPMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, "MeshPath");
	StatMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void AThrowableActor::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(TemplatePhysicComponent.Template))
	{
		PhysicComponent = TemplatePhysicComponent.Template;
		PhysicComponent->InitComponent(mWorld, StatMesh);
		mGameMode->EntityManager->AddCreatedComponent(ActorEntity, PhysicComponent);
		CreatedComponents.Emplace(PhysicComponent);
	}
}

void AThrowableActor::Throw(FVector LaunchVelocity)
{
    // Здесь вы можете добавить логику для инициализации броска гранаты
    // Например, задать начальную скорость в PhysicsComponent
	PhysicComponent->Velocity = LaunchVelocity;
}

void AThrowableActor::AttachToCharacter(ACharacter* TargetCharacter)
{
	OwnerCharacter = TargetCharacter;

	// Check that the character is valid, and has no rifle yet
	if (OwnerCharacter == nullptr)
	{
		return;
	}

	// Attach the weapon to the First Person Character
	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
	//AttachToComponent(Character->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));


	// switch bHasRifle so the animation blueprint can switch to another animation set
	//Character->SetHasRifle(true);

	// Set up action bindings
	if (APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
			Subsystem->AddMappingContext(ThrowMappingContext, 1);
		}

		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Started, this, &AThrowableActor::ActiveThrow);
		}
	}
}

void AThrowableActor::ActiveThrow()
{
	UThrowableComponent* ThrowableComp = mGameMode->EntityManager->AddComponent<UThrowableComponent>(ActorEntity);
	if (IsValid(ThrowableComp))
	{
		ThrowableComp->InitComponent(mWorld, OwnerCharacter);
		ThrowableComp->ThrowVector = PhysicComponent->Velocity;
		ThrowableSystem::ApplyThrow(mGameMode->EntityManager);
	}
}
