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

	//for (int i = 0; i < AllUIWidgets.Num(); ++i)
	//{
		UWidgetComponent* WidgetComp = ObjectInitializer.CreateDefaultSubobject<UWidgetComponent>(this, "Health");
		mCreatedWidgetComponents.Emplace(WidgetComp);
	//}
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
		for (TSubclassOf<UBaseComponent> Component : AttachedComponents)
		{
			UBaseComponent* CreatedComponent = Cast<UBaseComponent>(Component->GetDefaultObject());
			CreatedComponent = CreatedComponent->RetNewComponent();
			if (IsValid(CreatedComponent))
			{
				CreatedComponent->InitComponent(mWorld, mOwnerId);
				CreatedComponents.Emplace(CreatedComponent);
			}
		}
	}

	for (int i = 0; i < AllUIWidgets.Num(); ++i)
	{
		auto WidgetComp = mCreatedWidgetComponents[i];
		WidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		WidgetComp->SetWidgetClass(AllUIWidgets[i]);
		WidgetComp->InitWidget();
		WidgetComp->UpdateWidget();	
	}
}

// Called every frame
void ABaseInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

