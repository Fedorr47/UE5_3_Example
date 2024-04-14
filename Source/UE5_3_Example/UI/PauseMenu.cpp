#include "PauseMenu.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "UE5_3_ExampleGameMode.h"
#include "Blueprint/WidgetBlueprintLibrary.h"


void UPauseMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UPauseMenuWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UPauseMenuWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	AUE5_3_ExampleGameMode* mGameMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(GetWorld()));
	mGameMode->OnMappingContextAdded.AddUniqueDynamic(this, &UPauseMenuWidget::MappingContextWasAdded);
}

void UPauseMenuWidget::TogglePauseMenu()
{
	if (!WasGamePaused)
	{
		AddToViewport();
		UGameplayStatics::SetGamePaused(GetWorld(), true);
		mPlayerController->bShowMouseCursor = true;
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(mPlayerController);
		WasGamePaused = true;
	}
	else
	{
		ClosePauseMenu();
	}
}

void UPauseMenuWidget::ClosePauseMenu()
{
	if (WasGamePaused)
	{
		UGameplayStatics::SetGamePaused(GetWorld(), false);
		RemoveFromParent();
		WasGamePaused = false;

		mPlayerController->bShowMouseCursor = false;
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(mPlayerController);
	}
}

void UPauseMenuWidget::MappingContextWasAdded(UEnhancedInputComponent* EnhancedInputComponent, APlayerController* PlayerController)
{
	if (IsValid(EnhancedInputComponent))
	{
		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Completed, this, &UPauseMenuWidget::TogglePauseMenu);
	}
	if (IsValid(PlayerController))
	{
		mPlayerController = PlayerController;
	}
}
