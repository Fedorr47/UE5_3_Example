// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "ThrowablePredictComponent.generated.h"

class ADefaultProjectile;
class USplineComponent;
class USplineMeshComponent;

UCLASS()
class UE5_3_EXAMPLE_API UThrowablePredictComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UThrowablePredictComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentMesh)
	UStaticMesh* PathMesh;

	UPROPERTY()
	USplineComponent* SplinePredict = nullptr;

	UPROPERTY()
	float VelocityOfProjectile = 0.0f;

	UPROPERTY()
	bool ManuallyCreated = true;

	UPROPERTY()
	TArray<USplineMeshComponent*> SplinePredictMeshes;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<ADefaultProjectile> ProjectileClass;
};