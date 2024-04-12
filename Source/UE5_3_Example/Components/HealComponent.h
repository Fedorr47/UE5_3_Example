// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "HealComponent.generated.h"


UCLASS()
class UE5_3_EXAMPLE_API UHealComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UHealComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Heal)
	float HealAmount = 0.0f;
};