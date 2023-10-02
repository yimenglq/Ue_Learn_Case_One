// Fill out your copyright notice in the Description page of Project Settings.


#include "DrawShpereActor.h"
#include "Components/SphereComponent.h"

// Sets default values
ADrawShpereActor::ADrawShpereActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp_Y");

	RootComponent = SphereComp;

	SphereComp->SetSphereRadius(50.0f);
	SphereComp->SetVisibility(true);
	SphereComp->SetGenerateOverlapEvents(false);
	SphereComp->bHiddenInGame = false;//是否在游戏中可见

}

// Called when the game starts or when spawned
void ADrawShpereActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrawShpereActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

