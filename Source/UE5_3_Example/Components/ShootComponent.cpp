#include "Components/ShootComponent.h"

UShootComponent::UShootComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UShootComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UShootComponent>();
}

void UShootComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
