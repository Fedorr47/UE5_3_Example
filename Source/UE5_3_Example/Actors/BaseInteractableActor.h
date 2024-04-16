// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EntityComponent.h"
#include "SystemQueue/EntityManager.h"
#include "BaseInteractableActor.generated.h"

enum class ETeleportType : uint8;
enum class EUpdateTransformFlags : int32;

class UUserWidget;
class UDamageType;
class ADefaultPlayableCharacter;

UCLASS()
class UE5_3_EXAMPLE_API ABaseInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseInteractableActor(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION()
	void TakeBaseDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
	UFUNCTION(BlueprintCallable)
	void Heal(float InHealAmount);

	UFUNCTION()
	UStaticMesh* GetThrowableMesh() const { return StatMeshComp->GetStaticMesh(); }

	UPROPERTY()
	ADefaultPlayableCharacter* OwnerCharacter = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	FEntity ActorEntity;

	UPROPERTY()
	UWorld* mWorld = nullptr;

	UPROPERTY()
	AUE5_3_ExampleGameMode* mGameMode = nullptr;

	UPROPERTY()
	TArray<UEntityComponent*> CreatedComponents;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* StatMeshComp;

	
	//void OnStatMeshTransformUpdate(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditDefaultsOnly, Category = Components)
	UPROPERTY(EditAnywhere, Category = Components)
	TArray<FEntityComponentWrapper> AttachedComponents;
};
