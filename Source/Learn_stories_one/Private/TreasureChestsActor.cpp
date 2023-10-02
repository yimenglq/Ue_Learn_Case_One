// Fill out your copyright notice in the Description page of Project Settings.


#include "TreasureChestsActor.h"

// Sets default values
ATreasureChestsActor::ATreasureChestsActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshCompBase = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshCompBase_Y");
	StaticMeshCompLid = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshCompLid_Y");
	
	RootComponent = StaticMeshCompBase;
	StaticMeshCompLid->SetupAttachment(StaticMeshCompBase);

	StaticMeshCompBase->SetSimulatePhysics(true);
	
	LidPitch = LidYaw = LidRoll = 0;

}

// Called when the game starts or when spawned
void ATreasureChestsActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATreasureChestsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATreasureChestsActor::Interactive_Implementation()
{
	
	StaticMeshCompLid->SetRelativeRotation(FRotator(LidPitch,LidYaw,LidRoll));

}

