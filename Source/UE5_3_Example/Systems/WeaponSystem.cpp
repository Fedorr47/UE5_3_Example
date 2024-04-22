#include "Systems/WeaponSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"
#include "DefaultPlayableCharacter.h"
#include "BaseInteractableActor.h"
#include "WeaponComponent.h"
#include "DefaultPlayableCharacter.h"

void AWeaponSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
	Super::InitSystem(InEntityManager, InGameMode);
}

void AWeaponSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		
	}
}

void AWeaponSystem::ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{ 
	UWeaponComponent* Component = Cast<UWeaponComponent>(EntityComponent);
	if (IsValid(Component))
	{
		ADefaultPlayableCharacter* DefaultPlayableCharacter = Cast<ADefaultPlayableCharacter>(EntityComponent->GetOwnerObject());
		if (IsValid(DefaultPlayableCharacter))
		{
			DefaultPlayableCharacter->SetHasRifle(true);
			
		}
	}
}

void AWeaponSystem::RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	UWeaponComponent* Component = Cast<UWeaponComponent>(EntityComponent);
	if (IsValid(Component))
	{
		ADefaultPlayableCharacter* DefaultPlayableCharacter = Cast<ADefaultPlayableCharacter>(EntityComponent->GetOwnerObject());
		if (IsValid(DefaultPlayableCharacter))
		{
			DefaultPlayableCharacter->SetHasRifle(false);

		}
	}
}

void AWeaponSystem::BindActions(UWeaponComponent* Component)
{
	if (IsValid(Component))
	{
		if (!MappingContexts.Contains(Component->ThrowMappingContext))
		{
			MappingContexts.Add(Component->ThrowMappingContext, NewObject<UActionsHolder>());
		}

		if (MappingContexts[Component->ThrowMappingContext]->Actions.Find(Component->ThrowAction) == INDEX_NONE)
		{

			ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(Component->GetOwnerObject());
			if (IsValid(OwnerCharacter))
			{
				MappingContexts[Component->ThrowMappingContext]->Actions.Add(Component->ThrowAction);
				const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
				if (IsValid(PlayerController))
				{
					if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
					{
						Subsystem->AddMappingContext(Component->ThrowMappingContext, 1);
					}
				}

				if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
				{
					EnhancedInputComponent->BindAction(Component->ThrowAction, ETriggerEvent::Started, this, &AWeaponSystem::StartShoot);
					EnhancedInputComponent->BindAction(Component->ThrowAction, ETriggerEvent::Completed, this, &AWeaponSystem::EndShoot);
				}
			}
		}
	}
}

void AWeaponSystem::StartShoot()
{
}

void AWeaponSystem::EndShoot()
{
}
