#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "GameFramework/Actor.h"
#include "BaseExtSystem.generated.h"

class AGameModeBase;
class UEntityManager;
class ACharacter;

UCLASS()
class ABaseExtSystem : public AActor
{
	GENERATED_BODY()
public:
	ABaseExtSystem(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer) {}

	virtual void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode);

	virtual void UpdateSystem(float DeltaSeconds) {};

	UFUNCTION()
	void ComponentWasAdded(const FEntity& Entity, UEntityComponent* EntityComponent);
	UFUNCTION()
	void RemoveComponent(const FEntity& Entity, UEntityComponent* Component);

	virtual void ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent) {}
	virtual void RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent) {}

protected:
	UPROPERTY()
	UEntityManager* mEntityManager = nullptr;

	UPROPERTY()
	AGameModeBase* mGameMode = nullptr;
};

UCLASS()
class UActionsHolder : public UObject
{
	GENERATED_BODY()
public:
	TArray<UInputAction*> Actions;
};
