#pragma once

#include "CoreMinimal.h"
#include <map>
#include <functional>
#include "MessageQueue.generated.h"

class UBaseMessage;
using VoidCast = std::function<void(UBaseMessage*)>;
static std::map<FString, VoidCast> MessageVoidCastedMethods;

UCLASS()
class UBaseMessage : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString TypeName;

	UPROPERTY()
	int32 OwnerId;
};

UCLASS()
class UHealthPercentMessage : public UBaseMessage
{
	GENERATED_BODY()

public:

	UHealthPercentMessage(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
	float HealthPercent = 0.0f;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageProcess, UBaseMessage*, Msg);

UCLASS()
class UMessageQueue : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

	TQueue<UBaseMessage*> mMessages;
public:
	UMessageQueue();
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;

	void Push(UBaseMessage* InMsg);

	UPROPERTY(BlueprintAssignable)
	FOnMessageProcess OnMessageProcess;
};

