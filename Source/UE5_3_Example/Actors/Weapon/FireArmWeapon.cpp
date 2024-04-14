#include "FireArmWeapon.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AFireArmWeapon::AFireArmWeapon(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (RootComponent == nullptr)
	{
		RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	}

	WeaponSkeletalMesh = ObjectInitializer.CreateDefaultSubobject<USkeletalMeshComponent>(this, "WeaponSkeletalMesh");
	WeaponSkeletalMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	WeaponSkeletalMesh->SetVisibility(false);
}

void AFireArmWeapon::AttachToCharacter(ACharacter* TargetCharacter)
{
	OwnerCharacter = Cast<ADefaultPlayableCharacter>(TargetCharacter);

	if (OwnerCharacter == nullptr)
	{
		return;
	}

	if (IsValid(WeaponSkeletalMesh))
	{
		WeaponSkeletalMesh->SetVisibility(true);
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
		WeaponSkeletalMesh->AttachToComponent(OwnerCharacter->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));

		// switch bHasRifle so the animation blueprint can switch to another animation set
		OwnerCharacter->SetHasRifle(true);
	}
	/*
	// Set up action bindings
	if (const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
			Subsystem->AddMappingContext(FireMappingContext, 1);
		}

		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			// Fire
			if (IsFullyAutomatic)
			{
				EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &UTP_WeaponComponent::StartAutomaticFire);
				EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Completed, this, &UTP_WeaponComponent::StopAutomaticFire);
			}
			else
			{
				EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Triggered, this, &UTP_WeaponComponent::Fire);
			}
		}
	}*/
}
