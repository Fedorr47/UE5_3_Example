// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ExplosionSystem.h"

#include "Math/UnrealMathUtility.h"

#include "Components/ExplosionComponent.h"
#include "DefaultPlayableCharacter.h"

ExplosionSystem::ExplosionSystem()
{
}

ExplosionSystem::~ExplosionSystem()
{
}

void ExplosionSystem::Update(UEntityManager* EntityManager)
{
    TArray<FEntity> Entities = EntityManager->GetEntitiesWithComponent<UExplosionComponent>();
    for (const FEntity& Entity : Entities)
    {
        UExplosionComponent* ExplosionComp = EntityManager->GetComponent<UExplosionComponent>(Entity);
        EntityManager->RemoveComponents<UExplosionComponent>(Entity);
    }
}
