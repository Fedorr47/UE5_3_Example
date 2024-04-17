#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseInteractableActor.h"
#include "ThrowableActor.generated.h"

class UInputMappingContext;
class UInputAction;
class UThrowableComponent;
class ADefaultPlayableCharacter;
class ADefaultProjectile;

UCLASS()
class UE5_3_EXAMPLE_API AThrowableActor : public ABaseInteractableActor
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	AThrowableActor(const FObjectInitializer& ObjectInitializer);

	virtual void Tick(float DeltaTime) override;
};
