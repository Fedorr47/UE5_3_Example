// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseInteractableActor.h"
#include <Kismet/GameplayStatics.h>

#include <Kismet/KismetMathLibrary.h>
#include "Blueprint/UserWidget.h"
#include "HealthComponent.h"
#include "DamageComponent.h"
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
}

// Called when the game starts or when spawned
void ABaseInteractableActor::BeginPlay()
{
	//RootComponent = StatMesh;
	Super::BeginPlay();
	mOwnerId = this->GetUniqueID();

	if (UWorld* lWorld = GetWorld())
	{
		mWorld = lWorld;
		mGameMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
		ActorEntity = mGameMode->EntityManager->CreateEntity();
		for (FEntityComponentWrapper Component : AttachedComponents)
		{
			if (IsValid(Component.Template))
			{
				Component.Template->InitComponent(mWorld, StatMeshComp);
				mGameMode->EntityManager->AddCreatedComponent(ActorEntity, Component.Template);
				CreatedComponents.Emplace(Component.Template);
			}
		}
	}
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
	
	for (auto Component : CreatedComponents)
	{
		Component->Update(DeltaTime);
	}

}

void ABaseInteractableActor::TakeBaseDamage(float InDamageAmount)
{
	UDamageComponent* DamageComp = mGameMode->EntityManager->AddComponent<UDamageComponent>(ActorEntity);
	if (IsValid(DamageComp))
	{
		DamageComp->DamageAmount = InDamageAmount;
		DamageSystem::ApplyDamage(mGameMode->EntityManager);
	}	
}

void ABaseInteractableActor::Heal(float InHealAmount)
{
	
}


