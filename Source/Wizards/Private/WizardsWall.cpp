// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardsWall.h"
#include "Wizards.h"

// Sets default values
AWizardsWall::AWizardsWall()
{
	bReplicates = true;
	//this->bCollideWhenPlacing = false;
	//this->NotifyActorBeginOverlap;
	//this->SetActorEnableCollision(false);
	PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(10.0, 10.0, 10.0));
	CollisionComp->bGenerateOverlapEvents = true;
	CollisionComp->BodyInstance.SetCollisionProfileName(TEXT("BlockAllDynamic"));
	CollisionComp->bGenerateOverlapEvents = TRUE;
	//CollisionComp->SetCollisionProfileName(TEXT("OverlapAll"));
	//CollisionComp->OnComponentHit.AddDynamic(this, &AWizardsBlast::OnHit);
	RootComponent = CollisionComp;
	InitialLifeSpan = 0.3f;
	MyParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Madness"));
	theWall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyWallMesh"));
	theWall->SetupAttachment(RootComponent);

}


bool AWizardsWall::DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams)
{
	//if (Controller == NULL) // access the controller, make sure we have one
	//{
	//	return false;
	//}

	// get the camera transform
	FVector CameraLoc = owningWizard->GetActorLocation();
	FRotator CameraRot = owningWizard->GetCameraBoom()->GetTargetRotation();
	FVector Start = CameraLoc + FVector(100.0, 100.0, 100.0);
	// you need to add a uproperty to the header file for a float PlayerInteractionDistance
	FVector End = CameraLoc + (CameraRot.Vector() * MaxDistance);

	RV_TraceParams->bTraceComplex = true;
	RV_TraceParams->bTraceAsyncScene = true;
	RV_TraceParams->bReturnPhysicalMaterial = true;
	//ECollisionChannel my;
	//const FCollisionObjectQueryParams t = FCollisionObjectQueryParams(0);
	//const FCollisionQueryParams t = FCollisionQueryParams();
	ECollisionChannel t = ECollisionChannel::ECC_WorldStatic;
	//  do the line trace
	bool DidTrace = GetWorld()->LineTraceSingleByChannel(
		*RV_Hit,        //result
		Start,        //start
		End,        //end
		t,    //collision channel
		*RV_TraceParams
	);

	return DidTrace;
}

void AWizardsWall::SpellCreation(FtheSpell* theSpell, UParticleSystem* floorPart, UStaticMesh* thisWall, AWizardsCharacter* theWiz)
{
	theWall->SetStaticMesh(thisWall);
	//theWall->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//theWall->UpdateCollisionFromStaticMesh();
	theWall->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	//theWall->Activate();
	//theWall->bGenerateOverlapEvents = TRUE;
	owningWizard = theWiz;
	SetLifeSpan(3.0);
	FHitResult RV_Hit(ForceInit);
	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, this);
	DoTrace(&RV_Hit, &RV_TraceParams);
	this->SetActorLocation(RV_Hit.Location);
	this->SetActorRotation(RV_Hit.ImpactNormal.Rotation() + FRotator(-90.0, 0.0, 0.0));
}
