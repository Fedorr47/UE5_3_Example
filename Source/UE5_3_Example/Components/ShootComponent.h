#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "ShootComponent.generated.h"

UCLASS()
class UE5_3_EXAMPLE_API UShootComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UShootComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;
};
