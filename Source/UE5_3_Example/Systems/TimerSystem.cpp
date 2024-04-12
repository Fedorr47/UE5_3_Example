// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/TimerSystem.h"

#include "Math/UnrealMathUtility.h"

#include "Components/ExplosionComponent.h"
#include "Components/TimerComponent.h"
#include "DefaultPlayableCharacter.h"

TimerSystem::TimerSystem()
{
}

TimerSystem::~TimerSystem()
{
}

void TimerSystem::Update(float DeltaTime, UEntityManager* EntityManager)
{
    TArray<FEntity> Entities = EntityManager->GetEntitiesWithComponent<UTimerComponent>();
    for (const FEntity& Entity : Entities)
    {
        UTimerComponent* TimerComp = EntityManager->GetComponent<UTimerComponent>(Entity);
        if (TimerComp)
        {
            TimerComp->TimeLeft -= DeltaTime;
            if (TimerComp->TimeLeft <= 0.0f)
            {
                EntityManager->AddComponent<UExplosionComponent>(Entity);
            }
        }
    }
}
