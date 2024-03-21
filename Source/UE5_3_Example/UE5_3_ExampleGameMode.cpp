// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_3_ExampleGameMode.h"
#include "UE5_3_ExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_3_ExampleGameMode::AUE5_3_ExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
