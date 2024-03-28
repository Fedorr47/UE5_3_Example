// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE5_3_ExampleGameMode.generated.h"

class UEntityManager;
class UMessageQueue;
class UBaseMessage;

UCLASS(minimalapi)
class AUE5_3_ExampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE5_3_ExampleGameMode();

	UPROPERTY()
	UMessageQueue* GeneralMessageQueue;

	UPROPERTY()
	UEntityManager* EntityManager;

	virtual void StartPlay();

	void SendMessage(UBaseMessage* InMsg);
};



