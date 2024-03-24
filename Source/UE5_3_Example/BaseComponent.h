#pragma once

#include "CoreMinimal.h"
#include "MessageQueue.h"
#include "UE5_3_ExampleGameMode.h"
#include "UObject/NoExportTypes.h"
#include "BaseComponent.generated.h"

class AUE5_3_ExampleGameMode;

UCLASS()
class UE5_3_EXAMPLE_API UBaseComponent : public UObject
{
	GENERATED_BODY()

public:
	UBaseComponent(const FObjectInitializer& ObjectInitializer) :
		Super(ObjectInitializer)
	{}

	virtual void SetWorld(UWorld* InWorld);

	UWorld* GetComponentWorld() { return mWorld; }
	AUE5_3_ExampleGameMode* GetComponentGameMode() { return mGameMode; }

private:
	UPROPERTY()
	UWorld* mWorld = nullptr;

	UPROPERTY()
	AUE5_3_ExampleGameMode* mGameMode = nullptr;
};
