// Fill out your copyright notice in the Description page of Project Settings.

#include "WizardsBeam.h"
#include "Wizards.h"



// Sets default values
AWizardsBeam::AWizardsBeam()
{
	bReplicates = true;
	this->bCollideWhenPlacing = true;
	//this->NotifyActorBeginOverlap;
	this->SetActorEnableCollision(true);
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	CollisionComp->InitBoxExtent(FVector(10.0, 10.0, 10.0));
	CollisionComp->bGenerateOverlapEvents = true;
	CollisionComp->SetCollisionProfileName(TEXT("OverlapAll"));
	//CollisionComp->OnComponentHit.AddDynamic(this, &AWizardsBlast::OnHit);
	RootComponent = CollisionComp;
	InitialLifeSpan = 0.3f;
	MyParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Madness"));

}

bool AWizardsBeam::DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams)
{
	//if (Controller == NULL) // access the controller, make sure we have one
	//{
	//	return false;
	//}

	// get the camera transform
	FVector CameraLoc = owningWizard->GetActorLocation();
	FRotator CameraRot = owningWizard->GetCameraBoom()->GetTargetRotation();
	FVector Start = CameraLoc+FVector(100.0, 100.0, 100.0);
	// you need to add a uproperty to the header file for a float PlayerInteractionDistance
	FVector End = CameraLoc + (CameraRot.Vector() * MaxBeamLength);

	RV_TraceParams->bTraceComplex = true;
	RV_TraceParams->bTraceAsyncScene = true;
	RV_TraceParams->bReturnPhysicalMaterial = true;
	//ECollisionChannel my;
	const FCollisionObjectQueryParams t = FCollisionObjectQueryParams(0);
	//  do the line trace
	bool DidTrace = GetWorld()->LineTraceSingleByObjectType(
		*RV_Hit,        //result
		Start,        //start
		End,        //end
		t,    //collision channel
		*RV_TraceParams
	);

	return DidTrace;
}

void AWizardsBeam::KeepUpdating()
{
	FHitResult RV_Hit(ForceInit);
	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, this);
	DoTrace(&RV_Hit, &RV_TraceParams);
	MyParticleSystem->SetBeamEndPoint(0, RV_Hit.Location);
	MyParticleSystem->SetBeamSourcePoint(0, owningWizard->GetActorLocation(), 0);
	//MyParticleSystem->SetBeamEndPoint(0, RV_Hit.Location);
	MyParticleSystem->SetBeamTargetStrength(0, 100.0, 0);
	MyParticleSystem->SetBeamSourceStrength(0, 10.0, 0);
	MyParticleSystem->SetBeamTargetPoint(0, RV_Hit.Location, 0);
	CollisionComp->SetBoxExtent(FVector(RV_Hit.Distance / 2.0, 30.0, 30.0));
	CollisionComp->SetRelativeLocation((owningWizard->GetActorLocation() + RV_Hit.Location) / 2.0);
	CollisionComp->SetRelativeRotation(owningWizard->GetCameraBoom()->GetTargetRotation());

	SetLifeSpan(0.25);
}

void AWizardsBeam::SpellCreation(UParticleSystem* theParticle, float beamDamage, AWizardsCharacter* theWiz) {
	if (theParticle == NULL) {
		UE_LOG(LogTemp, Warning, TEXT("The gods have forsaken us!"));
	}
	MyParticleSystem->SetTemplate(theParticle);//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), theParticle, theWiz->GetActorLocation(), FRotator::ZeroRotator, false);
	MyParticleSystem->AttachTo(RootComponent);
	MyParticleSystem->SetWorldScale3D(FVector(1.0, 1.0, 1.0));
	CollisionComp->SetBoxExtent(FVector(10.0, 10.0, 10.0));
	owningWizard = theWiz;
	FHitResult RV_Hit(ForceInit);
	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, this);
	DoTrace(&RV_Hit, &RV_TraceParams);
	CollisionComp->SetBoxExtent(FVector(RV_Hit.Distance/2.0, 30.0, 30.0));



	CollisionComp->SetRelativeLocation((theWiz->GetActorLocation()+RV_Hit.Location)/2.0);
	CollisionComp->SetRelativeRotation(owningWizard->GetCameraBoom()->GetTargetRotation());



	//CollisionComp->SetWorldRotation(owningWizard->GetCameraBoom()->GetTargetRotation());
	//CollisionComp->SetRelativeRotation(owningWizard->GetCameraBoom()->GetTargetRotation());
	MyParticleSystem->SetBeamSourcePoint(0, owningWizard->GetActorLocation(), 0);
	//MyParticleSystem->SetBeamEndPoint(0, RV_Hit.Location);
	MyParticleSystem->SetBeamTargetStrength(0, 100.0, 0);
	MyParticleSystem->SetBeamSourceStrength(0, 10.0, 0);
	MyParticleSystem->SetBeamTargetPoint(0, RV_Hit.Location, 0);
	SetLifeSpan(1.0);
}