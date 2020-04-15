// Fill out your copyright notice in the Description page of Project Settings.


#include "SwingDoor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TimelineComponent.h"

// Sets default values
ASwingDoor::ASwingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Open = false;
	ReadyState = true;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Frame"));
	RootComponent = DoorFrame;

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ASwingDoor::BeginPlay()
{
	Super::BeginPlay();

	RotateValue = 1.0f;

	if (DoorCurve)
	{
		FOnTimelineFloat TimeLineCallback;
		FOnTimelineEventStatic TimelineFinisgedCallback;

		TimeLineCallback.BindUFunction(this, FName("ControlDoor"));
		TimelineFinisgedCallback.BindUFunction(this, FName("SetState"));

		MyTimeLine = NewObject<UTimelineComponent>(this, FName("DoorAnimation"));
		MyTimeLine->SetTimelineLengthMode(ETimelineLengthMode::TL_LastKeyFrame);
		MyTimeLine->AddInterpFloat(DoorCurve, TimeLineCallback);
		MyTimeLine->SetTimelineFinishedFunc(TimelineFinisgedCallback);
		MyTimeLine->RegisterComponent();

	}
	
}

// Called every frame
void ASwingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if (MyTimeLine !=NULL)
	//{
		MyTimeLine->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, NULL);
	//}
}

void ASwingDoor::controlDoor()
{
	TimeLineValue = MyTimeLine->GetPlaybackPosition();
	CurvveFloatValue = RotateValue * DoorCurve->GetFloatValue(TimeLineValue);

	FQuat NewRotation = FQuat(FRotator(0.0f, CurvveFloatValue, 0.0f));

	Door->SetRelativeRotation(NewRotation);
}

void ASwingDoor::ToogleDoor()
{
	if (ReadyState)
	{
		Open = !Open;

		APawn* OurPawn = UGameplayStatics::GetPlayerPawn(this, 0);
		FVector PawnLocation = OurPawn->GetActorLocation();
		FVector Direction = GetActorLocation() - PawnLocation;
		Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

		if (Open)
		{
			if (Direction.X > 0.0f)
			{
				RotateValue = 1.0f;
			}
			else
			{
				RotateValue = -1.0f;
			}
			ReadyState = false;
			if (MyTimeLine != NULL)
			{
				MyTimeLine->PlayFromStart();
			}
		}
		else
		{
			ReadyState = false;
			if (MyTimeLine != NULL)
			{
				MyTimeLine->Reverse();
			}
		}
	}

}

void ASwingDoor::SetState()
{
	ReadyState = true;

}

