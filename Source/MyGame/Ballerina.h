// Ballerina.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ballerina.generated.h"

class UStaticMeshComponent;

UCLASS()
class MYGAME_API ABallerina : public AActor
{
	GENERATED_BODY()
	
public:	
	ABallerina();
	
	virtual void Tick(float DeltaTime) override;

protected:
	// ===== 컴포넌트 =====
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USceneComponent> Root;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> BallerinaMesh;

public:	
	UPROPERTY(EditAnywhere, Category = "Ballerina", meta = (ClampMin = "0.0"))
	float RotationSpeed;									// 초당 회전 각도 (도/초)
};
