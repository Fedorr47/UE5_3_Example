// Fill out your copyright notice in the Description page of Project Settings.

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

	AActor* PickedUpCharacter = nullptr;
};
