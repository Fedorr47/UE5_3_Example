// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class HealSystem
{
public:
	HealSystem();
	~HealSystem();

public:
    // ������� ��������� �����
	static void ApplyHeal(UEntityManager* EntityManager);
};
