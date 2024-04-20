#include "Components/AttachedSkeletalMeshComponent.h"

UAttachedSkeletalMeshComponent::UAttachedSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComp"));
}

UEntityComponent* UAttachedSkeletalMeshComponent::RetNewComponent(UObject* OwnerObject)
{
	return NewObject<UAttachedSkeletalMeshComponent>();
}

UEntityComponent* UAttachedSkeletalMeshComponent::RetCopiedComponent(UObject* OwnerObject)
{
	return nullptr;
}

void UAttachedSkeletalMeshComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
}
