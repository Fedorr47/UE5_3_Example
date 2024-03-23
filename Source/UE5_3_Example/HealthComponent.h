// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MessageQueue.h"
#include "HealthComponent.generated.h"


UCLASS()
class UHealthMessage : public UMessageBase
{
	GENERATED_BODY()

public:

	UHealthMessage(const FObjectInitializer& ObjectInitializer);

	UHealthMessage(float InNewHealthPercent) :
		NewHealthPercent(InNewHealthPercent)
	{}

	float NewHealthPercent = 0.0f;
};

UCLASS()
class UE5_3_EXAMPLE_API UHealthComponent : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UHealthComponent();

	UFUNCTION()
	void TakeDamage(float InDamageAmount, UWorld* InWorld);

private:
	UPROPERTY()
	float Health = 0.0f;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float MaxHealth = 100.0f;
};
