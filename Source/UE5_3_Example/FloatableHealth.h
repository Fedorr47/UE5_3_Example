// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FloatableHealth.generated.h"

class UProgressBar;

UCLASS()
class UE5_3_EXAMPLE_API UFloatableHealth : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnInitialized() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* mHelthBar;

	UFUNCTION()
	void HealthWasChanged(UBaseMessage* InMsg);
};
