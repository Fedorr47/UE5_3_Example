#include "HealthComponent.h"
#include "Math/UnrealMathUtility.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
    Health = MaxHealth;
}

void UHealthComponent::SetWorld(UWorld* InWorld)
{
    Super::SetWorld(InWorld);
    GetComponentGameMode()->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UHealthComponent::TakeMsg);
}

void UHealthComponent::TakeDamage(float InDamageAmount)
{
    if (!FMath::IsNearlyEqual(Health, 0.0f, 0.001f))
    {
        float NewHealth = Health - InDamageAmount;
        Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
        if (GetComponentWorld())
        {
            SnedPercent();
        }
    }
}

void UHealthComponent::Heal(float InHealAmount)
{
    if (!FMath::IsNearlyEqual(Health, 0.0f, 0.001f))
    {
        float NewHealth = Health + InHealAmount;
        Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
        if (GetComponentWorld())
        {
            SnedPercent();
        }
    }
}

void UHealthComponent::SnedPercent()
{
    UHealthPercentMessage* MsgToSend = NewObject<UHealthPercentMessage>();
    MsgToSend->HealthPercent = Health / MaxHealth;
    MsgToSend->Type = UMessageType::HealthPercent;
    GetComponentGameMode()->SendMessage(Cast<UBaseMessage>(MsgToSend));
}

void UHealthComponent::TakeMsg(UBaseMessage* InMsg)
{
    if (InMsg->Type == UMessageType::HealthType)
    {
        auto HealthMessage = static_cast<UHealthMessage*>(InMsg);
        switch (HealthMessage->HealthType)
        {
        case UHealthMessageType::Damage:
            TakeDamage(HealthMessage->Amount);
            break;
        case UHealthMessageType::Heal:
            Heal(HealthMessage->Amount);
            break;
        default:
            break;
        }
       
    }
}

UHealthMessage::UHealthMessage(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

UHealthPercentMessage::UHealthPercentMessage(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}
