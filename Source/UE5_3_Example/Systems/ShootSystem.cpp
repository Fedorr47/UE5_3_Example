#include "Systems/ShootSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"
#include "DefaultPlayableCharacter.h"
#include "BaseInteractableActor.h"
#include "ShootComponent.h"

void AShootSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
	Super::InitSystem(InEntityManager, InGameMode);
}

void AShootSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		
	}
}

void AShootSystem::ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{

}

void AShootSystem::RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{

}
