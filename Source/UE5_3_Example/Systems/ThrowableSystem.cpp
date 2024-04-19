// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ThrowableSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "DefaultPlayableCharacter.h"
#include "BaseInteractableActor.h"
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
}

void AThrowableSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		if (ShouldPredictPath)
		{
			PredictThrow();
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

			ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(Component->GetOwnerObject());
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
			if (IsValid(ThrowableComp) && !WasThrown)
			{
				const ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(ThrowableComp->GetOwnerObject());
				UWorld* World = mEntityManager->GetWorld();
				if (IsValid(World) &&
					IsValid(OwnerCharacter) &&
					ThrowableComp->OriginalOwnerClass.Get() != nullptr)
				{
					const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
					const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
					FVector InFrontOwner = UKismetMathLibrary::GetForwardVector(SpawnRotation);
					FVector OrthogonalForwardVector = FVector(InFrontOwner.Y, -InFrontOwner.X, -InFrontOwner.Z);
					const FVector SpawnLocation = OwnerCharacter->GetActorLocation() + (InFrontOwner * ThrowableComp->ForwardScalar + OrthogonalForwardVector * ThrowableComp->OrtogonalScalar);
					const FVector SpawnVelocity = InFrontOwner * ThrowableComp->ThrowVelocity;

					FActorSpawnParameters ActorSpawnParams;
					ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

					auto SpawnedActor = World->SpawnActor<ABaseInteractableActor>(ThrowableComp->OriginalOwnerClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
					SpawnedActor->GetInteractableMeshComp()->AddImpulseAtLocation(SpawnVelocity, SpawnLocation);

					mEntityManager->RemoveComponentsWithId(Entity, ThrowableComp->OriginalOwnerId);
					
					ShouldPredictPath = false;

					if (OnceThrowPerTime)
					{
						WasThrown = true;
					}		
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
			UWorld* World = mEntityManager->GetWorld();

			if (IsValid(ThrowablePredictComp) &&
				IsValid(World) &&
				NotPredictForATick)
			{
				if (ACharacter* OwnerCharacter = Cast<ACharacter>(ThrowablePredictComp->GetOwnerObject()))
				{
					ClearPredictPath(ThrowablePredictComp, Entity);

					APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
					const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
					FVector InFrontOwner = UKismetMathLibrary::GetForwardVector(SpawnRotation);
					FVector OrthogonalForwardVector = FVector(InFrontOwner.Y, -InFrontOwner.X, 0.0f);
					const FVector SpawnLocation = OwnerCharacter->GetActorLocation() + (InFrontOwner * ThrowablePredictComp->ForwardScalar + OrthogonalForwardVector * ThrowablePredictComp->OrtogonalScalar);

					// Predict Path
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

					FVector Location, Tangent, LocationNext, TangentNext;
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

void AThrowableSystem::ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	if (UThrowableComponent* ThrowComponent = Cast<UThrowableComponent>(EntityComponent))
	{
		UThrowableTypeHolder* ThrowableTypeHolder = nullptr;
		UThrowableTypeHolder** ThrowableTypeHolders = ThrowableComponents.Find(Entity);
		if (ThrowableTypeHolders == nullptr)
		{
			UThrowableTypeHolder* NewHolder = NewObject<UThrowableTypeHolder>();
			NewHolder->Components.Add(ThrowComponent->Type, TArray<UThrowableComponent*>());
			ThrowableComponents.Add(Entity, NewHolder);
			ThrowableTypeHolder = NewHolder;
		}
		else
		{
			ThrowableTypeHolder = *ThrowableTypeHolders;
		}
		auto TypeHolder = ThrowableTypeHolder->Components.Find(ThrowComponent->Type);
		if (TypeHolder == nullptr)
		{
			ThrowableTypeHolder->Components.Add(ThrowComponent->Type, TArray<UThrowableComponent*>());
		}
		ThrowableTypeHolder->Components[ThrowComponent->Type].AddUnique(ThrowComponent);
		if (ThrowComponent->IsAttachedToCharacter)
		{
			SendThrowableCountMsg(ThrowComponent, ThrowableTypeHolder->Components[ThrowComponent->Type].Num());
		}
		else
		{
			ThrowComponent->OriginalOwnerClass = ThrowComponent->GetOwnerObject()->GetClass();
		}

		BindActions(ThrowComponent);
		ADefaultPlayableCharacter* OwnerCharacter = Cast<ADefaultPlayableCharacter>(ThrowComponent->GetOwnerObject());
		if (IsValid(OwnerCharacter))
		{
			UThrowablePredictComponent* AttachedThrowablePredictComp = mEntityManager->AddComponent<UThrowablePredictComponent>(Entity);
			AttachedThrowablePredictComp->InitComponent(mEntityManager->GetWorld(), OwnerCharacter);
			AttachedThrowablePredictComp->SplinePredict = OwnerCharacter->GetSplinePredict();
			AttachedThrowablePredictComp->CopyThrowableComponentParams(*ThrowComponent);
			AttachedThrowablePredictComp->ManuallyCreated = false;
		}
	}
}

void AThrowableSystem::RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	if (UThrowableComponent* ThrowComponent = Cast<UThrowableComponent>(EntityComponent))
	{
		auto ThrowableTypeHolders = ThrowableComponents.Find(Entity);
		if (ThrowableTypeHolders != nullptr)

		{
			auto TypeHolder = (*ThrowableTypeHolders)->Components.Find(ThrowComponent->Type);
			if (TypeHolder != nullptr)
			{
				(*TypeHolder).Remove(ThrowComponent);
				if (ThrowComponent->IsAttachedToCharacter)
				{
					SendThrowableCountMsg(ThrowComponent, (*ThrowableTypeHolders)->Components[ThrowComponent->Type].Num());
				}
			}
		}
	}
	else if (UThrowablePredictComponent* ThrowPredictComponent = Cast<UThrowablePredictComponent>(EntityComponent))
	{
		ClearPredictPath(ThrowPredictComponent, Entity);
	}
}

void AThrowableSystem::SendThrowableCountMsg(UThrowableComponent* Component, int InCount)
{
	AUE5_3_ExampleGameMode* CastedGameMode = Cast<AUE5_3_ExampleGameMode>(mGameMode);

	if (Component->Type == EThrowableType::Grenade && IsValid(CastedGameMode))
	{
		UThrowableChangedMessage* MsgToSend = NewObject<UThrowableChangedMessage>();
		MsgToSend->Type = EMessageType::ThrowableChanged;
		MsgToSend->GrenadeCount = InCount;
		CastedGameMode->SendMessage(Cast<UBaseMessage>(MsgToSend));
	}
}

void AThrowableSystem::ClearPredictPath(UThrowablePredictComponent* ThrowablePredictComp, const FEntity& Entity)
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
	}
}
