#include "Systems/AttachedSkeletalMeshSystem.h"

#include <Kismet/GameplayStatics.h>
#include "Math/UnrealMathUtility.h"
#include "DefaultPlayableCharacter.h"
#include "BaseInteractableActor.h"
#include "AttachedSkeletalMeshComponent.h"

void AAttachedSkeletalMeshSystem::InitSystem(UEntityManager* InEntityManager, AGameModeBase* InGameMode)
{
	Super::InitSystem(InEntityManager, InGameMode);
}

void AAttachedSkeletalMeshSystem::UpdateSystem(float DeltaSeconds)
{
	if (!UGameplayStatics::IsGamePaused(mGameMode->GetWorld()))
	{
		
	}
}

void AAttachedSkeletalMeshSystem::ComponentWasAddedImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	if (UAttachedSkeletalMeshComponent* AttachedSkeletalMeshComponent = Cast<UAttachedSkeletalMeshComponent>(EntityComponent))
	{
		AttachSkeletalMesh(AttachedSkeletalMeshComponent);
	}
}

void AAttachedSkeletalMeshSystem::RemoveComponentImpl(const FEntity& Entity, UEntityComponent* EntityComponent)
{
	if (UAttachedSkeletalMeshComponent* AttachedSkeletalMeshComponent = Cast<UAttachedSkeletalMeshComponent>(EntityComponent))
	{
		AttachSkeletalMesh(AttachedSkeletalMeshComponent);
		if (ADefaultPlayableCharacter* PlayableCharacter = Cast<ADefaultPlayableCharacter>(AttachedSkeletalMeshComponent->GetOwnerObject()))
		{
			if (IsValid(AttachedSkeletalMeshComponent->SkeletalMeshComp))
			{
				AttachedSkeletalMeshComponent->SkeletalMeshComp->SetVisibility(false);
				FDetachmentTransformRules DetachmentRules(EDetachmentRule::KeepWorld, true);
				AttachedSkeletalMeshComponent->SkeletalMeshComp->DetachFromComponent(DetachmentRules);
			}
		}
	}
}

void AAttachedSkeletalMeshSystem::AttachSkeletalMesh(UAttachedSkeletalMeshComponent* AttachedSkeletalMeshComponent)
{
	if (ADefaultPlayableCharacter* PlayableCharacter = Cast<ADefaultPlayableCharacter>(AttachedSkeletalMeshComponent->GetOwnerObject()))
	{	
		if (IsValid(AttachedSkeletalMeshComponent->SkeletalMeshComp))
		{
			FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
			AttachedSkeletalMeshComponent->SkeletalMeshComp->SetVisibility(true);
			AttachedSkeletalMeshComponent->SkeletalMeshComp->AttachToComponent(PlayableCharacter->GetMesh1P(), AttachmentRules, FName(TEXT("GripPoint")));
		}
	}
}