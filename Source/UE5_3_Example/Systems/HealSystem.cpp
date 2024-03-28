// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/HealSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "HealthComponent.h"
#include "FloatableHealth.h"
#include "HealComponent.h"
#include "HUD_Character.h"
#include "UE5_3_ExampleCharacter.h"

HealSystem::HealSystem()
{
}

HealSystem::~HealSystem()
{
}

void HealSystem::ApplyHeal(UEntityManager* EntityManager)
{
    if (!EntityManager) return;

    // Получаем список всех сущностей
    TArray<FEntity> Entities = EntityManager->GetAllEntities();

    for (const FEntity& Entity : Entities)
    {
        // Проверяем, имеет ли сущность компонент урона
        UHealComponent* HealComp = EntityManager->GetComponent<UHealComponent>(Entity);
        if (HealComp)
        {
            // Если есть, то ищем компонент здоровья
            UHealthComponent* HealthComp = EntityManager->GetComponent<UHealthComponent>(Entity);
            if (IsValid(HealthComp))
            {
                // Применяем урон
                HealthComp->Health += HealComp->HealAmount;
                HealthComp->Health = FMath::Clamp(HealthComp->Health, 0.0f, HealthComp->MaxHealth);
                // Проверка на смерть сущности может быть здесь

                EntityManager->RemoveComponents<UHealComponent>(Entity);

                // TODO: Подумать как исправить хак с HUD персонажа
                if (auto Character = Cast<AUE5_3_ExampleCharacter>(HealthComp->GetOwnerObject()))
                {
                    auto GemeMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(Character->GetWorld()));
                    UHealthPercentMessage* MsgToSend = NewObject<UHealthPercentMessage>();
                    MsgToSend->Type = UMessageType::HUDHealthPercent;
                    MsgToSend->HealthPercent = HealthComp->Health / HealthComp->MaxHealth;
                    GemeMode->SendMessage(Cast<UBaseMessage>(MsgToSend));
                }
            }
            UFloatableHealthComponent* FloatableHealthComp = EntityManager->GetComponent<UFloatableHealthComponent>(Entity);
            if (IsValid(FloatableHealthComp))
            {
                FloatableHealthComp->HealthPercent = HealthComp->Health / HealthComp->MaxHealth;
            }
        }
    }
}
