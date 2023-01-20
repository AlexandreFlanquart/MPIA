// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class MPIA_API ATurret : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float range;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int lvl;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool targeting;


public:	
	// Sets default values for this actor's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
