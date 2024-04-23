// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseInteractableActor.h"
#include <Kismet/GameplayStatics.h>

#include "HealthComponent.h"
#include "DamageComponent.h"
#include "Actors/Player/DefaultPlayableCharacter.h"
#include "Systems/DamageSystem.h"

// Sets default values
ABaseInteractableActor::ABaseInteractableActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (RootComponent == nullptr)
	{
		RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("Root"));
	}

	StatMeshComp = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, "Mesh");
	StatMeshComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	StatMeshComp->SetSimulatePhysics(true);

	SkeletalMeshComp = ObjectInitializer.CreateDefaultSubobject<USkeletalMeshComponent>(this, "SkeletalMesh");
	SkeletalMeshComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ABaseInteractableActor::BeginPlay()
{
	//RootComponent = StatMesh;
	Super::BeginPlay();

	if (UWorld* lWorld = GetWorld())
	{
		mWorld = lWorld;
		mGameMode = Cast<AUE5_3_ExampleGameMode>(UGameplayStatics::GetGameMode(mWorld));
		if (IsValid(mGameMode))
		{
			ActorEntity = mGameMode->EntityManager->CreateEntity(this);
			for (FEntityComponentWrapper Component : AttachedComponents)
			{
				if (IsValid(Component.Template))
				{
					Component.Template->InitComponent(mWorld, this);
					Component.Template->OriginalOwnerId = ActorEntity.Id;
					mGameMode->EntityManager->AddCreatedComponent(ActorEntity, Component.Template);
					CreatedComponents.Emplace(Component.Template);
				}
			}
		}
	}
	OnTakeAnyDamage.AddUniqueDynamic(this, &ABaseInteractableActor::TakeBaseDamage);
}

/*
void ABaseInteractableActor::OnStatMeshTransformUpdate(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	UpdateWidgetsLocation();
}
*/

// Called every frame
void ABaseInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseInteractableActor::TakeBaseDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UDamageComponent* DamageComp = mGameMode->EntityManager->AddComponent<UDamageComponent>(ActorEntity);
	if (IsValid(DamageComp))
	{
		DamageComp->DamageAmount = Damage;
	}	
}

void ABaseInteractableActor::Heal(float InHealAmount)
{
	
}


