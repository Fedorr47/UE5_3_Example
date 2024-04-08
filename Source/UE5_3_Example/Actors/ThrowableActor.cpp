// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/ThrowableActor.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "ThrowableComponent.h"
#include "Systems/ThrowableSystem.h"
#include "Components/SplineComponent.h"
#include "DefaultPlaybleCharacter.h"
#include "Components/SplineMeshComponent.h"
#include "InputActionValue.h"

AThrowableActor::AThrowableActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
	if (RootComponent == nullptr)
	{
		RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	}
	StatPredictThrowMeshComp = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, "MeshPath");
}

void AThrowableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bDrawPredictTrace)
	{
		ThrowableSystem::PredictThrow(mGameMode->EntityManager);
	}
}

void AThrowableActor::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(TemplatePhysicComponent.Template))
	{
		PhysicComponent = TemplatePhysicComponent.Template;
		PhysicComponent->InitComponent(mWorld, StatMeshComp);
		mGameMode->EntityManager->AddCreatedComponent(ActorEntity, PhysicComponent);
		CreatedComponents.Emplace(PhysicComponent);
	}
}

void AThrowableActor::AttachToCharacter(ACharacter* TargetCharacter)
{
	OwnerCharacter = Cast<ADefaultPlaybleCharacter>(TargetCharacter);

	// Check that the character is valid, and has no rifle yet
	if (OwnerCharacter == nullptr)
	{
		return;
	}

	ThrowableComp = mGameMode->EntityManager->GetComponent<UThrowableComponent>(ActorEntity);
	if (!IsValid(ThrowableComp))
	{
		ThrowableComp = mGameMode->EntityManager->AddComponent<UThrowableComponent>(ActorEntity);
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);

		if (APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController()))
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
			{
				// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
				Subsystem->AddMappingContext(ThrowMappingContext, 1);
			}

			if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
			{
				EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Started, this, &AThrowableActor::PredictThrow);
				EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Completed, this, &AThrowableActor::ActiveThrow);
			}
		}
	}
	if (IsValid(ThrowableComp) && IsValid(ThrowableProjectileClass.Get()))
	{
		ThrowableComp->InitComponent(mWorld, this);
		ThrowableComp->ThrowVector = PhysicComponent->Velocity;
		ThrowableComp->ProjectileClass = ThrowableProjectileClass;
		ThrowableComp->IsActiveThrowable = true;
		ThrowableComp->SplinePredict = OwnerCharacter->GetSplinePredict();
		ThrowableComp->SplinePredict->bDrawDebug = true;
		CreatedComponents.Emplace(ThrowableComp);
	}
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AThrowableActor::ActiveThrow()
{
	bDrawPredictTrace = false;
	ThrowableSystem::ApplyThrow(mGameMode->EntityManager);
	if (IsValid(ThrowableComp))
	{
		ThrowableComp->SplinePredict->ClearSplinePoints();
		ThrowableComp->SplinePredict->UpdateSpline();
	}
}

void AThrowableActor::PredictThrow()
{
	bDrawPredictTrace = true;
}
