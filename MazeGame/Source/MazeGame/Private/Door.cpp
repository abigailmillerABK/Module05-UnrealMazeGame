// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UDoor::UDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoor::BeginPlay()
{
	Super::BeginPlay();

	StartRotation = GetOwner()->GetActorRotation();
	ForwardRotation = GetOwner()->GetActorRotation() + DesiredRotation;
	BackRotation = GetOwner()->GetActorRotation() - DesiredRotation;

	//GetOwner()->SetActorRotation(DesiredRotation);

	
}


// Called every frame
void UDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	FVector boxVector = TriggerBox->GetActorForwardVector();
	FVector playerToBox = (PlayerPawn->GetActorLocation() - TriggerBox->GetActorLocation());
	//playerToBox.Normalize();
	float dotProduct = boxVector.Dot(playerToBox);

	////////////////////////////GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("THIS, %f"), dotProduct);



	if (TriggerBox && GetWorld() && GetWorld()->GetFirstLocalPlayerFromController()) {
		if (PlayerPawn && TriggerBox->IsOverlappingActor(PlayerPawn)) {
			if ((doorMode == "Closed" || doorMode == "Closing" || doorMode == "Opening") && CurrentRotationTime < TimeToRotate) {
				if (doorMode != "Opening") {
					CurrentRotationTime = 0;

					/*FVector boxVector = TriggerBox->GetActorForwardVector();
					FVector playerToBox = (PlayerPawn->GetActorLocation() - TriggerBox->GetActorLocation());
					playerToBox.Normalize();
					float dotProduct = boxVector.Dot(playerToBox);

					if (dotProduct > 0) {
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("1"));
						actualRotation = BackRotation;
					}
					else if (dotProduct < 0) {
						GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("-1"));
						actualRotation = ForwardRotation;
					}*/
				}
				doorMode = "Opening";
				GetOwner()->SetActorRotation(Rotate(DeltaTime, GetOwner()->GetActorRotation(), actualRotation));
			}
			if (doorMode == "Opening" && CurrentRotationTime >= TimeToRotate) {
				doorMode = "Open";
				CurrentRotationTime = 0;

			}
		}
		else {
			if ((doorMode == "Open" || doorMode == "Opening" || doorMode == "Closing") && CurrentRotationTime < TimeToRotate) {
				if (doorMode != "Closing") {
					CurrentRotationTime = 0;
				}
				doorMode = "Closing";
				GetOwner()->SetActorRotation(Rotate(DeltaTime, GetOwner()->GetActorRotation(), StartRotation));
			}
			if (doorMode == "Closing" && CurrentRotationTime >= TimeToRotate) {
				doorMode = "Closed";
				CurrentRotationTime = 0;

			}
		}
	}
	
}

const FRotator UDoor::Rotate(float DeltaTime, FRotator start, FRotator finish) {
	CurrentRotationTime += DeltaTime;
	const float TimeRatio = FMath::Clamp(CurrentRotationTime / TimeToRotate, 0.0f, 1.0f);
	const float RotationAlpha = OpenCurve.GetRichCurveConst()->Eval(TimeRatio);
	return FMath::Lerp(start, finish, RotationAlpha);
}

