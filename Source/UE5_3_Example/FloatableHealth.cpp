#include "FloatableHealth.h"
#include "UE5_3_ExampleGameMode.h"
#include <Kismet/GameplayStatics.h>
#include "Components/ProgressBar.h"
#include "HealthComponent.h"
#include "Components/WidgetComponent.h"

void UFloatableHealth::NativeConstruct()
{
	Super::NativeConstruct();
}

void UFloatableHealth::NativeDestruct()
{
	Super::NativeDestruct();
}

void UFloatableHealth::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (IsValid(mHealthBar))
	{
		mHealthBar->SetPercent(1.0f);
	}
	if (UWorld* world = UUserWidget::GetWorld())
	{
		const auto GameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(world));
		//GameMode->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UFloatableHealth::HealthWasChanged);
	}
}

UFloatableHealthComponent::UFloatableHealthComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

UBaseComponent* UFloatableHealthComponent::RetNewComponent()
{
	UFloatableHealthComponent* FloatableHealthComponent = NewObject<UFloatableHealthComponent>();
	return FloatableHealthComponent;
}

void UFloatableHealthComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
	AActor* OwnerActor = Cast<AActor>(InOwnerObject);
	
	if (IsValid(OwnerActor))
	{
		mFloatableHealthWC = NewObject<UWidgetComponent>(OwnerActor, TEXT("Floatable Text"));
		if (IsValid(mFloatableHealthWC))
		{
			mFloatableHealthWC->RegisterComponent();
			mFloatableHealthWC->AttachToComponent(OwnerActor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			mFloatableHealthWC->SetWidgetClass(FloatableHealthW);
			mFloatableHealthWC->SetVisibility(true);
			mFloatableHealthWC->SetWidgetSpace(EWidgetSpace::World);
			mFloatableHealthWC->SetMobility(EComponentMobility::Movable);
			mFloatableHealthWC->RegisterComponentWithWorld(InWorld);

			CameraManager = (UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0));
		}	
	}
}

void UFloatableHealthComponent::TakeMsg(UBaseMessage* InMsg)
{
}
