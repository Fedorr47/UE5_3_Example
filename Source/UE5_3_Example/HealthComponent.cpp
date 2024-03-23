// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "UE5_3_ExampleGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
UHealthComponent::UHealthComponent()
{
    Health = MaxHealth;
}

void UHealthComponent::TakeDamage(float InDamageAmount, UWorld* InWorld)
{
    if (!FMath::IsNearlyEqual(Health, 0.0f, 0.001f))
    {
        float NewHealth = Health - InDamageAmount;
        Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
        if (InWorld)
        {
            const auto GameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(InWorld));
            UHealthMessage* MsgToSend = NewObject<UHealthMessage>();
            MsgToSend->NewHealthPercent = Health/MaxHealth;
            MsgToSend->Type = UMessageType::HealthType;
            GameMode->SendMessage(Cast<UMessageBase>(MsgToSend));
        }
    }
}

UHealthMessage::UHealthMessage(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}
