// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ThrowableSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "DefaultPlayableCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "ThrowableComponent.h"
#include "ThrowablePredictComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Actors/Projectiles/DefaultProjectile.h"
#include "MessageQueue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void AThrowableSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
	Super::InitSystem(InEntityManager, InGameMode);
	InEntityManager->OnAddedComponent.AddUniqueDynamic(this, &AThrowableSystem::ComponentWasAdded);
}

void AThrowableSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
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
}

void AThrowableSystem::BindActions(UThrowableComponent* Component)
{
	if (IsValid(Component))
	{
		if (!MappingContexts.Contains(Component->ThrowMappingContext))
		{
			MappingContexts.Add(Component->ThrowMappingContext, NewObject<UActionsHolder>());
		}

		if (MappingContexts[Component->ThrowMappingContext]->Actions.Find(Component->ThrowAction) == INDEX_NONE)
		{

			ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(Component->OwnerCharacter);
			if (IsValid(OwnerCharacter))
			{
				MappingContexts[Component->ThrowMappingContext]->Actions.Add(Component->ThrowAction);
				const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
				if (IsValid(PlayerController))
				{
					if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
					{
						Subsystem->AddMappingContext(Component->ThrowMappingContext, 1);
					}
				}

				if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent))
				{
					EnhancedInputComponent->BindAction(Component->ThrowAction, ETriggerEvent::Started, this, &AThrowableSystem::PredictThrow);
					EnhancedInputComponent->BindAction(Component->ThrowAction, ETriggerEvent::Completed, this, &AThrowableSystem::ApplyThrow);
				}
			}
		}
	}
}

void AThrowableSystem::ApplyThrow()
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
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

							RemoveComponent(Entity, ThrowableComp);
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
			if (UThrowablePredictComponent* ThrowablePredictComp = mEntityManager->GetComponent<UThrowablePredictComponent>(Entity))
			{
				if (IsValid(ThrowablePredictComp->SplinePredict) && ThrowablePredictComp->SplinePredict->GetNumberOfSplinePoints() > 0)
				{
					ThrowablePredictComp->SplinePredict->ClearSplinePoints();
					ThrowablePredictComp->SplinePredict->UpdateSpline();

					for (auto* MeshComp : ThrowablePredictComp->SplinePredictMeshes)
					{
						MeshComp->DestroyComponent();
					}
					ThrowablePredictComp->SplinePredictMeshes.Empty();
					mEntityManager->RemoveComponent(Entity, ThrowablePredictComp);
				}

			}
		}
	}
}

void AThrowableSystem::PredictThrow()
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		if (!mEntityManager) return;

		TArray<FEntity> Entities = mEntityManager->GetAllEntities();

		for (const FEntity& Entity : Entities)
		{
			bool NotPredictForATick = true;
			UThrowablePredictComponent* ThrowablePredictComp = mEntityManager->GetComponent<UThrowablePredictComponent>(Entity);
			if (IsValid(ThrowablePredictComp) &&
				NotPredictForATick)
			{
				if (ACharacter* OwnerCharacter = Cast<ACharacter>(ThrowablePredictComp->GetOwnerObject()))
				{
					UWorld* World = ThrowablePredictComp->GetComponentWorld();
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
						const FVector SpawnVelocity = InFrontOwner * ThrowablePredictComp->VelocityOfProjectile;

						TArray<AActor*> ActorToIgnore{ OwnerCharacter };

						PredictParams.StartLocation = SpawnLocation;
						PredictParams.LaunchVelocity = SpawnVelocity;
						PredictParams.ActorsToIgnore = ActorToIgnore;

						PredictParams.MaxSimTime = 4.0f;
						PredictParams.bTraceWithCollision = true;
						PredictParams.DrawDebugType = EDrawDebugTrace::None;

						UGameplayStatics::PredictProjectilePath(World, PredictParams, PredictResult);

						ThrowablePredictComp->SplinePredict->ClearSplinePoints();
						int NumOfPoints = PredictResult.PathData.Num();
						float StepForAngle = 3.14159f / NumOfPoints;

						float NextStep = 0.0f;
						for (FPredictProjectilePathPointData& Point : PredictResult.PathData)
						{
							float SinVal = FMath::Sin(NextStep) * 10.0f;
							FVector PointLocation = Point.Location + OrthogonalForwardVector * (1.0f + SinVal);
							ThrowablePredictComp->SplinePredict->AddSplinePoint(PointLocation, ESplineCoordinateSpace::World, false);
							NextStep += StepForAngle;
						}
						ThrowablePredictComp->SplinePredict->UpdateSpline();

						FVector Location, Tangent, LocationNext, TangentNext;
						for (auto* MeshComp : ThrowablePredictComp->SplinePredictMeshes)
						{
							MeshComp->DestroyComponent();
						}
						ThrowablePredictComp->SplinePredictMeshes.Empty();
						for (int i = 0; i < NumOfPoints; ++i)
						{
							auto SplineMeshComp = NewObject<USplineMeshComponent>(OwnerCharacter);
							ThrowablePredictComp->SplinePredictMeshes.Add(SplineMeshComp);
							SplineMeshComp->SetMobility(EComponentMobility::Movable);
							SplineMeshComp->SetStaticMesh(ThrowablePredictComp->PathMesh);
							SplineMeshComp->RegisterComponent();
							SplineMeshComp->AttachToComponent(
								OwnerCharacter->GetRootComponent(),
								FAttachmentTransformRules::KeepWorldTransform
							);

							ThrowablePredictComp->SplinePredict->GetLocationAndTangentAtSplinePoint(i, Location, Tangent, ESplineCoordinateSpace::World);
							ThrowablePredictComp->SplinePredict->GetLocationAndTangentAtSplinePoint(i + 1, LocationNext, TangentNext, ESplineCoordinateSpace::World);
							ThrowablePredictComp->SplinePredictMeshes.Last()->SetStartAndEnd(Location, Tangent, LocationNext, TangentNext);
						}

						ShouldPredictPath = true;
						NotPredictForATick = true;
					}
				}
			}
		}
	}
}

