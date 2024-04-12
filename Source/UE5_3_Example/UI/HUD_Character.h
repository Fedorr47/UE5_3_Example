#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "MessageQueue.h"
#include "HUD_Character.generated.h"

class UProgressBar;
class ADefaultPlayableCharacter;

UCLASS()
class UCharacterHUDWidget : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnInitialized() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UProgressBar* mHelthBar;

public:
	UFUNCTION()
	void TakeMsg(UBaseMessage* Msg);
};

UCLASS()
class UE5_3_EXAMPLE_API AHUD_Character : public AHUD
{
	GENERATED_BODY()
public:
	AHUD_Character();

protected:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UUserWidget>> AllUIWidgets;

private:
	
	UPROPERTY()
	TArray <UUserWidget*> mCreatedWidgets;

protected:
	virtual void BeginPlay() override;
	virtual void DrawHUD() override;
};
