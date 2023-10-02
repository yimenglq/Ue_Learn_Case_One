// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEARN_STORIES_ONE_API UAttributeActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		

protected:
	UPROPERTY(EditAnywhere,Category = "DIY|Attribute")
	int blood_volume;



public:

	void	SetBlood_volume(int InVal);

	UFUNCTION(BlueprintCallable, Category = "DIY|Attribute")//给蓝图使用 函数
	int GetBlood_volume();
	void	GetBlood_volume(int& OutVal);
	
};
