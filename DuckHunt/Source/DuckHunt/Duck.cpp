// Fill out your copyright notice in the Description page of Project Settings.

#include "Duck.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "AIPathNode.h"
#include "Classes/Kismet/KismetMathLibrary.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Engine/World.h"

// Sets default values
ADuck::ADuck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");

	static ConstructorHelpers::FObjectFinder<UStaticMesh> temp(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	StaticMesh->SetStaticMesh(temp.Object);

	SetRootComponent(StaticMesh);
	
}

// Called when the game starts or when spawned
void ADuck::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPathNode::StaticClass(), Nodes);
	if (Nodes.Num())
	{
		FMath::SRandInit(0);
		FMath::RandRange(0, Nodes.Num());
		tarNode = Nodes[int(FMath::SRand() * 10) % Nodes.Num()];
	}
}

// Called every frame
void ADuck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Nodes.Num())
	{


		FVector location = GetActorLocation(),
			nodeLoc = tarNode->GetActorLocation();
		/*FRotator r = UKismetMathLibrary::FindLookAtRotation(location, nodeLoc);
		SetActorRotation(r);

		FVector newLoc = location;
		newLoc.X += 1.0f;
		SetActorLocation(newLoc);*/
		FVector newLoc = location;
		if (location.X < nodeLoc.X)
			newLoc.X += m_speed;
		else if (location.X > nodeLoc.X)
			newLoc.X -= m_speed;

		if (location.Y < nodeLoc.Y)
			newLoc.Y += m_speed;
		else if (location.Y > nodeLoc.Y)
			newLoc.Y -= m_speed;

		if (location.Z < nodeLoc.Z)
			newLoc.Z += m_speed;
		else if (location.Z > nodeLoc.Z)
			newLoc.Z -= m_speed;
		SetActorLocation(newLoc);

		if (location == nodeLoc)
		{
			tarNode = Nodes[FMath::Rand() % Nodes.Num()];
		}

	}
}

