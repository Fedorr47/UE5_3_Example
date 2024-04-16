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
	if (IsValid(Component) && IsValid(Component->PickedUpComp))
	{
		Component->PickedUpComp->OnComponentBeginOverlap.AddUniqueDynamic(this, &APickupSystem::Pickup);
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
		if (IsValid(PlayableCharacter))
		{
			auto Components = mEntityManager->GetComponents(PlayableCharacter->GetActorEntity());
			/*
			if (IsValid(ThrowableComp))
			{
				ThrowableComp->IsAttachedToCharacter = true;
				ThrowableComp->OwnerCharacter = Cast<AActor>(OwnerCharacter);
				ThrowableComp->InitComponent(mWorld, OwnerCharacter);
				mGameMode->EntityManager->AddCreatedComponent(OwnerCharacter->GetActorEntity(), ThrowableComp);

				if (IsValid(ThrowablePredictComp))
				{
					ThrowablePredictComp->InitComponent(mWorld, OwnerCharacter);
					ThrowablePredictComp->SplinePredict = OwnerCharacter->GetSplinePredict();
					ThrowablePredictComp->VelocityOfProjectile = ThrowableComp->ProjectileClass.GetDefaultObject()->GetProjectileMovement()->InitialSpeed;
					mGameMode->EntityManager->AddCreatedComponent(OwnerCharacter->GetActorEntity(), ThrowablePredictComp);
				}
				mGameMode->EntityManager->DestroyEntity(ActorEntity);

			}*/
		}
	}
}

void APickupSystem::PickupAll()
{
    if (!mEntityManager) return;
}
