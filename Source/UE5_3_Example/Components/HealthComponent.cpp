#include "HealthComponent.h"
#include "MessageQueue.h"
#include "Math/UnrealMathUtility.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
    Health = MaxHealth;
}

UEntityComponent* UHealthComponent::RetNewComponent(UObject* OwnerObject)
{
    return NewObject<UHealthComponent>();
}

UEntityComponent* UHealthComponent::RetCopiedComponent(UObject* OwnerObject)
{
    return nullptr;
}

void UHealthComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
    Super::InitComponent(InWorld, InOwnerObject);
    //GetComponentGameMode()->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UHealthComponent::TakeMsg);
}