#include "SlowingItem.h"
#include "SpartaCharacter.h"

ASlowingItem::ASlowingItem()
{
	SlowingMultiplier = 0.5f;
	SlowingDuration = 3.0f;
}

void ASlowingItem::ActivateItem(AActor* Activator)
{
	Super::ActivateItem(Activator);

	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (ASpartaCharacter* PlayerCharacter = Cast<ASpartaCharacter>(Activator))
		{
			PlayerCharacter->ApplySpeedModifier(SlowingMultiplier, SlowingDuration);
		}

		DestroyItem();
	}
}