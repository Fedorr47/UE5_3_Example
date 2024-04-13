// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ThrowableSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "DefaultPlayableCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Actors/Weapon/ThrowableActor.h"
#include "ThrowableComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Actors/Projectiles/DefaultProjectile.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AThrowableSystem::AThrowableSystem()
{
}

AThrowableSystem::~AThrowableSystem()
{
}

void AThrowableSystem::UpdateSystem(float DeltaSeconds)
{
	if (ShouldPredictPath)
	{
		PredictThrow();
	}
	if (CurrentTimeAfterThrow <= WaitForNextTrow)
	{
		CurrentTimeAfterThrow += DeltaSeconds;
	}
}

void AThrowableSystem::BindActions(const APlayerController* PlayerController, UInputAction* ThrowAction)
{
	if (ActionsNotBind)
	{
		if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
		{
			EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Started, this, &AThrowableSystem::PredictThrow);
			EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Completed, this, &AThrowableSystem::ApplyThrow);
		}
		ActionsNotBind = false;
	}
}

void AThrowableSystem::ApplyThrow()
{
	if (!mEntityManager) return;

	TArray<FEntity> Entities = mEntityManager->GetAllEntities();

	for (const FEntity& Entity : Entities)
	{
		bool WasThrown = false;
		UThrowableComponent* ThrowableComp = mEntityManager->GetComponent<UThrowableComponent>(Entity);
		if (IsValid(ThrowableComp) && CurrentTimeAfterThrow >= WaitForNextTrow && !WasThrown)
		{
			if (const ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(ThrowableComp->GetOwnerObject()))
			{
				if (IsValid(OwnerCharacter) && IsValid(ThrowableComp->ProjectileClass.Get()))
				{
					UWorld* World = ThrowableComp->GetComponentWorld();
					if (IsValid(World))
					{
						const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
						const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
						FVector InFrontOwner = UKismetMathLibrary::GetForwardVector(SpawnRotation);
						FVector OrthogonalForwardVector = FVector(InFrontOwner.Y, -InFrontOwner.X, -InFrontOwner.Z);
						const FVector SpawnLocation = OwnerCharacter->GetActorLocation() + (InFrontOwner + OrthogonalForwardVector * -100.0f);

						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

						World->SpawnActor<ADefaultProjectile>(ThrowableComp->ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

			
						ThrowableComp->SplinePredict->ClearSplinePoints();
						ThrowableComp->SplinePredict->UpdateSpline();

						for (auto* MeshComp : ThrowableComp->SplinePredictMeshes)
						{
							MeshComp->DestroyComponent();
						}
						ThrowableComp->SplinePredictMeshes.Empty();

						mEntityManager->RemoveComponent(Entity, ThrowableComp);

						ShouldPredictPath = false;

						if (WaitForNextTrow > 0.0f)
						{
							CurrentTimeAfterThrow = 0.0f;
						}
						if (OnceThrowPerTime)
						{
							WasThrown = true;
						}
					}
				}
			}
		}
	}
}

void AThrowableSystem::PredictThrow()
{

	if (!mEntityManager) return;

	TArray<FEntity> Entities = mEntityManager->GetAllEntities();

	for (const FEntity& Entity : Entities)
	{
		bool NotPredictForATick = true;
		UThrowableComponent* ThrowableComp = mEntityManager->GetComponent<UThrowableComponent>(Entity);
		if (IsValid(ThrowableComp) && 
			ThrowableComp->IsActiveThrowable &&
			IsValid(ThrowableComp->ProjectileClass.Get()) &&
			NotPredictForATick)
		{
			if (ACharacter* OwnerCharacter = Cast<ACharacter>(ThrowableComp->GetOwnerObject()))
			{
				UWorld* World = ThrowableComp->GetComponentWorld();
				if (IsValid(World))
				{
					APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
					const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
					FVector InFrontOwner = UKismetMathLibrary::GetForwardVector(SpawnRotation);
					FVector OrthogonalForwardVector = FVector(InFrontOwner.Y, -InFrontOwner.X, 0.0f);
					const FVector SpawnLocation = OwnerCharacter->GetActorLocation() + (InFrontOwner + OrthogonalForwardVector * -100.0f);

					FPredictProjectilePathParams PredictParams;
					FPredictProjectilePathResult PredictResult;

					// TODO: Rewrite Projectile's logic to better version
					ADefaultProjectile* ProjectileDef = ThrowableComp->ProjectileClass.GetDefaultObject();
					float Speed = ProjectileDef->GetProjectileMovement()->InitialSpeed;
					const FVector SpawnVelocity = InFrontOwner * Speed;

					TArray<AActor*> ActorToIgnore{ OwnerCharacter };

					PredictParams.StartLocation = SpawnLocation;
					PredictParams.LaunchVelocity = SpawnVelocity;
					PredictParams.ActorsToIgnore = ActorToIgnore;

					PredictParams.MaxSimTime = 4.0f;
					PredictParams.bTraceWithCollision = true;
					PredictParams.DrawDebugType = EDrawDebugTrace::None;

					UGameplayStatics::PredictProjectilePath(World, PredictParams, PredictResult);

					ThrowableComp->SplinePredict->ClearSplinePoints();
					int NumOfPoints = PredictResult.PathData.Num();
					float StepForAngle = 3.14159f / NumOfPoints;

					float NextStep = 0.0f;
					for (FPredictProjectilePathPointData& Point : PredictResult.PathData)
					{
						float SinVal = FMath::Sin(NextStep) * 10.0f;
						FVector PointLocation = Point.Location + OrthogonalForwardVector * (1.0f + SinVal);
						ThrowableComp->SplinePredict->AddSplinePoint(PointLocation, ESplineCoordinateSpace::World, false);
						NextStep += StepForAngle;
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
						SplineMeshComp->SetStaticMesh(ThrowableComp->ProjectileClass.GetDefaultObject()->GetPredictThrowMeshComp()->GetStaticMesh());
						SplineMeshComp->RegisterComponent();
						SplineMeshComp->AttachToComponent(
							OwnerCharacter->GetRootComponent(),
							FAttachmentTransformRules::KeepWorldTransform
						);

						ThrowableComp->SplinePredict->GetLocationAndTangentAtSplinePoint(i, Location, Tangent, ESplineCoordinateSpace::World);
						ThrowableComp->SplinePredict->GetLocationAndTangentAtSplinePoint(i+1, LocationNext, TangentNext, ESplineCoordinateSpace::World);
						ThrowableComp->SplinePredictMeshes.Last()->SetStartAndEnd(Location, Tangent, LocationNext, TangentNext);
					}

					ShouldPredictPath = true;
					NotPredictForATick = true;
				}
			}
		}
	}
}
