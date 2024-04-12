// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_3_ExampleGameMode.h"
#include "DefaultPlayableCharacter.h"
#include "MessageQueue.h"
#include "SystemQueue/EntityManager.h"
#include "Systems/ThrowableSystem.h"
#include "UObject/ConstructorHelpers.h"

AUE5_3_ExampleGameMode::AUE5_3_ExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void AUE5_3_ExampleGameMode::Tick(float DeltaSeconds)
{
	if (IsValid(EntityManager))
	{
		for (auto System : Systems)
		{
			System.second->UpdateSystem(DeltaSeconds);
		}
	}
}

void AUE5_3_ExampleGameMode::StartPlay()
{
	GeneralMessageQueue = NewObject<UMessageQueue>();
	EntityManager = NewObject<UEntityManager>();
	// Systems
	Systems.emplace("ThrowableSystem", std::make_shared<ThrowableSystem>());
	Super::StartPlay();	
}

void AUE5_3_ExampleGameMode::SendMessage(UBaseMessage* InMsg)
{
	GeneralMessageQueue->Push(InMsg);
}
