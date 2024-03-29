// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"

class TimerSystem
{
public:
	TimerSystem();
	~TimerSystem();

public:
    // Функция обработки урона
	void Update(float DeltaTime, UEntityManager* EntityManager);
};
