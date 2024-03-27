// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseInteractableActor.h"
#include <Kismet/GameplayStatics.h>
#include <Subsystems/PanelExtensionSubsystem.h>
#include <Kismet/KismetMathLibrary.h>
#include "Blueprint/UserWidget.h"

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

	StatMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, "Mesh");
	StatMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	StatMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ABaseInteractableActor::BeginPlay()
{
	mOwnerId = this->GetUniqueID();

	if (UWorld* lWorld = GetWorld())
	{
		mWorld = lWorld;
		mGameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
		for (FBaseComponentWrapper Component : AttachedComponents)
		{
			if (IsValid(Component.Template))
			{
				Component.Template->InitComponent(mWorld, this);
				CreatedComponents.Emplace(Component.Template);
			}
		}
		//StatMesh->TransformUpdated.AddUObject(this, &ABaseInteractableActor::OnStatMeshTransformUpdate);	
	}
	Super::BeginPlay();
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

