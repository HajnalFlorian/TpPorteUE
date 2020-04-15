// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SwingDoor.generated.h"

class UBoxComponent;
class UTimelineComponent;

UCLASS()
class TPPORTECPP_API ASwingDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwingDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* DoorFrame;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Door;
	UPROPERTY(EditAnywhere)
		UCurveFloat* DoorCurve;

	UFUNCTION()
		void controlDoor();

	UFUNCTION()
		void ToogleDoor();

	UFUNCTION()
		void SetState();
	bool Open;
	bool ReadyState;
	float RotateValue;
	float CurvveFloatValue;
	float TimeLineValue;
	UTimelineComponent* MyTimeLine;

};
