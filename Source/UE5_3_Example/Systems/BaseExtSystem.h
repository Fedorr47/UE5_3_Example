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
	ABaseExtSystem();
	~ABaseExtSystem();

	void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode);

	virtual void UpdateSystem(float DeltaSeconds) {};

protected:
	UPROPERTY()
	UEntityManager* mEntityManager = nullptr;

	UPROPERTY()
	AGameModeBase* mGameMode = nullptr;
};
