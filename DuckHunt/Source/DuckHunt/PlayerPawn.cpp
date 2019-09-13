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

	ShotMarker = CreateDefaultSubobject<UStaticMeshComponent>("ShotMarker");

	static ConstructorHelpers::FObjectFinder<UStaticMesh> temp(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	ShotMarker->SetStaticMesh(temp.Object); 
	ShotMarker->SetVisibility(false);

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
	if (HighlightedDuck != nullptr)
		HighlightedDuck->Destroy();
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HighlightedDuck = nullptr;

	if (fShotTimer <= 0.0f)
	{
		bShot = false;
		fShotTimer = 0.0f;
	}
	else
		fShotTimer -= DeltaTime;

	FHitResult OutHit = FHitResult();

	if (ComponentTraceForward(OutHit))
	{
		ShotMarker->SetWorldLocation(OutHit.Location);
		HighlightedDuck = Cast<ADuck>(OutHit.Actor);
	}
	else
	{
		FVector rayLoc = Camera->GetComponentLocation() + (GetActorForwardVector() * 3000);
		ShotMarker->SetWorldLocation(rayLoc);
		HighlightedDuck = nullptr;
	}
}

bool APlayerPawn::ComponentTraceForward(FHitResult & OutHit)
{
	FVector camLoc = Camera->GetComponentLocation();
	FVector rayLoc = camLoc + (GetActorForwardVector() * 3000);
	//GetWorld()->LineTraceSingleByObjectType(OutHit, camLoc, rayLoc);
	return GetWorld()->LineTraceSingleByChannel(OutHit, camLoc, rayLoc, ECC_Visibility);
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("LookUp", this, &APlayerPawn::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerPawn::Turn);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerPawn::Interact);

}

