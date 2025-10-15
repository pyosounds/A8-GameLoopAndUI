#include "BlindItem.h"
#include "SpartaCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

ABlindItem::ABlindItem()
	: BlindWidgetInstance(nullptr)
{
	BlindDuration = 3.0f;
}

void ABlindItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);
	
	if (Activator && Activator->ActorHasTag("Player") && BlindWidgetClass)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

		SetActorEnableCollision(false);
		SetActorHiddenInGame(true);

		if (PlayerController)
		{
			BlindWidgetInstance = CreateWidget<UUserWidget>(PlayerController, BlindWidgetClass);

			if (BlindWidgetInstance)
			{
				BlindWidgetInstance->AddToViewport(100);
				
				GetWorldTimerManager().SetTimer(
					BlindTimerHandle,
					this,
					&ABlindItem::RemoveBlindEffect,
					BlindDuration,
					false
				);
			}
		}

		//DestroyItem();
	}
}

void ABlindItem::RemoveBlindEffect()
{
	if (BlindWidgetInstance)
	{
		BlindWidgetInstance->RemoveFromParent();
		BlindWidgetInstance = nullptr;	
	}
	
	GetWorldTimerManager().ClearTimer(BlindTimerHandle);

	DestroyItem();
}