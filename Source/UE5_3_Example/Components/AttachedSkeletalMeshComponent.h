#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "AttachedSkeletalMeshComponent.generated.h"

class USkeletalMeshComponent;

UCLASS()
class UE5_3_EXAMPLE_API UAttachedSkeletalMeshComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UAttachedSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);
	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;
	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp = nullptr;
};
