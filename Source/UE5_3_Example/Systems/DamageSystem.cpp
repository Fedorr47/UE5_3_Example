// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/DamageSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "HealthComponent.h"
#include "FloatableHealth.h"
#include "DamageComponent.h"
#include "MessageQueue.h"
#include "DefaultPlayableCharacter.h"

ADamageSystem::ADamageSystem()
{
}

ADamageSystem::~ADamageSystem()
{
}

void ADamageSystem::UpdateSystem(float DeltaSeconds)
{
}

void ADamageSystem::ApplyDamage(UEntityManager* EntityManager)
{
    if (!EntityManager) return;

    TArray<FEntity> Entities = EntityManager->GetAllEntities();

    for (const FEntity& Entity : Entities)
    {
        const UDamageComponent* DamageComp = EntityManager->GetComponent<UDamageComponent>(Entity);
        if (IsValid(DamageComp))
        {
            UHealthComponent* HealthComp = EntityManager->GetComponent<UHealthComponent>(Entity);
            if (IsValid(HealthComp) && !HealthComp->IsImmortal)
            {
                HealthComp->Health -= DamageComp->DamageAmount;
                HealthComp->Health = FMath::Clamp(HealthComp->Health, 0.0f, HealthComp->MaxHealth);


                EntityManager->RemoveComponents<UDamageComponent>(Entity);

                if (const ADefaultPlayableCharacter* Character = Cast<ADefaultPlayableCharacter>(HealthComp->GetOwnerObject()))
                {
                    auto GemeMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(Character->GetWorld()));
                    UHealthPercentMessage* MsgToSend = NewObject<UHealthPercentMessage>();
                    MsgToSend->TypeName = MsgToSend->GetClass()->GetName();
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
