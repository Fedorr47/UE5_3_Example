// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class AActor;

class ThrowableSystem
{
public:
	ThrowableSystem();
	~ThrowableSystem();

public:

	static void ApplyThrow(UEntityManager* EntityManager);
	static void VisualizePath(AActor* SplineActorToAttach, FVector LaunchVelocity);
};
