// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "HealSystem.generated.h"

UCLASS()
class AHealSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:
	AHealSystem(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer) {}

	virtual void UpdateSystem(float DeltaSeconds) override;
	
	static void ApplyHeal(UEntityManager* EntityManager);
};
