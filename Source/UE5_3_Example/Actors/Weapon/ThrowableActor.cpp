// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowableActor.h"
#include "Components/SplineComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ThrowableComponent.h"
#include "ThrowablePredictComponent.h"
#include "Systems/ThrowableSystem.h"
#include "Components/SplineMeshComponent.h"
#include "Actors/Projectiles/DefaultProjectile.h"

AThrowableActor::AThrowableActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
	if (RootComponent == nullptr)
	{
		RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	}
}

void AThrowableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AThrowableActor::BeginPlay()
{
	Super::BeginPlay();
}
