// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Explosive_Y.generated.h"

UCLASS()
class LEARN_STORIES_ONE_API AExplosive_Y : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosive_Y();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	UPROPERTY(VisibleAnywhere)
	class	URadialForceComponent* ForceComp;//径向力组件
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMeshComp;//静态网格体组件
	UFUNCTION()
	void	OnCompHit (UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);//击中事件
};
