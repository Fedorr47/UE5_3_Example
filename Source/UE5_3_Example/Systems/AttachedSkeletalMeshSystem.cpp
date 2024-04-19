#include "Systems/AttachedSkeletalMeshSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"
#include "DefaultPlayableCharacter.h"
#include "BaseInteractableActor.h"

#include "TP_WeaponComponent.h"

#include "AttachedSkeletalMeshComponent.h"

void AAttachedSkeletalMeshSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
	Super::InitSystem(InEntityManager, InGameMode);

}

void AAttachedSkeletalMeshSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		
	}
}

void AAttachedSkeletalMeshSystem::ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	if (UAttachedSkeletalMeshComponent* AttachedSkeletalMeshComponent = Cast<UAttachedSkeletalMeshComponent>(EntityComponent))
	{
		AttachSkeletalMesh(AttachedSkeletalMeshComponent);
	}
}

void AAttachedSkeletalMeshSystem::RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{

}

void AAttachedSkeletalMeshSystem::AttachSkeletalMesh(UAttachedSkeletalMeshComponent* AttachedSkeletalMeshComponent)
{
	if (ADefaultPlayableCharacter* PlayableCharacter = Cast<ADefaultPlayableCharacter>(AttachedSkeletalMeshComponent->GetOwnerObject()))
	{
		// Attach the weapon to the First Person Character
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
		if (UTP_WeaponComponent* TP_WeaponComponent = Cast<UTP_WeaponComponent>(AttachedSkeletalMeshComponent->SkeletalMeshComponent))
		{
			TP_WeaponComponent->AttachWeapon(PlayableCharacter);
		}
		else
		{
			AttachedSkeletalMeshComponent->SkeletalMeshComponent->AttachToComponent(PlayableCharacter->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));
			AttachedSkeletalMeshComponent->SkeletalMeshComponent->SetVisibility(true);
		}
		// switch bHasRifle so the animation blueprint can switch to another animation set

		/*
		// Set up action bindings
		if (const APlayerController* PlayerController = Cast<APlayerController>(Character->GetController()))
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
		}
		*/
	}
}