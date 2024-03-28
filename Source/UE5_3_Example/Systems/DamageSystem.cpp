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

    // �������� ������ ���� ���������
    TArray<FEntity> Entities = EntityManager->GetAllEntities();

    for (const FEntity& Entity : Entities)
    {
        // ���������, ����� �� �������� ��������� �����
        UDamageComponent* DamageComp = EntityManager->GetComponent<UDamageComponent>(Entity);
        if (DamageComp)
        {
            // ���� ����, �� ���� ��������� ��������
            UHealthComponent* HealthComp = EntityManager->GetComponent<UHealthComponent>(Entity);
            if (IsValid(HealthComp))
            {
                // ��������� ����
                HealthComp->Health -= DamageComp->DamageAmount;

                // �������� �� ������ �������� ����� ���� �����

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
