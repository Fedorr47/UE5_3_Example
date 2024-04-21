#include "Components/WeaponComponent.h"

UWeaponComponent::UWeaponComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UWeaponComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UWeaponComponent>();
}

UEntityComponent* UWeaponComponent::RetCopiedComponent(UObject* OwnerObject)
{
	return nullptr;
}

void UWeaponComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
