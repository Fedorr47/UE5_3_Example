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
		if (!MappingContexts.Contains(Component->FireMappingContext))
		{
			MappingContexts.Add(Component->FireMappingContext, NewObject<UActionsHolder>());
		}

		if (MappingContexts[Component->FireMappingContext]->Actions.Find(Component->FireAction) == INDEX_NONE)
		{

			ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(Component->GetOwnerObject());
			if (IsValid(OwnerCharacter))
			{
				MappingContexts[Component->FireMappingContext]->Actions.Add(Component->FireAction);
				const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
				if (IsValid(PlayerController))
				{
					if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
					{
						Subsystem->AddMappingContext(Component->FireMappingContext, 1);
					}
				}

				if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
				{
					EnhancedInputComponent->BindAction(Component->FireAction, ETriggerEvent::Started, this, &AWeaponSystem::StartShoot);
					EnhancedInputComponent->BindAction(Component->FireAction, ETriggerEvent::Completed, this, &AWeaponSystem::EndShoot);
				}
			}
		}
	}
}

void AWeaponSystem::StartShoot()
{
	FVector Start = FVector(10, 10, 10);
	FVector End = FVector(20, 20, 20);
	FHitResult HitResult;
	FCollisionQueryParams  COQP;
	COQP.AddIgnoredActor(this);
	FCollisionResponseParams CollRes;

	mEntityManager->GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECollisionChannel::ECC_Visibility, COQP, CollRes);
}

void AWeaponSystem::EndShoot()
{
}
