// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerPawn.h"
#include "Duck.h"
#include "Classes/Components/InputComponent.h"
#include "Classes/GameFramework/SpringArmComponent.h"
#include "Classes/GameFramework/FloatingPawnMovement.h"
#include "Classes/Components/BoxComponent.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Classes/Camera/CameraComponent.h"
#include "Classes/Engine/World.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");

	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");

	DestinationMarker = CreateDefaultSubobject<UStaticMeshComponent>("DestinationMarker");

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(BoxCollision);

	SetRootComponent(BoxCollision);

	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerPawn::Turn(float a_val)
{
	AddControllerYawInput(a_val);
}

void APlayerPawn::LookUp(float a_val)
{
	AddControllerPitchInput(a_val);
}

void APlayerPawn::Interact()
{
	m_shot = true;
	m_shotTimer = 1.0f;
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(m_shotTimer <= 0.0f && m_shot)
		m_shot = false;
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("LookUp", this, &APlayerPawn::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerPawn::Turn);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerPawn::Interact);

}

