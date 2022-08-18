// Fill out your copyright notice in the Description page of Project Settings.


#include "Axe.h"

// Sets default values for this component's properties
UAxe::UAxe()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAxe::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAxe::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();


	if (GetWorld() && GetWorld()->GetFirstLocalPlayerFromController()) {
		//if (PlayerPawn && GetOwner() && GetOwner()->IsOverlappingActor(PlayerPawn)) {
			TArray<UStaticMeshComponent*> staticComponents;
			PlayerPawn->GetComponents(staticComponents);
			//for (auto StaticMeshComponent : staticComponents) {

			//	StaticMeshComponent->SetStaticMesh(LoadObject<UStaticMesh>(NULL, TEXT("/Content/Megascans/3D_Assets/Axe/Axe"), NULL, LOAD_None, NULL));
			//}
			//\
			//GetActor()
			//GetOwner()->Destroy();
		//}
		

	}
}

