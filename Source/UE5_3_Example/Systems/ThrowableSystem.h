// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseSystem.h"

class ACharacter;

class ThrowableSystem : public BaseSystem
{
public:
	ThrowableSystem();
	~ThrowableSystem();

	virtual void UpdateSystem(float DeltaSeconds) override;

	void ApplyThrow();
	void PredictThrow();
};
