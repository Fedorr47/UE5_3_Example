// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/HealSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "HealthComponent.h"
#include "FloatableHealth.h"
#include "HealComponent.h"
#include "HUD_Character.h"
#include "DefaultPlaybleCharacter.h"

HealSystem::HealSystem()
{
}

HealSystem::~HealSystem()
{
}

void HealSystem::ApplyHeal(UEntityManager* EntityManager)
{
    if (!EntityManager) return;

    TArray<FEntity> Entities = EntityManager->GetAllEntities();

    for (const FEntity& Entity : Entities)
    {
        UHealComponent* HealComp = EntityManager->GetComponent<UHealComponent>(Entity);
        if (IsValid(HealComp))
        {
            UHealthComponent* HealthComp = EntityManager->GetComponent<UHealthComponent>(Entity);
            if (IsValid(HealthComp))
            {
                HealthComp->Health += HealComp->HealAmount;
                HealthComp->Health = FMath::Clamp(HealthComp->Health, 0.0f, HealthComp->MaxHealth);

                EntityManager->RemoveComponents<UHealComponent>(Entity);

                if (auto Character = Cast<ADefaultPlaybleCharacter>(HealthComp->GetOwnerObject()))
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
