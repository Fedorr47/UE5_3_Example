// Fill out your copyright notice in the Description page of Project Settings.

#include "Systems/ThrowableSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"

#include "GameFramework/Actor.h"
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
            if (auto OwnerActor = Cast<AActor>(ThrowableComp->GetOwnerObject()))
            {
				// Try and fire a projectile
				if (ThrowableComp->ProjectileClass != nullptr)
				{
                    UWorld* World = ThrowableComp->GetComponentWorld();
					if (IsValid(World))
					{
                        /*
						APlayerController* PlayerController = Cast<APlayerController>(OwnerActor->GetController());
						const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
						// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
						const FVector SpawnLocation = OwnerActor()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);

						//Set Spawn Collision Handling Override
						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						// Spawn the projectile at the muzzle
						World->SpawnActor<DefaultProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
                        */
					}
				}
                VisualizePath(OwnerActor, ThrowableComp->ThrowVector);
            }
        }
    }
}

void ThrowableSystem::VisualizePath(AActor* SplineActorToAttach, FVector LaunchVelocity)
{
    if (IsValid(SplineActorToAttach))
    {
        
    }
}
