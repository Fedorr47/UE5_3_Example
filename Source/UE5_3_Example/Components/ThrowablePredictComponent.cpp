#include "ThrowablePredictComponent.h"
#include "Math/UnrealMathUtility.h"

UThrowablePredictComponent::UThrowablePredictComponent(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

UEntityComponent* UThrowablePredictComponent::RetNewComponent(UObject* OwnerObject)
{
    return NewObject<UThrowablePredictComponent>();
}

void UThrowablePredictComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
    Super::InitComponent(InWorld, InOwnerObject);
    //GetComponentGameMode()->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UHealthComponent::TakeMsg);
}