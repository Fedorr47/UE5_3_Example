#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseInteractableActor.h"
#include "FireArmWeapon.generated.h"

class UInputMappingContext;
class UInputAction;
class ADefaultPlayableCharacter;
class ADefaultProjectile;

UCLASS()
class UE5_3_EXAMPLE_API AFireArmWeapon : public ABaseInteractableActor
{
	GENERATED_BODY()
public:
	AFireArmWeapon(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Throw")
	void AttachToCharacter(ACharacter* TargetCharacter);
};