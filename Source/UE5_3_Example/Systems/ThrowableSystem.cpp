// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ThrowableSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "GameFramework/Character.h"
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
				if (IsValid(OwnerCharacter) && IsValid(ThrowableComp->ProjectileMesh))
				{
                    UWorld* World = ThrowableComp->GetComponentWorld();
					if (IsValid(World))
					{
						APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController());
						const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
						const FVector SpawnLocation = OwnerCharacter->GetActorLocation();

						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						auto* SpawnActor = World->SpawnActor<ADefaultProjectile>(ADefaultProjectile::StaticClass(), SpawnLocation, SpawnRotation, ActorSpawnParams);
						SpawnActor->SetMesh(ThrowableComp->ProjectileMesh);
					}
					//FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult
					//UGameplayStatics::PredictProjectilePath(World, )
				}
            }
        }
    }
}
