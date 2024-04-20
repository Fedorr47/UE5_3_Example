// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "PickupbleComponent.generated.h"

class UPrimitiveComponent;

UCLASS()
class UE5_3_EXAMPLE_API UPickupbleComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UPickupbleComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;
	virtual UEntityComponent* RetCopiedComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, Category = Primitive)
	UPrimitiveComponent* PickedUpComp = nullptr;
};