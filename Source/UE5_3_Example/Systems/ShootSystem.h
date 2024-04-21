#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "ShootSystem.generated.h"

class AActor;
struct FEntity;

UCLASS()
class AShootSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:

	AShootSystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

	virtual void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode) override;
	virtual void UpdateSystem(float DeltaSeconds) override;

	virtual void ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;
	virtual void RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;
};
