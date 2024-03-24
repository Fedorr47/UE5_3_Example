// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MessageQueue.h"
#include "UE5_3_ExampleGameMode.generated.h"

UCLASS(minimalapi)
class AUE5_3_ExampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE5_3_ExampleGameMode();

	UPROPERTY()
	UMessageQueue* GeneralMessageQueue;

	virtual void StartPlay();

	void SendMessage(UBaseMessage* InMsg);
};



