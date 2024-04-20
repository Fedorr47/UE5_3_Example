#include "Components/ShootComponent.h"

UShootComponent::UShootComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UShootComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UShootComponent>();
}

UEntityComponent* UShootComponent::RetCopiedComponent(UObject* OwnerObject)
{
	return nullptr;
}

void UShootComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
