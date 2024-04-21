#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "PickupSystem.generated.h"

class AActor;
struct FEntity;

UCLASS()
class APickupSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:

	APickupSystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

	virtual void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode) override;
	virtual void UpdateSystem(float DeltaSeconds) override;

	virtual void ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;
	virtual void RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;

	UFUNCTION()
	void Pickup(
		UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult);

	void PickupAll();

	TMap<UPrimitiveComponent*, FEntity> PickupComponents;
};
