#include "Systems/PickupSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"
#include "DefaultPlayableCharacter.h"
#include "PickupbleComponent.h"
#include "PickupSystem.h"

void APickupSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
	Super::InitSystem(InEntityManager, InGameMode);
}

void APickupSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		PickupAll();
	}
}

void APickupSystem::ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	UPickupbleComponent* Component = Cast<UPickupbleComponent>(EntityComponent);
	if (IsValid(Component))
	{
		if (UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(EntityComponent->GetOwnerObject()))
		{
			Component->PickedUpComp = PrimitiveComponent;
			PickupComponents.Add(Component->PickedUpComp, Entity);
			Component->PickedUpComp->OnComponentBeginOverlap.AddUniqueDynamic(this, &APickupSystem::Pickup);
		}
	}
}

void APickupSystem::RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{

}

void APickupSystem::Pickup(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (IsValid(OtherActor))
	{
		ADefaultPlayableCharacter* PlayableCharacter = Cast<ADefaultPlayableCharacter>(OtherActor);
		if (IsValid(PlayableCharacter) && PickupComponents.Contains(OverlappedComponent))
		{
			auto EntityObj = PickupComponents[OverlappedComponent];
			auto Components = mEntityManager->GetComponents(EntityObj);
			for (auto Component : Components)
			{
				if (IsValid(Component) && Component->CanBeReOwned)
				{
					Component->IsAttachedToCharacter = true;
					Component->InitComponent(mGameMode->GetWorld(), PlayableCharacter);
					mEntityManager->AddCreatedComponent(PlayableCharacter->GetActorEntity(), Component);
				}
			}
			auto Root = OverlappedComponent->GetAttachmentRoot();
			mEntityManager->DestroyEntity(EntityObj);
		}
	}
}

void APickupSystem::PickupAll()
{
    if (!mEntityManager) return;
}
