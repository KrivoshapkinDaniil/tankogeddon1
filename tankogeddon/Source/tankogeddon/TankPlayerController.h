
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATankPawn;

UCLASS()
class TANKOGEDDON_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY()
	class ATankPawn* TankPawn;

public:
	ATankPlayerController();

	virtual void SetupInputComponent() override;

protected:
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);

	void RotateRight(float Value);
};
