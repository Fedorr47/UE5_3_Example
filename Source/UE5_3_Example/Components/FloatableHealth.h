// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EntityComponent.h"
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

public:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* mHealthBar;
};

UCLASS()
class UE5_3_EXAMPLE_API UFloatableHealthComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UFloatableHealthComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent();

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	virtual void Update(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FlaotableHealthWidget)
	TSubclassOf<UFloatableHealth> FloatableHealthW;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FlaotableHealth)
	float HealthPercent = 1.0f;

private:
	UPROPERTY()
	UWidgetComponent* mFloatableHealthWC = nullptr;

	UPROPERTY()
	UUserWidget* mFloatableHealthW = nullptr;

	UPROPERTY()
	APlayerCameraManager* CameraManager = nullptr;

	UPROPERTY()
	UStaticMeshComponent* MeshToAttach = nullptr;
};

