#include "HUD_Character.h"
#include "Mods/UE5_3_ExampleGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ProgressBar.h"
#include "Actors/UE5_3_ExampleCharacter.h"

AHUD_Character::AHUD_Character()
{
}

void AHUD_Character::BeginPlay()
{
	Super::BeginPlay();

	// If any widgets need to be added
	if (AllUIWidgets.Num() > 0)
	{
		// Iterate through all widgets
		for (TSubclassOf<UUserWidget> widget : AllUIWidgets)
		{
			// Create an instance of the widget and add to viewport
			UUserWidget* createdWidget = CreateWidget<UUserWidget>(GetWorld(), widget);
			createdWidget->AddToViewport();

			// Store instanced widget in array
			mCreatedWidgets.Add(createdWidget);
		}
	}
}

void AHUD_Character::DrawHUD()
{
	Super::DrawHUD();
}

void UCharacterHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (IsValid(mHelthBar))
	{
		mHelthBar->SetPercent(1.0f);
	}
}

void UCharacterHUDWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UCharacterHUDWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (UWorld* world = GetWorld())
	{
		const auto GameMode = dynamic_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(world));
		GameMode->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(this, &UCharacterHUDWidget::HealthWasChanged);
		PlayerCharacter = dynamic_cast<AUE5_3_ExampleCharacter*>(UGameplayStatics::GetPlayerCharacter(world, 0));
	}
}

void UCharacterHUDWidget::HealthWasChanged(UBaseMessage* InMsg)
{
	if (IsValid(PlayerCharacter) && InMsg->Type == UMessageType::HealthPercent && InMsg->OwnerId == PlayerCharacter->GetUniqueID())
	{
		float NewHealthPercent = static_cast<UHealthPercentMessage*>(InMsg)->HealthPercent;
		mHelthBar->SetPercent(NewHealthPercent);
	}
}
