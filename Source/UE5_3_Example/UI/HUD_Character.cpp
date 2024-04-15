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
	using std::placeholders::_1;
	MessageVoidCastedMethods.emplace(
		UHealthPercentMessage::StaticClass()->GetDefaultObject()->GetClass()->GetName(),
		std::bind(&UCharacterHUDWidget::ChangeHealthPercantage, this, _1));
	MessageVoidCastedMethods.emplace(
		UThrowableChangedMessage::StaticClass()->GetDefaultObject()->GetClass()->GetName(),
		std::bind(&UCharacterHUDWidget::ChangeGrenadeCount, this, _1));
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
	auto PairFunc = MessageVoidCastedMethods.find(Msg->TypeName);
	if (PairFunc != MessageVoidCastedMethods.end())
	{
		PairFunc->second(Msg);
	}
}

void UCharacterHUDWidget::ChangeHealthPercantage(UBaseMessage* Msg)
{
	UHealthPercentMessage* HealthPercentMessage = Cast<UHealthPercentMessage>(Msg);
	if (IsValid(HealthPercentMessage))
	{
		mHelthBar->SetPercent(HealthPercentMessage->HealthPercent);
	}
}

void UCharacterHUDWidget::ChangeGrenadeCount(UBaseMessage* Msg)
{
	UThrowableChangedMessage* GrenadeChangedMessage = Cast<UThrowableChangedMessage>(Msg);
	if (IsValid(GrenadeChangedMessage))
	{
		FNumberFormattingOptions Opts;
		Opts.SetMaximumFractionalDigits(0);
		mGrenadeCountText->SetText(FText::AsNumber(GrenadeChangedMessage->GrenadeCount, &Opts));
	}
}

