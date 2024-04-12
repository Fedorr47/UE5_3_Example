// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class ACharacter;

class BaseSystem : public AActor
{
public:
	BaseSystem();
	~BaseSystem();

	virtual void UpdateSystem(float DeltaSeconds) = 0;
};
