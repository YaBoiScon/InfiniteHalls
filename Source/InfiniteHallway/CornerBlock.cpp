// Fill out your copyright notice in the Description page of Project Settings.


#include "CornerBlock.h"

// Sets default values
ACornerBlock::ACornerBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACornerBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACornerBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

