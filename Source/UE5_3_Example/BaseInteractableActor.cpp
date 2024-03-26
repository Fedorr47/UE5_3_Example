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
}

// Called when the game starts or when spawned
void ABaseInteractableActor::BeginPlay()
{
	Super::BeginPlay();
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
		StatMesh->TransformUpdated.AddUObject(this, &ABaseInteractableActor::OnStatMeshTransformUpdate);
		StatMesh->SetSimulatePhysics(true);
	}
}

void ABaseInteractableActor::OnStatMeshTransformUpdate(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	UpdateWidgetsLocation();
}

void ABaseInteractableActor::UpdateWidgetsLocation()
{
	if (IsValid(CameraManager) && IsValid(StatMesh))
	{
		FVector MeshLocation = StatMesh->GetComponentLocation();
		FVector CameraLocation = CameraManager->GetTransformComponent()->GetComponentLocation();

		FRotator PlayerRot = UKismetMathLibrary::FindLookAtRotation(MeshLocation, CameraLocation);

		// TODO: Add a special flag for a movable widget
//		for (auto WidgetComp : mCreatedWidgetComponents)
//		{
//			WidgetComp->SetWorldLocationAndRotation(MeshLocation, PlayerRot);
//		}
	}
}

// Called every frame
void ABaseInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

