// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseInteractableActor.h"
#include <Kismet/GameplayStatics.h>
#include <Subsystems/PanelExtensionSubsystem.h>

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
}

// Called when the game starts or when spawned
void ABaseInteractableActor::BeginPlay()
{
	Super::BeginPlay();

	if (UWorld* lWorld = GetWorld())
	{
		mWorld = lWorld;
		mGameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(mWorld));
		for (TSubclassOf<UBaseComponent> Component : AttachedComponents)
		{
			UBaseComponent* CreatedComponent = Cast<UBaseComponent>(Component->GetDefaultObject());
			if (IsValid(CreatedComponent))
			{
				CreatedComponent->SetWorld(mWorld);
				CreatedComponents.Emplace(CreatedComponent);
			}
		}
	}

	for (auto widget : AllUIWidgets)
	{
		UWidgetComponent* WidgetComp = NewObject<UWidgetComponent>(this, widget->GetFName());
		WidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

		UUserWidget* createdWidget = CreateWidget<UUserWidget>(WidgetComp->GetUserWidgetObject(), widget);
		mCreatedWidgets.Add(createdWidget);
	}
}

// Called every frame
void ABaseInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

