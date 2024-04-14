#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseMenu.generated.h"

class UButton;
class UInputAction;
class APlayerController;

UCLASS()
class UPauseMenuWidget : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnInitialized() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UButton* mContinueGame;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UButton* mExitGame;

public:
	UFUNCTION()
	void TogglePauseMenu();

	UFUNCTION(BlueprintCallable)
	void ClosePauseMenu();
	
	UFUNCTION()
	void MappingContextWasAdded(UEnhancedInputComponent* EnhancedInputComponent, APlayerController* PlayerController);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* PauseAction;

	UPROPERTY()
	bool WasGamePaused = false;

	UPROPERTY()
	APlayerController* mPlayerController;
};