// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "ThrowableSystem.generated.h"

class ACharacter;

UCLASS()
class AThrowableSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:
	AThrowableSystem();
	~AThrowableSystem();

	virtual void UpdateSystem(float DeltaSeconds) override;

	void BindActions(const APlayerController* PlayerController, UInputAction* ThrowAction);

	void ApplyThrow();
	void PredictThrow();

private:
	UPROPERTY()
	bool ActionsNotBind = true;

	UPROPERTY()
	bool ShouldPredictPath = false;

	UPROPERTY()
	bool OnceThrowPerTime = true;

	UPROPERTY()
	float WaitForNextTrow = 0.0f;

	UPROPERTY()
	float CurrentTimeAfterThrow = 0.0f;
};
