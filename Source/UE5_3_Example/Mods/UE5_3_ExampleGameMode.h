// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <map>
#include <string>
#include "GameFramework/GameModeBase.h"
#include "UE5_3_ExampleGameMode.generated.h"

class UEntityManager;
class UMessageQueue;
class UBaseMessage;
class BaseSystem;

UCLASS(minimalapi)
class AUE5_3_ExampleGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUE5_3_ExampleGameMode();

	virtual void Tick(float DeltaSeconds);

	UPROPERTY()
	UMessageQueue* GeneralMessageQueue;

	UPROPERTY()
	UEntityManager* EntityManager;

	virtual void StartPlay();

	void SendMessage(UBaseMessage* InMsg);

	std::map<std::string, std::shared_ptr<BaseSystem>> Systems;
};

