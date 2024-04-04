// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class ACharacter;

class ThrowableSystem
{
public:
	ThrowableSystem();
	~ThrowableSystem();

public:

	static void ApplyThrow(UEntityManager* EntityManager);
	static void PredictThrow(UEntityManager* EntityManager);
};
