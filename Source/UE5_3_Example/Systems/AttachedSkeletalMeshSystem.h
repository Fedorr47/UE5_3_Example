// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntityManager.h"
#include "BaseExtSystem.h"
#include "AttachedSkeletalMeshSystem.generated.h"

class AActor;
struct FEntity;
class UAttachedSkeletalMeshComponent;

UCLASS()
class AAttachedSkeletalMeshSystem : public ABaseExtSystem
{
	GENERATED_BODY()
public:

	AAttachedSkeletalMeshSystem(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

	virtual void InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode) override;
	virtual void UpdateSystem(float DeltaSeconds) override;

	virtual void ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;
	virtual void RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent) override;
	void AttachSkeletalMesh(UAttachedSkeletalMeshComponent* AttachedSkeletalMeshComponent);
};
