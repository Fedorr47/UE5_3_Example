// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "ThrowableComponent.h"
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

	void CopyThrowableComponentParams(const UThrowableComponent& ThrowableComponent);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;
	virtual UEntityComponent* RetCopiedComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentMesh)
	UStaticMesh* PathMesh;

	UPROPERTY()
	USplineComponent* SplinePredict = nullptr;

	UPROPERTY()
	float VelocityOfProjectile = 0.0f;

	UPROPERTY(EditAnywhere, Category = Projectile)
	bool UseBoneLocationFromAnimation = false;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "UseBoneLocationFromAnimation == false"))
	float ForwardScalar = 1.0f;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "UseBoneLocationFromAnimation == false"))
	float OrtogonalScalar = 1.0f;

	UPROPERTY(EditAnywhere, Category = Projectile, meta = (EditCondition = "UseBoneLocationFromAnimation == true"))
	FName BoneName{};

	UPROPERTY(EditAnywhere, Category = Projectile)
	float AngleMultiplierForPredictLine = 10.0f;

	UPROPERTY(EditAnywhere, Category = Projectile)
	float SimPredcitTime = 4.0f;

	UPROPERTY()
	bool ManuallyCreated = true;

	UPROPERTY()
	TArray<USplineMeshComponent*> SplinePredictMeshes;
};