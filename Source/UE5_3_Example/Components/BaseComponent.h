#pragma once

#include "CoreMinimal.h"
#include "MessageQueue.h"
#include "UE5_3_ExampleGameMode.h"
#include "UObject/NoExportTypes.h"
#include "BaseComponent.generated.h"

class AUE5_3_ExampleGameMode;
class UBaseComponent;


USTRUCT(BlueprintType)
struct UE5_3_EXAMPLE_API FBaseComponentWrapper
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (ShowOnlyInnerProperties, BlueprintSearchable ="true"))
	UBaseComponent* Template = nullptr;
};

UCLASS(EditInlineNew, Abstract, BlueprintType)
class UE5_3_EXAMPLE_API UBaseComponent : public UObject
{
	GENERATED_BODY()

public:
	UBaseComponent(const FObjectInitializer& ObjectInitializer) :
		Super(ObjectInitializer)
	{}

	virtual void InitComponent(UWorld* InWorld, UObject* InOwnerObject);

	UWorld* GetComponentWorld() { return mWorld; }
	AUE5_3_ExampleGameMode* GetComponentGameMode() { return mGameMode; }

	virtual UBaseComponent* RetNewComponent(UObject* OwnerObject = nullptr) { return nullptr; }

	virtual void Update(float DeltaTime) {}

protected:
	UPROPERTY()
	UWorld* mWorld = nullptr;

	UPROPERTY()
	AUE5_3_ExampleGameMode* mGameMode = nullptr;

	UPROPERTY()
	UObject* mOwnerObject = nullptr;

	UPROPERTY()
	uint32 mOwnerId = 0;
};
