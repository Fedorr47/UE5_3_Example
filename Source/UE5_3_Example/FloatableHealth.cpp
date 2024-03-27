#include "FloatableHealth.h"
#include "UE5_3_ExampleGameMode.h"
#include <Kismet/GameplayStatics.h>
#include "Components/ProgressBar.h"
#include "HealthComponent.h"
#include "Components/WidgetComponent.h"
#include <Kismet/KismetMathLibrary.h>

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

			mGameMode->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UFloatableHealthComponent::TakeMsg);

			CameraManager = (UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0));
			if (IsValid(CameraManager))
			{
				TArray<USceneComponent*> ChildComponents;
				mFloatableHealthWC->GetAttachmentRoot()->GetChildrenComponents(true, ChildComponents);
				for (auto ChildComp : ChildComponents)
				{
					// TODO: Add a check that current mesh is a goal for a floatable widget
					if (auto Mesh = Cast<UStaticMeshComponent>(ChildComp))
					{
						MeshToAttach = Mesh;
					}
				}
			}
		}	
	}
}

void UFloatableHealthComponent::TakeMsg(UBaseMessage* InMsg)
{
	if (InMsg->Type == UMessageType::HealthPercent && mOwnerId == InMsg->OwnerId)
	{
		auto HealthMessage = static_cast<UHealthPercentMessage*>(InMsg);
		if (IsValid(HealthMessage))
		{
			if (auto FloatalbeHealthWidget = Cast<UFloatableHealth>(mFloatableHealthWC->GetWidget()))
			{
				FloatalbeHealthWidget->mHealthBar->SetPercent(HealthMessage->HealthPercent);
			}
		}
	}
}

void UFloatableHealthComponent::Update(float DeltaTime)
{
	if (IsValid(CameraManager) && IsValid(MeshToAttach))
	{
		FVector MeshLocation = MeshToAttach->GetComponentLocation();
		FVector CameraLocation = CameraManager->GetTransformComponent()->GetComponentLocation();

		FRotator PlayerRot = UKismetMathLibrary::FindLookAtRotation(MeshLocation, CameraLocation);
		mFloatableHealthWC->SetWorldLocationAndRotation(MeshLocation, PlayerRot);
	}
}
