// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/BaseExtSystem.h"
#include "GameFramework/GameModeBase.h"
#include "SystemQueue/EntityManager.h"
#include "Kismet/GameplayStatics.h"

void ABaseExtSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
    if (IsValid(InGameMode) && IsValid(InEntityManager))
    {
        mEntityManager = InEntityManager;
        mGameMode = InGameMode;
    }
    InEntityManager->OnAddedComponent.AddUniqueDynamic(this, &ABaseExtSystem::ComponentWasAdded);
    InEntityManager->OnPreRemovedComponent.AddUniqueDynamic(this, &ABaseExtSystem::RemoveComponent);
}

void ABaseExtSystem::ComponentWasAdded(const FEntity& Entity, UEntityComponent* EntityComponent)
{
    ComponentWasAddedImpl(Entity, EntityComponent);
}

void ABaseExtSystem::RemoveComponent(const FEntity& Entity, UEntityComponent* EntityComponent)
{
    RemoveComponentImpl(Entity, EntityComponent);
}
