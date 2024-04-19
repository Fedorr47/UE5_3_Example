#include "ThrowablePredictComponent.h"
#include "Math/UnrealMathUtility.h"

UThrowablePredictComponent::UThrowablePredictComponent(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
}

void UThrowablePredictComponent::CopyThrowableComponentParams(const UThrowableComponent& ThrowableComponent)
{
	OriginalOwnerId = ThrowableComponent.OriginalOwnerId;
	PathMesh = ThrowableComponent.PredictMesh;
	AngleMultiplierForPredictLine = ThrowableComponent.AngleMultiplierForPredictLine;
	SimPredcitTime = ThrowableComponent.SimPredcitTime;
	VelocityOfProjectile = ThrowableComponent.ThrowVelocity;
	OrtogonalScalar = ThrowableComponent.OrtogonalScalar;
	ForwardScalar = ThrowableComponent.ForwardScalar;
	UseBoneLocationFromAnimation = ThrowableComponent.UseBoneLocationFromAnimation;
	BoneName = ThrowableComponent.BoneName;
	
}

UEntityComponent* UThrowablePredictComponent::RetNewComponent(UObject* OwnerObject)
{
    return NewObject<UThrowablePredictComponent>();
}

void UThrowablePredictComponent::InitComponent(UWorld* InWorld, UObject* InOwnerObject)
{
    Super::InitComponent(InWorld, InOwnerObject);
    //GetComponentGameMode()->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UHealthComponent::TakeMsg);
}