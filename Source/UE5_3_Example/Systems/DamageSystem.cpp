// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/DamageSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "HealthComponent.h"
#include "FloatableHealth.h"
#include "DamageComponent.h"
#include "MessageQueue.h"
#include "DefaultPlayableCharacter.h"

void ADamageSystem::UpdateSystem(float DeltaSeconds)
{
    ApplyDamage();
}

void ADamageSystem::ApplyDamage()
{
    if (!mEntityManager) return;

    TArray<FEntity> Entities = mEntityManager->GetAllEntities();

    for (const FEntity& Entity : Entities)
    {
        const UDamageComponent* DamageComp = mEntityManager->GetComponent<UDamageComponent>(Entity);
        if (IsValid(DamageComp))
        {
            UHealthComponent* HealthComp = mEntityManager->GetComponent<UHealthComponent>(Entity);
            if (IsValid(HealthComp) && !HealthComp->IsImmortal)
            {
                HealthComp->Health -= DamageComp->DamageAmount;
                HealthComp->Health = FMath::Clamp(HealthComp->Health, 0.0f, HealthComp->MaxHealth);


                mEntityManager->RemoveComponents<UDamageComponent>(Entity);

                if (const ADefaultPlayableCharacter* Character = Cast<ADefaultPlayableCharacter>(HealthComp->GetOwnerObject()))
                {
                    // TODO: rework as ThrowableSystem
                    auto GemeMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(Character->GetWorld()));
                    UHealthPercentMessage* MsgToSend = NewObject<UHealthPercentMessage>();
                    MsgToSend->Type = EMessageType::HealthPercentage;
                    MsgToSend->HealthPercent = HealthComp->Health / HealthComp->MaxHealth;
                    GemeMode->SendMessage(Cast<UBaseMessage>(MsgToSend));
                }
            }
            UFloatableHealthComponent* FloatableHealthComp = mEntityManager->GetComponent<UFloatableHealthComponent>(Entity);
            if (IsValid(FloatableHealthComp))
            {
                FloatableHealthComp->HealthPercent = HealthComp->Health / HealthComp->MaxHealth;
            }
        }
    }
}
