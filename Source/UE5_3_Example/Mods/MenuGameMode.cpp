// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuGameMode.h"
#include "UObject/ConstructorHelpers.h"

AMenuGameMode::AMenuGameMode()
	: Super()
{	
	PrimaryActorTick.bCanEverTick = true;
}

void AMenuGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AMenuGameMode::StartPlay()
{
	Super::StartPlay();	
}
