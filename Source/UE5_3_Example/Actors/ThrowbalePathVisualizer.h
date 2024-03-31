// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThrowbalePathVisualizer.generated.h"

class USplineComponent;

UCLASS()
class UE5_3_EXAMPLE_API AThrowbalePathVisualizer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThrowbalePathVisualizer(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void VisualizePath(FVector StartLocation, FVector LaunchVelocity);

	void SetMeshForPath(UStaticMeshComponent* InMesh);


	UPROPERTY(EditAnywhere)
	USplineComponent* SplineComponent = nullptr;

	UPROPERTY()
	UStaticMeshComponent* MeshForPath;
};
