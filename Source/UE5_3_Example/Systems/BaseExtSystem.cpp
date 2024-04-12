// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/BaseExtSystem.h"
#include "GameFramework/GameModeBase.h"
#include "SystemQueue/EntityManager.h"
#include "Kismet/GameplayStatics.h"

ABaseExtSystem::ABaseExtSystem()
{
}

ABaseExtSystem::~ABaseExtSystem()
{
}

void ABaseExtSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
    if (IsValid(InGameMode) && IsValid(InEntityManager))
    {
        mEntityManager = InEntityManager;
        mGameMode = InGameMode;
    }
}