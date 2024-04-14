#include "FireArmWeapon.h"

AFireArmWeapon::AFireArmWeapon(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void AFireArmWeapon::AttachToCharacter(ACharacter* TargetCharacter)
{
	OwnerCharacter = Cast<ADefaultPlayableCharacter>(TargetCharacter);

	if (OwnerCharacter == nullptr)
	{
		return;
	}

	/*
	UThrowableComponent* ThrowableComp = mGameMode->EntityManager->AddComponent<UThrowableComponent>(OwnerCharacter->GetActorEntity());
	if (IsValid(ThrowableComp) && IsValid(ThrowableProjectileClass.Get()))
	{
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);

		if (const APlayerController* PlayerController = Cast<APlayerController>(OwnerCharacter->GetController()))
		{
			if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
			{
				// Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
				Subsystem->AddMappingContext(ThrowMappingContext, 1);
			}

			auto ThrowableSystem = mGameMode->Systems.Find("ThrowableSystem");
			if (ThrowableSystem != nullptr)
			{
				Cast<AThrowableSystem>(*ThrowableSystem)->BindActions(PlayerController, ThrowAction);
			}

		}

		ThrowableComp->InitComponent(mWorld, OwnerCharacter);
		ThrowableComp->ProjectileClass = ThrowableProjectileClass;
		ThrowableComp->IsActiveThrowable = true;
		ThrowableComp->SplinePredict = OwnerCharacter->GetSplinePredict();
		ThrowableComp->SplinePredict->bDrawDebug = true;
	}
	mGameMode->EntityManager->DestroyEntity(ActorEntity);
	*/
	Destroy();
}
