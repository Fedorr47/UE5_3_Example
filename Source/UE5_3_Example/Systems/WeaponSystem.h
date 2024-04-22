#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "WeaponSystem.generated.h"

class AActor;
struct FEntity;
class UWeaponComponent;

UCLASS()
class AWeaponSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:

	AWeaponSystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

	virtual void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode) override;
	virtual void UpdateSystem(float DeltaSeconds) override;

	virtual void ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;
	virtual void RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;

	void BindActions(UWeaponComponent* Component);
	void StartShoot();
	void EndShoot();

	UPROPERTY()
	TMap<UInputMappingContext*, UActionsHolder*> MappingContexts;
};
