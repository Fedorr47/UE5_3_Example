#pragma once

#include "CoreMinimal.h"
#include <functional>
#include "MessageQueue.generated.h"

UENUM()
enum class EMessageType : uint8
{
	HealthPercentage,
	ThrowableChanged,
	MAX
};

class UHealthPercentMessage;
class UThrowableChangedMessage;

UCLASS()
class UBaseMessage : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EMessageType Type = EMessageType::MAX;

	UPROPERTY()
	int32 OwnerId;

	template <typename D>
	void ProcessMsg(std::function<void(D*)> Callback)
	{
		Callback(Cast<D>(this));
	}
};

UCLASS()
class UHealthPercentMessage : public UBaseMessage
{
	GENERATED_BODY()

public:

	UHealthPercentMessage(const FObjectInitializer& ObjectInitializer) :
		Super(ObjectInitializer) {}

	UPROPERTY()
	float HealthPercent = 0.0f;
};

UCLASS()
class UThrowableChangedMessage : public UBaseMessage
{
	GENERATED_BODY()

public:

	UThrowableChangedMessage(const FObjectInitializer& ObjectInitializer) :
		Super(ObjectInitializer) {}

	UPROPERTY()
	int32 GrenadeCount = 0;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageProcess, UBaseMessage*, Msg);

UCLASS()
class UMessageQueue : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

	TQueue<UBaseMessage*> mMessages;
public:
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;

	void Push(UBaseMessage* InMsg);

	UPROPERTY(BlueprintAssignable)
	FOnMessageProcess OnMessageProcess;
};

