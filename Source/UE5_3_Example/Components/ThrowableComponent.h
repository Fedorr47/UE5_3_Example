// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "ThrowableComponent.generated.h"


UCLASS()
class UE5_3_EXAMPLE_API UThrowableComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UThrowableComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject);

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Throwable)
	float ThrowPower = 0.0f;
};