// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MessageQueue.h"
#include "EntityComponent.h"
#include "HealthComponent.generated.h"

class AUE5_3_ExampleGameMode;

UCLASS()
class UHealthPercentMessage : public UBaseMessage
{
	GENERATED_BODY()

public:

	UHealthPercentMessage(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
	float HealthPercent = 0.0f;
};

UCLASS()
class UE5_3_EXAMPLE_API UHealthComponent : public UEntityComponent
{
	GENERATED_BODY()
	
public:	
	UHealthComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject);

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float Health = 0.0f;
};
