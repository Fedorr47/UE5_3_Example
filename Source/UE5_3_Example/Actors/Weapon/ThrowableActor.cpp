// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowableActor.h"
#include "Components/SplineComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ThrowableComponent.h"
#include "Systems/ThrowableSystem.h"
#include "Components/SplineMeshComponent.h"
#include "Actors/Player/DefaultPlayableCharacter.h"
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
	//if (bDrawPredictTrace)
	//{
	//	ThrowableSystem::PredictThrow(mGameMode->EntityManager);
	//}
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

	UThrowableComponent* ThrowableComp = mGameMode->EntityManager->AddComponent<UThrowableComponent>(ActorEntity);
	if (IsValid(ThrowableComp) && IsValid(ThrowableProjectileClass.Get()))
	{
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);

		if (const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController()))
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
			{
				// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
				Subsystem->AddMappingContext(ThrowMappingContext, 1);
			}
			
			auto ThrowableSystem = mGameMode->Systems.Find("ThrowableSystem");
			if (ThrowableSystem != nullptr)
			{
				Cast<AThrowableSystem>(*ThrowableSystem)->BindActions(PlayerController, ThrowAction);
			}
			
		}

		ThrowableComp->InitComponent(mWorld, OwnerCharacter);
		ThrowableComp->ProjectileClass = ThrowableProjectileClass;
		ThrowableComp->IsActiveThrowable = true;
		ThrowableComp->SplinePredict = OwnerCharacter->GetSplinePredict();
		ThrowableComp->SplinePredict->bDrawDebug = true;
	}
	Destroy();
}

/*
void AThrowableActor::ActiveThrow()
{
	bDrawPredictTrace = false;
	ThrowableSystem::ApplyThrow(mGameMode->EntityManager);
}

void AThrowableActor::PredictThrow()
{
	bDrawPredictTrace = true;
}*/