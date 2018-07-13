// Fill out your copyright notice in the Description page of Project Settings.
#include "WizardsBlast.h"
#include "Wizards.h"


// Sets default values
AWizardsBlast::AWizardsBlast()
{
	bReplicates = true;
	this->bCollideWhenPlacing = true;
	//this->NotifyActorBeginOverlap;
	this->SetActorEnableCollision(true);
	PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(100.0f);
	CollisionComp->bGenerateOverlapEvents = true;
	CollisionComp->SetCollisionProfileName(TEXT("OverlapAll"));
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AWizardsBlast::OnOverlap);
	//CollisionComp->OnComponentHit.AddDynamic(this, &AWizardsBlast::OnHit);
	RootComponent = CollisionComp;
	InitialLifeSpan = 0.3f;
	MyParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Madness"));
	//ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName6(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Fire_Blast.P_Fire_Blast'"));
	//MyParticleSystem->SetTemplate(ArbitraryParticleName6.Object);
}

void AWizardsBlast::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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

void AWizardsBlast::SpellCreation(UParticleSystem* theParticle, float blastSize, float blastDamage, AWizardsCharacter* theWiz) {
	if (theParticle == NULL) {
		UE_LOG(LogTemp, Warning, TEXT("The gods have forsaken us!"));
	}
	spellDamage = blastDamage;
	//spellEffect = theSpell->spellEffect;
	MyParticleSystem->SetTemplate(theParticle);
	MyParticleSystem->AttachTo(RootComponent);
	MyParticleSystem->SetWorldScale3D(FVector(blastSize));
	CollisionComp->SetSphereRadius(blastSize*200.0);
	owningWizard = theWiz;
	//UE_LOG(LogTemp, Warning, TEXT("I can't believe it's not null!"));
	//CollisionComp->SetSphereRadius(20.f);
	//MyParticleSystem->Template = ArbitraryParticleName.Object;
	//MyParticleSystem->bAutoActivate = true;
	//MyParticleSystem->SetHiddenInGame(false);
}