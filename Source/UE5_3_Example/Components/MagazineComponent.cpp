#include "Components/MagazineComponent.h"

UMagazineComponent::UMagazineComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UMagazineComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UMagazineComponent>();
}

void UMagazineComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
