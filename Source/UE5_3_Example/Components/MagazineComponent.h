#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "MagazineComponent.generated.h"

UCLASS()
class UE5_3_EXAMPLE_API UMagazineComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UMagazineComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;
	virtual UEntityComponent* RetCopiedComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;
};
