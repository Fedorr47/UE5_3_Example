#include "Systems/PickupSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"
#include "DefaultPlayableCharacter.h"
#include "BaseInteractableActor.h"
#include "PickupbleComponent.h"

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
		ABaseInteractableActor* BaseInteractableActor = Cast<ABaseInteractableActor>(EntityComponent->GetOwnerObject());
		if (IsValid(BaseInteractableActor))
		{
			Component->PickedUpComp = BaseInteractableActor->GetInteractableMeshComp();
			if (IsValid(Component->PickedUpComp))
			{
				PickupComponents.Add(Component->PickedUpComp, Entity);
				Component->PickedUpComp->OnComponentBeginOverlap.AddUniqueDynamic(this, &APickupSystem::Pickup);
			}
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
			FEntity EntityObj = PickupComponents[OverlappedComponent];
			auto Components = mEntityManager->GetComponents(EntityObj);
			if (Components != nullptr)
			{
				for (auto Component : *Components)
				{
					if (IsValid(Component) && Component->CanBeReOwned)
					{
						Component->IsAttachedToCharacter = true;
						Component->InitComponent(mGameMode->GetWorld(), PlayableCharacter);
						mEntityManager->AddCreatedComponent(PlayableCharacter->GetActorEntity(), Component);
					}
				}
			}
			if (ABaseInteractableActor* BaseInteractableActor = Cast<ABaseInteractableActor>(EntityObj.mPtrToObject))
			{
				BaseInteractableActor->GetInteractableMeshComp()->SetVisibility(false);
			}
			// TODO: Add possobility to not destroing actor after pickup 
		}
	}
}

void APickupSystem::PickupAll()
{
    if (!mEntityManager) return;
}
