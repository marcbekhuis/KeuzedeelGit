// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCube.h"

// Sets default values
AMyCube::AMyCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

