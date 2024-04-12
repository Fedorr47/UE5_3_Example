// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class ExplosionSystem
{
public:
	ExplosionSystem();
	~ExplosionSystem();
	
	void Update(UEntityManager* EntityManager);
};
