// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class DamageSystem
{
public:
	DamageSystem();
	~DamageSystem();
	
	static void ApplyDamage(UEntityManager* EntityManager);
};
