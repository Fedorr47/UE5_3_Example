// Fill out your copyright notice in the Description page of Project Settings.

#include "ThrowbalePathVisualizer.h"
#include "Actors/ThrowbalePathVisualizer.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"

// Sets default values
AThrowbalePathVisualizer::AThrowbalePathVisualizer(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    if (RootComponent == nullptr)
    {
        RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
    }
	SplineComponent = ObjectInitializer.CreateDefaultSubobject<USplineComponent>(RootComponent, TEXT("SplineComponent"));
}

// Called when the game starts or when spawned
void AThrowbalePathVisualizer::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AThrowbalePathVisualizer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AThrowbalePathVisualizer::VisualizePath(FVector StartLocation, FVector LaunchVelocity)
{
    SplineComponent->ClearSplinePoints(false);

    float TimeStep = 0.1f;
    float TotalTime = 3.0f;
    float Gravity = -980.0f; // См/с^2

    FVector CurrentVelocity = LaunchVelocity;
    FVector CurrentLocation = StartLocation;

    auto* s = NewObject<USplineMeshComponent>(this);
   
    
    
    for (float Time = 0; Time <= TotalTime; Time += TimeStep)
    {
        FVector NextLocation = CurrentLocation + CurrentVelocity * TimeStep + 0.5f * FVector(0, 0, Gravity) * FMath::Pow(TimeStep, 2);
        CurrentVelocity += FVector(0, 0, Gravity) * TimeStep;

        // Добавляем новую точку к сплайну
        SplineComponent->AddSplinePointAtIndex(NextLocation, SplineComponent->GetNumberOfSplinePoints(), ESplineCoordinateSpace::World, false);

        CurrentLocation = NextLocation;
    }

    FVector Location, Tangent, LocationNext, TangentNext;
    for (int32 i = 0; i < TotalTime; ++i) {
        
        s->SetStaticMesh(MeshForPath->GetStaticMesh());
        SplineComponent->GetLocalLocationAndTangentAtSplinePoint(i, Location, Tangent);
        SplineComponent->GetLocalLocationAndTangentAtSplinePoint(i + 1, LocationNext, TangentNext);
        s->SetStartAndEnd(Location, Tangent, LocationNext, TangentNext);
    }

    // Обновляем сплайн для отображения изменений
    SplineComponent->UpdateSpline();
}

void AThrowbalePathVisualizer::SetMeshForPath(UStaticMeshComponent* InMesh)
{
    MeshForPath = NewObject<UStaticMeshComponent>(InMesh);
}

