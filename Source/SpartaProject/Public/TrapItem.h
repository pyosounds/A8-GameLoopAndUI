#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "TrapItem.generated.h"

UCLASS()
class SPARTAPROJECT_API ATrapItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ATrapItem();

	virtual void ActivateItem(AActor* Activator) override;
};
