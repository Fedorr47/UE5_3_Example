// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "BaseInteractableActor.generated.h"

UCLASS()
class UE5_3_EXAMPLE_API ABaseInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseInteractableActor(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UUserWidget>> AllUIWidgets;

private:

	UPROPERTY()
	UWorld* mWorld = nullptr;

	UPROPERTY()
	AUE5_3_ExampleGameMode* mGameMode = nullptr;

	UPROPERTY()
	TArray<UBaseComponent*> CreatedComponents;

	UPROPERTY()
	TArray <UUserWidget*> mCreatedWidgets;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category = Health)
	TArray<TSubclassOf<UBaseComponent>> AttachedComponents;
};
