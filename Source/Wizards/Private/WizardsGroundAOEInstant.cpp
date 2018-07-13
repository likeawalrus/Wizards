// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardsGroundAOEInstant.h"
#include "Wizards.h"


// Sets default values
AWizardsGroundAOEInstant::AWizardsGroundAOEInstant()
{
	bReplicates = true;
	//this->bCollideWhenPlacing = false;
	//this->NotifyActorBeginOverlap;
	//this->SetActorEnableCollision(false);
	//PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("BoxComp"));
	CollisionComp->InitSphereRadius(100.0f);
	CollisionComp->bGenerateOverlapEvents = false;//To remind myself, this gets changed to true once the bomb goes off
	CollisionComp->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComp->bGenerateOverlapEvents = TRUE;
	//CollisionComp->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AWizardsGroundAOEInstant::OnOverlap);
	RootComponent = CollisionComp;
	InitialLifeSpan = 0.3f;
	MyParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Madness"));

}

void AWizardsGroundAOEInstant::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(AWizardsCharacter::StaticClass())) {
		AWizardsCharacter * target = (AWizardsCharacter*)OtherActor;
		target->Damaged(spellDamage);
	}
	// Only add impulse and destroy projectile if we hit a physics
	/*if ((O wdtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
	OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

	Destroy();
	}*/
}


bool AWizardsGroundAOEInstant::DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams)
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

void AWizardsGroundAOEInstant::SpellCreation(FtheSpell* theSpell, UParticleSystem* floorPart, AWizardsCharacter* theWiz)
{
	spellDamage = theSpell->spellDamage;
	spellEffect = theSpell->spellEffect;
	owningWizard = theWiz;
	SetLifeSpan(3.0);
	FHitResult RV_Hit(ForceInit);
	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, this);
	DoTrace(&RV_Hit, &RV_TraceParams);
	this->SetActorLocation(RV_Hit.Location);
	this->SetActorRotation(RV_Hit.ImpactNormal.Rotation() + FRotator(-90.0, 0.0, 0.0));
	GetWorldTimerManager().SetTimer(ExplosionHandler, this, &AWizardsGroundAOEInstant::activateExplosion, 2.0f);
}

void AWizardsGroundAOEInstant::activateExplosion()
{
	CollisionComp->bGenerateOverlapEvents = true;//To remind myself, this gets changed to true once the bomb goes off
}