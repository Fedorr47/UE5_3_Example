#pragma once

#include "CoreMinimal.h"
#include "Components/EntityComponent.h"
#include "WeaponComponent.generated.h"

UENUM(BlueprintType)
enum class EWeaponeType : uint8
{
	RayCast,
	Projectile,
	MAX
};

UCLASS()
class UE5_3_EXAMPLE_API UWeaponComponent : public UEntityComponent
{
	GENERATED_BODY()

public:
	UWeaponComponent(const FObjectInitializer& ObjectInitializer);

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject) override;
	virtual UEntityComponent* RetCopiedComponent(UObject* OwnerObject) override;

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* ThrowMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ThrowAction;
};
