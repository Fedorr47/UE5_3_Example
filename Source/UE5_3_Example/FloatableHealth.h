// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseComponent.h"
#include "FloatableHealth.generated.h"

class UProgressBar;
class UWidgetComponent;

UCLASS()
class UE5_3_EXAMPLE_API UFloatableHealth : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnInitialized() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* mHealthBar;
};

UCLASS()
class UE5_3_EXAMPLE_API UFloatableHealthComponent : public UBaseComponent
{
	GENERATED_BODY()

public:
	UFloatableHealthComponent(const FObjectInitializer& ObjectInitializer);

	virtual UBaseComponent* RetNewComponent();

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UFUNCTION()
	void TakeMsg(UBaseMessage* InMsg);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	TSubclassOf<UFloatableHealth> FloatableHealthW;

private:
	UPROPERTY()
	UWidgetComponent* mFloatableHealthWC = nullptr;

	UPROPERTY()
	APlayerCameraManager* CameraManager = nullptr;
};

