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