void AThrowableSystem::ComponentWasAdded(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	UThrowableComponent* Component = Cast<UThrowableComponent>(EntityComponent);
	if (IsValid(Component))
	{
		UThrowableTypeHolder* ThrowableTypeHolder = nullptr;
		UThrowableTypeHolder** ThrowableTypeHolders = ThrowableComponents.Find(Entity);
		if (ThrowableTypeHolders == nullptr)
		{
			UThrowableTypeHolder* NewHolder = NewObject<UThrowableTypeHolder>();
			NewHolder->Components.Add(Component->Type, TArray<UThrowableComponent*>());
			ThrowableComponents.Add(Entity, NewHolder);
			ThrowableTypeHolder = NewHolder;
		}
		else
		{
			ThrowableTypeHolder = *ThrowableTypeHolders;
		}
		auto TypeHolder = ThrowableTypeHolder->Components.Find(Component->Type);
		if (TypeHolder == nullptr)
		{
			ThrowableTypeHolder->Components.Add(Component->Type, TArray<UThrowableComponent*>());
		}
		ThrowableTypeHolder->Components[Component->Type].AddUnique(Component);
		if (Component->IsAttachedToCharacter)
		{
			SendThrowableCountMsg(Component, ThrowableTypeHolder->Components[Component->Type].Num());
		}
		BindActions(Component);
	}
}

void AThrowableSystem::RemoveComponent(const FEntity& Entity, UThrowableComponent* Component)
{
	if (IsValid(Component))
	{
		auto ThrowableTypeHolders = ThrowableComponents.Find(Entity);
		if (ThrowableTypeHolders != nullptr)

		{
			auto TypeHolder = (*ThrowableTypeHolders)->Components.Find(Component->Type);
			if (TypeHolder != nullptr)
			{
				(*TypeHolder).Remove(Component);
				if (Component->IsAttachedToCharacter)
				{
					SendThrowableCountMsg(Component, (*ThrowableTypeHolders)->Components[Component->Type].Num());
				}
			}
		}
	}
}

void AThrowableSystem::SendThrowableCountMsg(UThrowableComponent* Component, int InCount)
{
	AUE5_3_ExampleGameMode* CastedGameMode = Cast<AUE5_3_ExampleGameMode>(mGameMode);

	if (Component->Type == EThrowableType::Grenade && IsValid(CastedGameMode))
	{
		UThrowableChangedMessage* MsgToSend = NewObject<UThrowableChangedMessage>();
		MsgToSend->TypeName = MsgToSend->GetClass()->GetName();
		MsgToSend->GrenadeCount = InCount;
		CastedGameMode->SendMessage(Cast<UBaseMessage>(MsgToSend));
	}
}
