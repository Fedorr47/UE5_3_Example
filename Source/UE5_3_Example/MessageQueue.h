#pragma once

#include "CoreMinimal.h"
#include "MessageQueue.generated.h"

UENUM(BlueprintType)
enum class UMessageType : uint8
{
	HealthType,
	HealthPercent
};

UCLASS()
class UBaseMessage : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UMessageType Type;
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

