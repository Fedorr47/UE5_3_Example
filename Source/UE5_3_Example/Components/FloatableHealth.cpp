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

UEntityComponent* UFloatableHealthComponent::RetNewComponent()
{
	UFloatableHealthComponent* FloatableHealthComponent = NewObject<UFloatableHealthComponent>();
	return FloatableHealthComponent;
}

void UFloatableHealthComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
	Super::InitComponent(InWorld, InOwnerObject);
	UMeshComponent* OwnerMesh = Cast<UMeshComponent>(InOwnerObject);
	
	if (IsValid(OwnerMesh))
	{
		mFloatableHealthWC = NewObject<UWidgetComponent>(OwnerMesh, TEXT("Floatable Text"));
		if (IsValid(mFloatableHealthWC))
		{
			mFloatableHealthWC->RegisterComponent();
			mFloatableHealthWC->AttachToComponent(OwnerMesh, FAttachmentTransformRules::KeepRelativeTransform);
			mFloatableHealthWC->SetWidgetClass(FloatableHealthW);
			mFloatableHealthWC->SetVisibility(true);
			mFloatableHealthWC->SetWidgetSpace(EWidgetSpace::World);
			mFloatableHealthWC->SetMobility(EComponentMobility::Movable);
			mFloatableHealthWC->RegisterComponentWithWorld(InWorld);
			mFloatableHealthWC->SetCollisionEnabled(ECollisionEnabled::NoCollision);

			mFloatableHealthW = mFloatableHealthWC->GetWidget();

			CameraManager = (UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0));
			MeshToAttach = OwnerMesh;
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

		Cast<UFloatableHealth>(mFloatableHealthW)->mHealthBar->SetPercent(HealthPercent);
	}
}
