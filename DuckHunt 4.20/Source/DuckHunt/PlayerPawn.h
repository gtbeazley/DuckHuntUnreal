// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class DUCKHUNT_API APlayerPawn : public APawn
{
	GENERATED_BODY()
public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Turn(float a_val);
	void LookUp(float a_val);
	void Interact();

	class UFloatingPawnMovement* FloatingPawnMovement;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* DestinationMarker;

	bool m_duckHighlighted = false;
	bool m_shot = false;

	float m_shotTimer = 0.0f;
	AActor* Bird = nullptr;
public:	
	float BulletCount = 3;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
