// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/DamageSystem.h"
#include "HealthComponent.h"
#include "FloatableHealth.h"
#include "DamageComponent.h"

DamageSystem::DamageSystem()
{
}

DamageSystem::~DamageSystem()
{
}

void DamageSystem::ApplyDamage(UEntityManager* EntityManager)
{
    if (!EntityManager) return;

    // Получаем список всех сущностей
    TArray<FEntity> Entities = EntityManager->GetAllEntities();

    for (const FEntity& Entity : Entities)
    {
        // Проверяем, имеет ли сущность компонент урона
        UDamageComponent* DamageComp = EntityManager->GetComponent<UDamageComponent>(Entity);
        if (DamageComp)
        {
            // Если есть, то ищем компонент здоровья
            UHealthComponent* HealthComp = EntityManager->GetComponent<UHealthComponent>(Entity);
            if (IsValid(HealthComp))
            {
                // Применяем урон
                HealthComp->Health -= DamageComp->DamageAmount;

                // Проверка на смерть сущности может быть здесь

                EntityManager->RemoveComponents<UDamageComponent>(Entity);
            }
            UFloatableHealthComponent* FloatableHealthComp = EntityManager->GetComponent<UFloatableHealthComponent>(Entity);
            if (IsValid(FloatableHealthComp))
            {
                FloatableHealthComp->HealthPercent = HealthComp->Health / HealthComp->MaxHealth;
            }
        }
    }
}
