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
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
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
						FVector InFrontOwner = UKismetMathLibrary::GetForwardVector(SpawnRotation);
						//InFrontOwner.Z = 0.0f;
						InFrontOwner = InFrontOwner * 20;
						const FVector SpawnLocation = OwnerCharacter->GetActorLocation() + (InFrontOwner);

						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

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
						FVector InFrontOwner = UKismetMathLibrary::GetForwardVector(SpawnRotation);
						//InFrontOwner.Z = 0.0f;
						InFrontOwner = InFrontOwner * 20;
						const FVector SpawnLocation = OwnerCharacter->GetActorLocation() + (InFrontOwner);

						FPredictProjectilePathParams PredictParams;
						FPredictProjectilePathResult PredictResult;

						// TODO: Rewrite Projectile's logic to better version
						ADefaultProjectile* ProjectileDef = ThrowableComp->ProjectileClass.GetDefaultObject();
						float Speed = ProjectileDef->GetProjectileMovement()->InitialSpeed;
						FVector ForwardVector = UKismetMathLibrary::GetForwardVector(SpawnRotation);
						FVector OrtogonalForwardVector = FVector(ForwardVector.Y, -ForwardVector.X, -ForwardVector.Z);
						float DotRes = FVector::DotProduct(ForwardVector, OrtogonalForwardVector);
						const FVector SpawnVelocity = ForwardVector * Speed;

						TArray<AActor*> ActorToIgnore{ OwnerCharacter };

						PredictParams.StartLocation = SpawnLocation;
						PredictParams.LaunchVelocity = SpawnVelocity;
						PredictParams.ActorsToIgnore = ActorToIgnore;

						PredictParams.MaxSimTime = 1.0f;
						PredictParams.bTraceWithCollision = true;
						PredictParams.DrawDebugType = EDrawDebugTrace::None;

						UGameplayStatics::PredictProjectilePath(World, PredictParams, PredictResult);

						ThrowableComp->SplinePredict->ClearSplinePoints();
						int NumOfPoints = PredictResult.PathData.Num();
						int HalfOfPath = NumOfPoints / 2;
						float StepForAngle = (30.0f - 1.0f) / NumOfPoints;

						int PointCounter = 0;
						float NextStep = 0.0f;
						for (FPredictProjectilePathPointData Point : PredictResult.PathData)
						{
							FVector PointLocation = Point.Location + (OrtogonalForwardVector * NextStep + ForwardVector * NextStep);
							ThrowableComp->SplinePredict->AddSplinePoint(PointLocation, ESplineCoordinateSpace::World, false);
							if (PointCounter < HalfOfPath)
							{
								++PointCounter;
								NextStep += StepForAngle;
							}
							else if (NextStep > 0.0f)
							{
								NextStep -= StepForAngle;
							}
						}
						ThrowableComp->SplinePredict->UpdateSpline();

						FVector Location, Tangent, LocationNext, TangentNext;
						
						for (auto* MeshComp : ThrowableComp->SplinePredictMeshes)
						{
							MeshComp->DestroyComponent();
						}
						ThrowableComp->SplinePredictMeshes.Empty();
						for (int i = 0; i < NumOfPoints; ++i)
						{
							auto SplineMeshComp = NewObject<USplineMeshComponent>(OwnerCharacter);
							ThrowableComp->SplinePredictMeshes.Add(SplineMeshComp);
							SplineMeshComp->SetMobility(EComponentMobility::Movable);
							SplineMeshComp->SetStaticMesh(ThrowableActor->StatPredictThrowMeshComp->GetStaticMesh());
							SplineMeshComp->RegisterComponent();
							SplineMeshComp->AttachToComponent(
								OwnerCharacter->GetRootComponent(),
								FAttachmentTransformRules::KeepWorldTransform
							);

							ThrowableComp->SplinePredict->GetLocationAndTangentAtSplinePoint(i, Location, Tangent, ESplineCoordinateSpace::World);
							ThrowableComp->SplinePredict->GetLocationAndTangentAtSplinePoint(i+1, LocationNext, TangentNext, ESplineCoordinateSpace::World);
							ThrowableComp->SplinePredictMeshes.Last()->SetStartAndEnd(Location, Tangent, LocationNext, TangentNext);
						}						
					}
				}
			}
		}
	}
}
