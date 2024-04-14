#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

class UButton;

UCLASS()
class UMainMenuidget : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnInitialized() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UButton* mStartGame;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UButton* mExitGame;
};