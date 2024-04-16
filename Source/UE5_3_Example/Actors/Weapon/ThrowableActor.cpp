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

void AThrowableActor::AttachToCharacter(ACharacter* TargetCharacter)
{
	OwnerCharacter = Cast<ADefaultPlayableCharacter>(TargetCharacter);

	if (OwnerCharacter == nullptr)
	{
		return;
	}

	UThrowableComponent* ThrowableComp = mGameMode->EntityManager->GetComponent<UThrowableComponent>(this->ActorEntity);
	UThrowablePredictComponent* ThrowablePredictComp = mGameMode->EntityManager->GetComponent<UThrowablePredictComponent>(this->ActorEntity);
	if (IsValid(ThrowableComp))
	{
		ThrowableComp->IsAttachedToCharacter = true;
		ThrowableComp->OwnerCharacter = Cast<AActor>(OwnerCharacter);
		ThrowableComp->InitComponent(mWorld, OwnerCharacter);
		mGameMode->EntityManager->AddCreatedComponent(OwnerCharacter->GetActorEntity(), ThrowableComp);

		if (IsValid(ThrowablePredictComp))
		{
			ThrowablePredictComp->InitComponent(mWorld, OwnerCharacter);
			ThrowablePredictComp->SplinePredict = OwnerCharacter->GetSplinePredict();
			ThrowablePredictComp->VelocityOfProjectile = ThrowableComp->ProjectileClass.GetDefaultObject()->GetProjectileMovement()->InitialSpeed;
			mGameMode->EntityManager->AddCreatedComponent(OwnerCharacter->GetActorEntity(), ThrowablePredictComp);
		}
		mGameMode->EntityManager->DestroyEntity(ActorEntity);
		Destroy();
	}
}
