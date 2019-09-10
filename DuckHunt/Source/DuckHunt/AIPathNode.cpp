// Fill out your copyright notice in the Description page of Project Settings.

#include "AIPathNode.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
AAIPathNode::AAIPathNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	static ConstructorHelpers::FObjectFinder<UStaticMesh> temp(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	StaticMesh->SetStaticMesh(temp.Object);

	StaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	StaticMesh->bVisible = false;

	SetRootComponent(StaticMesh);
}

// Called when the game starts or when spawned
void AAIPathNode::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAIPathNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

