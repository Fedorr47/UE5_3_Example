#include "HUD_Character.h"
#include "Mods/UE5_3_ExampleGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Actors/Player/DefaultPlayableCharacter.h"

AHUD_Character::AHUD_Character()
{
}

void AHUD_Character::BeginPlay()
{
	Super::BeginPlay();

	// If any widgets need to be added
	if (AllUIWidgets.Num() > 0)
	{
		UWorld* GameWorld = GetWorld();
		AUE5_3_ExampleGameMode* GameMode = static_cast<AUE5_3_ExampleGameMode*>(UGameplayStatics::GetGameMode(GameWorld));

		if (IsValid(GameWorld) && IsValid(GameMode))
		{
			// Iterate through all widgets
			for (TSubclassOf<UUserWidget> widget : AllUIWidgets)
			{
				// Create an instance of the widget and add to viewport
				UUserWidget* CreatedWidget = CreateWidget<UUserWidget>(GameWorld, widget);
				CreatedWidget->AddToViewport();
				
				UCharacterHUDWidget* HudWidget = Cast<UCharacterHUDWidget>(CreatedWidget);
				if (IsValid(HudWidget))
				{
					GameMode->GeneralMessageQueue->OnMessageProcess.AddUniqueDynamic(HudWidget, &UCharacterHUDWidget::TakeMsg);
				}

				// Store instanced widget in array
				mCreatedWidgets.Add(CreatedWidget);
			}
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
}

void UCharacterHUDWidget::TakeMsg(UBaseMessage* Msg)
{
	using std::placeholders::_1;
	switch (Msg->Type)
	{
	case EMessageType::HealthPercentage:
		Msg->ProcessMsg<UHealthPercentMessage>(std::bind(&UCharacterHUDWidget::ChangeHealthPercantage, this, _1));
		break;
	case EMessageType::ThrowableChanged:
		Msg->ProcessMsg<UThrowableChangedMessage>(std::bind(&UCharacterHUDWidget::ChangeGrenadeCount, this, _1));
		break;
	default:
		break;
	}	
}

void UCharacterHUDWidget::ChangeHealthPercantage(UHealthPercentMessage* Msg)
{
	if (IsValid(Msg) && IsValid(mHelthBar))
	{
		mHelthBar->SetPercent(Msg->HealthPercent);
	}
}

void UCharacterHUDWidget::ChangeGrenadeCount(UThrowableChangedMessage* Msg)
{
	if (IsValid(Msg) && IsValid(mGrenadeCountText))
	{
		FNumberFormattingOptions Opts;
		Opts.SetMaximumFractionalDigits(0);
		mGrenadeCountText->SetText(FText::AsNumber(Msg->GrenadeCount, &Opts));
	}
}

