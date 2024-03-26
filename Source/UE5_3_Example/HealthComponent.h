// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MessageQueue.h"
#include "BaseComponent.h"
#include "HealthComponent.generated.h"


class AUE5_3_ExampleGameMode;

UENUM(BlueprintType)
enum class UHealthMessageType : uint8
{
	Damage,
	Heal,
	MAX
};

UCLASS()
class UHealthMessage : public UBaseMessage
{
	GENERATED_BODY()

public:

	UHealthMessage(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
	float Amount = 0.0f;

	UPROPERTY()
	UHealthMessageType HealthType = UHealthMessageType::MAX;
};

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
class UE5_3_EXAMPLE_API UHealthComponent : public UBaseComponent
{
	GENERATED_BODY()
	
public:	
	UHealthComponent(const FObjectInitializer& ObjectInitializer);

	virtual UBaseComponent* RetNewComponent(UObject* OwnerObject);

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UFUNCTION()
	void TakeDamage(float InDamageAmount);

	UFUNCTION()
	void Heal(float InHealAmount);

	UFUNCTION()
	void SendPercent();

	UFUNCTION()
	void TakeMsg(UBaseMessage* InMsg);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	float Health = 0.0f;
};
