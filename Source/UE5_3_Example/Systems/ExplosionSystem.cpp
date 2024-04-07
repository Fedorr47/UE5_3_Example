// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ExplosionSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "Components/ExplosionComponent.h"
#include "HUD_Character.h"
#include "DefaultPlaybleCharacter.h"

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
        // Логика определения объектов в радиусе и нанесения урона...

        // После взрыва компонент можно удалить
        EntityManager->RemoveComponents<UExplosionComponent>(Entity);
    }
}
