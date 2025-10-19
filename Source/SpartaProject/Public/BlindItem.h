#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "BlindItem.generated.h"

UCLASS()
class SPARTAPROJECT_API ABlindItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ABlindItem();

	virtual void ActivateItem(AActor* Activator) override;

protected:
	UFUNCTION()
	void RemoveBlindEffect();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blind")
	TSubclassOf<UUserWidget> BlindWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blind")
	float BlindDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Blind")
	UUserWidget* BlindWidgetInstance;

	FTimerHandle BlindTimerHandle;
};
