// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ThrowableSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Actors/ThrowableActor.h"
#include "ThrowableComponent.h"
#include "DefaultProjectile.h"
#include "ThrowableSystem.h"

ThrowableSystem::ThrowableSystem()
{
}

ThrowableSystem::~ThrowableSystem()
{
}

void ThrowableSystem::ApplyThrow(UEntityManager* EntityManager)
{
	if (!EntityManager) return;

	TArray<FEntity> Entities = EntityManager->GetAllEntities();

	for (const FEntity& Entity : Entities)
	{
		UThrowableComponent* ThrowableComp = EntityManager->GetComponent<UThrowableComponent>(Entity);
		if (IsValid(ThrowableComp))
		{
			if (AThrowableActor* ThrowableActor = Cast<AThrowableActor>(ThrowableComp->GetOwnerObject()))
			{
				ACharacter* OwnerCharacter = Cast<ACharacter>(ThrowableActor->GetThrowbaleOwnerCharacter());
				if (IsValid(OwnerCharacter) && IsValid(ThrowableComp->ProjectileClass.Get()))
				{
					UWorld* World = ThrowableComp->GetComponentWorld();
					if (IsValid(World))
					{
						APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
						const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
						const FVector SpawnLocation = OwnerCharacter->GetActorLocation();

						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						auto* SpawnActor = World->SpawnActor<ADefaultProjectile>(ThrowableComp->ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
					}
				}
			}
		}
	}
}

void ThrowableSystem::PredictThrow(UEntityManager* EntityManager)
{
	if (!EntityManager) return;

	TArray<FEntity> Entities = EntityManager->GetAllEntities();

	for (const FEntity& Entity : Entities)
	{
		UThrowableComponent* ThrowableComp = EntityManager->GetComponent<UThrowableComponent>(Entity);
		if (IsValid(ThrowableComp) && ThrowableComp->IsActiveThrowable)
		{
			if (AThrowableActor* ThrowableActor = Cast<AThrowableActor>(ThrowableComp->GetOwnerObject()))
			{
				ACharacter* OwnerCharacter = Cast<ACharacter>(ThrowableActor->GetThrowbaleOwnerCharacter());
				if (IsValid(OwnerCharacter) && IsValid(ThrowableComp->ProjectileClass.Get()))
				{
					UWorld* World = ThrowableComp->GetComponentWorld();
					if (IsValid(World))
					{
						APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
						const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
						const FVector SpawnLocation = OwnerCharacter->GetActorLocation();

						FPredictProjectilePathParams PredictParams;
						FPredictProjectilePathResult PredictResult;

						// TODO: Rewrite Projectile's logic to better version
						ADefaultProjectile* ProjectileDef = ThrowableComp->ProjectileClass.GetDefaultObject();
						float Speed = ProjectileDef->GetProjectileMovement()->InitialSpeed;
						const FVector SpawnVelocity = UKismetMathLibrary::GetForwardVector(SpawnRotation) * Speed;

						TArray<AActor*> ActorToIgnore{ OwnerCharacter };

						PredictParams.StartLocation = SpawnLocation;
						PredictParams.LaunchVelocity = SpawnVelocity;
						PredictParams.DrawDebugTime = 1.0f;
						PredictParams.ActorsToIgnore = ActorToIgnore;

						PredictParams.MaxSimTime = 4.0f;
						PredictParams.bTraceWithCollision = true;
						PredictParams.DrawDebugType = EDrawDebugTrace::ForOneFrame;

						UGameplayStatics::PredictProjectilePath(World, PredictParams, PredictResult);
					}
				}
			}
		}
	}
}
