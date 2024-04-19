#include "Components/AttachedSkeletalMeshComponent.h"

UAttachedSkeletalMeshComponent::UAttachedSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UEntityComponent* UAttachedSkeletalMeshComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UAttachedSkeletalMeshComponent>();
}

void UAttachedSkeletalMeshComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
