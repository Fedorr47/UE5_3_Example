// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EntityComponent.h"
#include "Components/WidgetComponent.h"
#include "SystemQueue/EntityManager.h"
#include "BaseInteractableActor.generated.h"

enum class ETeleportType : uint8;
enum class EUpdateTransformFlags : int32;

class UUserWidget;

UCLASS()
class UE5_3_EXAMPLE_API ABaseInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseInteractableActor(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(BlueprintCallable)
	void TakeDamage(float InDamageAmount);
	UFUNCTION(BlueprintCallable)
	void Heal(float InHealAmount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	uint32 mOwnerId;

	UPROPERTY()
	FEntity ActorEntity;

	UPROPERTY()
	UWorld* mWorld = nullptr;

	UPROPERTY()
	AUE5_3_ExampleGameMode* mGameMode = nullptr;

	UPROPERTY()
	TArray<UEntityComponent*> CreatedComponents;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* StatMesh;

	//void OnStatMeshTransformUpdate(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditDefaultsOnly, Category = Components)
	UPROPERTY(EditAnywhere, Category = Components)
	TArray<FEntityComponentWrapper> AttachedComponents;
};
