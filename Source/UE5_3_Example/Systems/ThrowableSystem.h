// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "ThrowableSystem.generated.h"

class ACharacter;
class UThrowableComponent;
struct FEntity;
enum class EThrowableType : uint8;

UCLASS()
class UThrowableTypeHolder : public UObject
{
	GENERATED_BODY()
public:
	TMap<EThrowableType, TArray<UThrowableComponent*>> Components;
};

UCLASS()
class AThrowableSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:

	AThrowableSystem(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer) {}

	virtual void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode) override;
	virtual void UpdateSystem(float DeltaSeconds) override;

	void BindActions(UThrowableComponent* Component);

	void ApplyThrow();
	void PredictThrow();

	UFUNCTION()
	virtual void ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent);
	void RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent);

	void SendThrowableCountMsg(UThrowableComponent* Component, int InCount);

private:
	UPROPERTY()
	bool ShouldPredictPath = false;

	UPROPERTY()
	bool OnceThrowPerTime = true;

	UPROPERTY()
	TMap<FEntity, UThrowableTypeHolder*> ThrowableComponents;

	UPROPERTY()
	TMap<UInputMappingContext*, UActionsHolder*> MappingContexts;
};
