#include "PickupbleComponent.h"
#include "Math/UnrealMathUtility.h"

UPickupbleComponent::UPickupbleComponent(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

UEntityComponent* UPickupbleComponent::RetNewComponent(UObject* OwnerObject)
{
    return NewObject<UPickupbleComponent>();
}

void UPickupbleComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
    Super::InitComponent(InWorld, InOwnerObject);
}