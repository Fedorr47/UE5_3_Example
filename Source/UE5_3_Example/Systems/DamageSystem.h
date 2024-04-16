// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "DamageSystem.generated.h"

UCLASS()
class ADamageSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:
	ADamageSystem(const FObjectInitializer& ObjectInitializer)
		: Super(ObjectInitializer) {}

	virtual void UpdateSystem(float DeltaSeconds) override;
	
	void ApplyDamage();
};
