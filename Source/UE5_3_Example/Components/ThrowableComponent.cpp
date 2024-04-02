#include "ThrowableComponent.h"
#include "Math/UnrealMathUtility.h"

UThrowableComponent::UThrowableComponent(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

UEntityComponent* UThrowableComponent::RetNewComponent(UObject* OwnerObject)
{
    return NewObject<UThrowableComponent>();
}

void UThrowableComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
    Super::InitComponent(InWorld, InOwnerObject);
    //GetComponentGameMode()->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UHealthComponent::TakeMsg);
}