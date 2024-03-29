// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "TimerComponent.generated.h"

UCLASS()
class UE5_3_EXAMPLE_API UTimerComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UTimerComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject);

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Timer)
	float TimeLeft;
};
