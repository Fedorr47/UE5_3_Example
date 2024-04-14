// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UE5_3_ExampleGameMode.generated.h"

class UEntityManager;
class UMessageQueue;
class UBaseMessage;
class ABaseExtSystem;
class UUserWidget;
class APlayerController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMappingContextAdded, UEnhancedInputComponent*, EnhancedInputComponent, APlayerController*, PlayerController);

UCLASS(minimalapi)
class AUE5_3_ExampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY()
	UUserWidget* mPauseMenu;

public:
	AUE5_3_ExampleGameMode();

	virtual void Tick(float DeltaSeconds);

	UPROPERTY()
	UMessageQueue* GeneralMessageQueue;

	UPROPERTY()
	UEntityManager* EntityManager;

	virtual void StartPlay();

	void SendMessage(UBaseMessage* InMsg);

	UPROPERTY()
	TMap<FString, ABaseExtSystem*> Systems;

	UPROPERTY(EditAnywhere, Category = Menu)
	TSubclassOf<UUserWidget> PauseMenu;

	UPROPERTY(BlueprintAssignable)
	FOnMappingContextAdded OnMappingContextAdded;
};

