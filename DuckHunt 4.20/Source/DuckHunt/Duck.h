// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Duck.generated.h"


UCLASS()
class DUCKHUNT_API ADuck : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADuck();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* StaticMesh;

private:
	TArray <AActor*> Nodes;
	AActor* tarNode = nullptr;
	const float m_speed = 5;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
