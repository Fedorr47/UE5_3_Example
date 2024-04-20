#pragma once

#include "CoreMinimal.h"
#include "UE5_3_ExampleGameMode.h"
#include "EntityComponent.generated.h"

class AUE5_3_ExampleGameMode;
class UEntityComponent;


USTRUCT(BlueprintType)
struct UE5_3_EXAMPLE_API FEntityComponentWrapper
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (ShowOnlyInnerProperties, BlueprintSearchable ="true"))
	UEntityComponent* Template = nullptr;
};

UCLASS(EditInlineNew, Abstract, BlueprintType)
class UE5_3_EXAMPLE_API UEntityComponent : public UObject
{
	GENERATED_BODY()

public:
	UEntityComponent(const FObjectInitializer& ObjectInitializer) :
		Super(ObjectInitializer)
	{
	}

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject);

	UWorld* GetComponentWorld() { return mWorld; }
	AUE5_3_ExampleGameMode* GetComponentGameMode() { return mGameMode; }

	virtual UEntityComponent* RetNewComponent(UObject* OwnerObject = nullptr) { return nullptr; }
	virtual UEntityComponent* RetCopiedComponent(UObject* OwnerObject = nullptr) { return nullptr; }

	UObject* GetOwnerObject() { return mOwnerObject; }

	UPROPERTY(EditDefaultsOnly, Category = OwnerShip)
	bool CanBeReOwned = true;

	UPROPERTY()
	FGuid OriginalOwnerId;

	UPROPERTY()
	bool IsAttachedToCharacter = false;

protected:
	UPROPERTY()
	UWorld* mWorld = nullptr;

	UPROPERTY()
	AUE5_3_ExampleGameMode* mGameMode = nullptr;

	UPROPERTY()
	UObject* mOwnerObject = nullptr;
};
