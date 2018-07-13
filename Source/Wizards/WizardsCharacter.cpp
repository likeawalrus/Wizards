// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#include "WizardsCharacter.h"
#include "Wizards.h"
#include "WizardsProjectile.h"
#include "WizardsBlast.h"
#include "WizardsCone.h"
#include "WizardsBeam.h"
#include "WizardsWall.h"
#include "WizardsCage.h"
#include "WizardsGroundAOEInstant.h"
#include "WizardsSaveGame.h"
#include "UnrealNetwork.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/InputSettings.h"

//DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AWizardsCharacter

AWizardsCharacter::AWizardsCharacter()
{
	bReplicates = true;
	PrimaryActorTick.bCanEverTick = true;
	Health = 100.0;
	maxHealth = 100.0;
	Mana = 100.0;
	maxMana = 100.0;
	UCharacterMovementComponent* myMovement = GetCharacterMovement();
	myMovement->MaxWalkSpeed = 450.0;
	ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));

	currSpell = 0;
	//For the record, this probably isn't the best way to get particles for the spells but it works
	//A better method, implemented at a later and unknown date, would be to hold this array in its own class
	//that is called once and never destroyed
	//Projectiles
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName0(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Fire_Projectile.P_Fire_Projectile'"));
		particleList.Add(ArbitraryParticleName0.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName1(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Lightning_Projectile.P_Lightning_Projectile'"));
		particleList.Add(ArbitraryParticleName1.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName2(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Water_Projectile.P_Water_Projectile'"));
		particleList.Add(ArbitraryParticleName2.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName3(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Ice_Projectile.P_Ice_Projectile'"));
		particleList.Add(ArbitraryParticleName3.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName4(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Earth_Projectile.P_Earth_Projectile'"));
		particleList.Add(ArbitraryParticleName4.Object);
		//Now for all of the EXPLOSIONS
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName5(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Fire_Blast.P_Fire_Blast'"));
		particleList.Add(ArbitraryParticleName5.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName6(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Lightning_Blast.P_Lightning_Blast'"));
		particleList.Add(ArbitraryParticleName6.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName7(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Water_Blast.P_Water_Blast'"));
		particleList.Add(ArbitraryParticleName7.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName8(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Ice_Blast.P_Ice_Blast'"));
		particleList.Add(ArbitraryParticleName8.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName9(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Earth_Blast.P_Earth_Blast'"));
		particleList.Add(ArbitraryParticleName9.Object);
		//Next up is cones
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName10(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Fire_Cone.P_Fire_Cone'"));
		particleList.Add(ArbitraryParticleName10.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName11(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Lightning_Cone.P_Lightning_Cone'"));
		particleList.Add(ArbitraryParticleName11.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName12(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Water_Cone.P_Water_Cone'"));
		particleList.Add(ArbitraryParticleName12.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName13(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Ice_Cone.P_Ice_Cone'"));
		particleList.Add(ArbitraryParticleName13.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName14(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Earth_Cone.P_Earth_Cone'"));
		particleList.Add(ArbitraryParticleName14.Object);
		//LASER BEAMS
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName15(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Fire_Beam.P_Fire_Beam'"));
		particleList.Add(ArbitraryParticleName15.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName16(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Lightning_Beam.P_Lightning_Beam'"));
		particleList.Add(ArbitraryParticleName16.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName17(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Water_Beam.P_Water_Beam'"));
		particleList.Add(ArbitraryParticleName17.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName18(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Ice_Beam.P_Ice_Beam'"));
		particleList.Add(ArbitraryParticleName18.Object);
		ConstructorHelpers::FObjectFinder<UParticleSystem> ArbitraryParticleName19(TEXT("ParticleSystem'/Game/FirstPerson/Particles/P_Earth_Beam.P_Earth_Beam'"));
		particleList.Add(ArbitraryParticleName19.Object);

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 450.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 150.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = false; // Rotate the arm based on the controller
	//CameraBoom->RelativeLocation = FVector(0, 0, 640.f);
	//CameraBoom->

	// Create a CameraComponent	
	ThirdPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	ThirdPersonCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	//ThirdPersonCameraComponent->RelativeLocation = FVector(0, 0, 640.f); // Position the camera
	ThirdPersonCameraComponent->bUsePawnControlRotation = false;

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 40.0f, 50.0f);

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = this->GetMesh();
	//Mesh1P->SetOnlyOwnerSee(false);
	//Mesh1P->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	//Mesh1P->RelativeLocation = FVector(0.f, 100.f, -150.f);
	//Mesh1P->RelativeRotation = FRotator(60.f, 60.f, 60.f);
	//Mesh1P->bCastDynamicShadow = false;
	//Mesh1P->CastShadow = true;
	//newCharactersSpells();

	HeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("HeadMesh"));
	HeadMesh->SetupAttachment(GetMesh());
	GlassesMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("GlassesMesh"));
	GlassesMesh->SetupAttachment(GetMesh());
	NeckMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("NeckMesh"));
	NeckMesh->SetupAttachment(GetMesh());
	ShouldersMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("ShouldersMesh"));
	ShouldersMesh->SetupAttachment(GetMesh());
	ShirtMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("ShirtMesh"));
	ShirtMesh->SetupAttachment(GetMesh());
	CoatMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("CoatMesh"));
	CoatMesh->SetupAttachment(GetMesh());
	GlovesMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("GlovesMesh"));
	GlovesMesh->SetupAttachment(GetMesh());
	PantsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("PantsMesh"));
	PantsMesh->SetupAttachment(GetMesh());
	ShoesMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("ShoesMesh"));
	ShoesMesh->SetupAttachment(GetMesh());
	RingsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("RingsMesh"));
	RingsMesh->SetupAttachment(GetMesh());
	Accessory1Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Accessory1Mesh"));
	Accessory1Mesh->SetupAttachment(GetMesh());
	RotatorArray.Add(FRotator(0.0, 0.0, 0.0));
	RotatorArray.Add(FRotator(1.0, 0.5, 0.5));
	RotatorArray.Add(FRotator(-1.0, 1.0, -0.5));
	RotatorArray.Add(FRotator(-1.5, -0.5, 1.0));
	RotatorArray.Add(FRotator(1.5, 1.0, 2.0));
	RotatorArray.Add(FRotator(0.0, -1.5, 2.5));
	RotatorArray.Add(FRotator(1.5, 0.0, 0.0));
	RotatorArray.Add(FRotator(-1.0, -1.0, 0.0));
	RotatorArray.Add(FRotator(0.5, -0.5, 0.5));
	RotatorArray.Add(FRotator(2.0, -1.0, 1.5));
	RotatorArray.Add(FRotator(-2.0, 0.0, -1.5));
	RotatorArray.Add(FRotator(0.0, 0.0, 1.0));
	RotatorArray.Add(FRotator(-0.5, 1.5, -2.0));
	RotatorArray.Add(FRotator(0.5, -1.0, 1.0));
	RotatorArray.Add(FRotator(0.0, -0.5, 0.0));
	RotatorArray.Add(FRotator(1.5, -1.0, 1.5));
	RotatorArray.Add(FRotator(1.5, -1.0, -2.0));
	RotatorArray.Add(FRotator(-1.0, 1.5, 1.5));
	RotatorArray.Add(FRotator(0.5, 1.0, 2.0));
	RotatorArray.Add(FRotator(2.0, 1.5, 0.5));
	RotatorArray.Add(FRotator(2.0, -2.5, -2.0));
	RotatorArray.Add(FRotator(-2.0, 2.5, 2.0));
	RotatorArray.Add(FRotator(-2.0, 1.5, -1.0));
	RotatorArray.Add(FRotator(-2.5, -2.0, 0.0));
	RotatorArray.Add(FRotator(0.0, 2.5,-1.5));
	RotatorArray.Add(FRotator(-0.5, 1.0, 0.5));
	RotatorArray.Add(FRotator(0.0, 2.0, -2.5));
	RotatorArray.Add(FRotator(2.5, 0.0, 0.0));
	RotatorArray.Add(FRotator(-2.0, 1.5, 2.0));
	RotatorArray.Add(FRotator(2.5, -1.0, -1.5));

	//FTimerHandle UnusedHandle;
	//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AWizardsCharacter::newCharactersSpells, 1.0, false);
}

void AWizardsCharacter::BeginPlay()
{
	Super::BeginPlay();

	HeadMesh->SetMasterPoseComponent(GetMesh());
	GlassesMesh->SetMasterPoseComponent(GetMesh());
	NeckMesh->SetMasterPoseComponent(GetMesh());
	ShouldersMesh->SetMasterPoseComponent(GetMesh());
	ShirtMesh->SetMasterPoseComponent(GetMesh());
	CoatMesh->SetMasterPoseComponent(GetMesh());
	GlovesMesh->SetMasterPoseComponent(GetMesh());
	PantsMesh->SetMasterPoseComponent(GetMesh());
	ShoesMesh->SetMasterPoseComponent(GetMesh());
	RingsMesh->SetMasterPoseComponent(GetMesh());
	Accessory1Mesh->SetMasterPoseComponent(GetMesh());
	newCharactersSpells();

}


void AWizardsCharacter::newCharactersSpells()
{
	UWizardsSaveGame* LoadGameInstance = NewObject<UWizardsSaveGame>();
	//	spellList = LoadGameInstance->spellList;
	//if is empty
	if (LoadGameInstance->LoadGameDataFromFile()) {

		for (int i = 0; i < 5; i++) {
			FtheSpell thisSpell;
			mySpellBook.Add(thisSpell);
			mySpellBook[i].spellEffect = LoadGameInstance->spellBook[i]->spellEffect;
			mySpellBook[i].spellType = LoadGameInstance->spellBook[i]->spellType;
			mySpellBook[i].spellCost = LoadGameInstance->spellBook[i]->spellCost + 1.0;
			if (mySpellBook[i].spellType == 2)//temporary
			{
				mySpellBook[i].spellSpeed = LoadGameInstance->spellBook[i]->spellSpeed*1000.0 + 1000.0;//range from 1000 to 10000
			}
			else
			{
				mySpellBook[i].spellSpeed = LoadGameInstance->spellBook[i]->spellSpeed*9000.0 + 1000.0;//range from 1000 to 10000
			}
			mySpellBook[i].spellDamage = LoadGameInstance->spellBook[i]->spellDamage*10.0+10.0;//not in at the moment
			if (mySpellBook[i].spellType == 2)//temporary
			{
				mySpellBook[i].spellRange = LoadGameInstance->spellBook[i]->spellRange*1.0 + 0.1; //1 to 5 seconds
			}
			else
			{
				mySpellBook[i].spellRange = LoadGameInstance->spellBook[i]->spellRange*4.0 + 1.0; //1 to 5 seconds
			}
			mySpellBook[i].spellSize = LoadGameInstance->spellBook[i]->spellSize*4.0 + 1.0;//range 1 to 5
			mySpellBook[i].canBounce = LoadGameInstance->spellBook[i]->canBounce;//boolean, in
			mySpellBook[i].hasGravity = LoadGameInstance->spellBook[i]->hasGravity;//totally in
			mySpellBook[i].isHoming = LoadGameInstance->spellBook[i]->isHoming; //not currenttly implemented
			mySpellBook[i].explodeOnCollision = LoadGameInstance->spellBook[i]->explodeOnCollision; //none of this shit down here is implemented
			mySpellBook[i].explodeOnDeath = LoadGameInstance->spellBook[i]->explodeOnDeath;
			mySpellBook[i].explosionHitDamage = LoadGameInstance->spellBook[i]->explosionHitDamage;
			mySpellBook[i].explosionHitSize = LoadGameInstance->spellBook[i]->explosionHitSize*3.0 + 2.0;
			mySpellBook[i].explosionDeathDamage = LoadGameInstance->spellBook[i]->explosionDeathDamage;
			mySpellBook[i].explosionDeathSize = LoadGameInstance->spellBook[i]->explosionDeathSize*3.0 + 2.0;
			//mySpellBook[i]->myParticle = particleList[mySpellBook[i]->spellEffect + mySpellBook[i]->spellType * 5];
			//mySpellBook[i]->explParticle = particleList[mySpellBook[i]->spellEffect + 5];
			UE_LOG(LogTemp, Warning, TEXT("Spell Gathering Succesful!"));
		}
		morphList = LoadGameInstance->morphList;
		clothesList = LoadGameInstance->clothesList;
		colorList = LoadGameInstance->colorList;
		FOutputDeviceNull ar;
		this->CallFunctionByNameWithArguments(TEXT("defineMorphs"), ar, NULL, true);
		this->CallFunctionByNameWithArguments(TEXT("setClothes"), ar, NULL, true);

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Abort Mission!"));
	}
}

/////////////
// On Tick
void AWizardsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Mana <= maxMana) {
		Mana += DeltaTime*2.0;
	}
	if (Firing && FiringVal < 1.0)
	{
		FiringVal += DeltaTime*8.0;
	}
	else if(!Firing && FiringVal > 0.0)
	{
		FiringVal -= DeltaTime*1.5;
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AWizardsCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	// set up gameplay key bindings
	check(InputComponent);

	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	InputComponent->BindAction("ChangeSpell1", IE_Pressed, this, &AWizardsCharacter::spellSwitch<0>);
	InputComponent->BindAction("ChangeSpell2", IE_Pressed, this, &AWizardsCharacter::spellSwitch<1>);
	InputComponent->BindAction("ChangeSpell3", IE_Pressed, this, &AWizardsCharacter::spellSwitch<2>);
	InputComponent->BindAction("ChangeSpell4", IE_Pressed, this, &AWizardsCharacter::spellSwitch<3>);
	InputComponent->BindAction("ChangeSpell5", IE_Pressed, this, &AWizardsCharacter::spellSwitch<4>);

	//InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AWizardsCharacter::TouchStarted);
	if (EnableTouchscreenMovement(InputComponent) == false)
	{
		InputComponent->BindAction("Fire", IE_Pressed, this, &AWizardsCharacter::preFire);
		InputComponent->BindAction("Fire", IE_Released, this, &AWizardsCharacter::OffFire);

	}

	InputComponent->BindAction("Sprint", IE_Pressed, this, &AWizardsCharacter::onSprint);
	InputComponent->BindAction("Sprint", IE_Released, this, &AWizardsCharacter::offSprint);

	InputComponent->BindAxis("MoveForward", this, &AWizardsCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AWizardsCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	InputComponent->BindAxis("TurnRate", this, &AWizardsCharacter::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	InputComponent->BindAxis("LookUpRate", this, &AWizardsCharacter::LookUpAtRate);
}

void AWizardsCharacter::preFire()
{	
	if (!mySpellBook.IsValidIndex(0)) {
		UE_LOG(LogTemp, Warning, TEXT("Spell Gathering Needed!"));
		newCharactersSpells();
	}
	if (Firing == false)
	{
		Firing = true;
		GetWorldTimerManager().SetTimer(FiringHandler, this, &AWizardsCharacter::OnFire, 0.1f);
	}
	else if (Firing == true)
	{
		OnFire();
	}
	if (mySpellBook[currSpell].spellType == 2 || mySpellBook[currSpell].spellType == 3)
	{
		GetWorldTimerManager().SetTimer(RapidHandler, this, &AWizardsCharacter::preFire, 0.05f);
	}

}

void AWizardsCharacter::OnFire()
{
	if (!mySpellBook.IsValidIndex(0)) {
		UE_LOG(LogTemp, Warning, TEXT("Spell Gathering Needed!"));
		newCharactersSpells();
	}
	if (Mana > mySpellBook[currSpell].spellCost) {
		Mana -= mySpellBook[currSpell].spellCost;
		// try and fire a projectile
		//FTimerDelegate myDelegate;
		//AWizardsCharacter* MyChar = this;
		//GetWorld()->GetTimerManager().SetTimer(UnusedHandle, &AWizardsCharacter::OffFire, 2000.0, false);
		if (!GetWorldTimerManager().IsTimerActive(ArmHandler))
		{
			GetWorldTimerManager().SetTimer(ArmHandler, this, &AWizardsCharacter::LowerArms, 2.0f);
		}
		Firing = true;
		const FRotator SpawnRotation = GetControlRotation();
		const FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);
		UWorld* const World = GetWorld();
		if (World)
		{
			if (Role < ROLE_Authority)
			{
				ServerFireProjectile(mySpellBook[currSpell], SpawnRotation, SpawnLocation);//mySpellBook[currSpell]);
			}
			else {
				ClientFireProjectile(mySpellBook[currSpell], SpawnRotation, SpawnLocation);
			}
		}

		// God this sound is so annoying
		/*if (FireSound != NULL)
		{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}*/

		// try and play a firing animation if specified
		/*if (FireAnimation != NULL)
		{
			// Get the animation object for the arms mesh
			UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
			if (AnimInstance != NULL)
			{
				AnimInstance->Montage_Play(FireAnimation, 1.f);
			}
		}
		//Firing = false;*/
	}
}

void AWizardsCharacter::OffFire() {
	if (Role < ROLE_Authority)
	{
		ServerStopFiring();
	}
	else {
		ClientStopFiring();
	}
}

void AWizardsCharacter::onSprint() {
	UCharacterMovementComponent* myMovement = GetCharacterMovement();
	myMovement->MaxWalkSpeed += 200.0;
}

void AWizardsCharacter::offSprint() {
	UCharacterMovementComponent* myMovement = GetCharacterMovement();
	myMovement->MaxWalkSpeed -= 200.0;
}

void AWizardsCharacter::LowerArms() {
	Firing = false;
}

void AWizardsCharacter::KeepBeaming()
{
	if (Mana > mySpellBook[currSpell].spellCost) {
		Mana -= mySpellBook[currSpell].spellCost;
		wizardsBeamRapid->KeepUpdating();
		GetWorldTimerManager().SetTimer(BeamHandler, this, &AWizardsCharacter::KeepBeaming, 0.05f);
	}
}


void AWizardsCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AWizardsCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = false;
}

void AWizardsCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
	{
		if (TouchItem.bIsPressed)
		{
			if (GetWorld() != nullptr)
			{
				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
				if (ViewportClient != nullptr)
				{
					FVector MoveDelta = Location - TouchItem.Location;
					FVector2D ScreenSize;
					ViewportClient->GetViewportSize(ScreenSize);
					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
					if (ScaledDelta.X != 0.0f)
					{
						TouchItem.bMoved = true;
						float Value = ScaledDelta.X * BaseTurnRate;
						AddControllerYawInput(Value);
					}
					if (ScaledDelta.Y != 0.0f)
					{
						TouchItem.bMoved = true;
						float Value = ScaledDelta.Y* BaseTurnRate;
						AddControllerPitchInput(Value);
					}
					TouchItem.Location = Location;
				}
				TouchItem.Location = Location;
			}
		}
	}
}

void AWizardsCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AWizardsCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void AWizardsCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AWizardsCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AWizardsCharacter::EnableTouchscreenMovement(class UInputComponent* InputComponent)
{
	bool bResult = false;
	if (FPlatformMisc::GetUseVirtualJoysticks() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		bResult = true;
		InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AWizardsCharacter::BeginTouch);
		InputComponent->BindTouch(EInputEvent::IE_Released, this, &AWizardsCharacter::EndTouch);
		InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AWizardsCharacter::TouchUpdate);
	}
	return bResult;
}


template<int newspell>
void AWizardsCharacter::spellSwitch()
{
	currSpell = newspell;
}


float AWizardsCharacter::GetHealth() {
	return Health;
}
float AWizardsCharacter::GetMana() {
	return Mana;
}
bool AWizardsCharacter::isRunning()
{
	return Running;
}
float AWizardsCharacter::isFiring()
{
	return FiringVal;
}
bool AWizardsCharacter::isJumping()
{
	return Jumping;
}


void AWizardsCharacter::Damaged(float damageAmount) {
	Health -= damageAmount;
	if (Health < 0.0) {
		OffFire();
		//Do something to ragdoll Mesh1P->

		//Do something to tell HUD we're dead
		//Add to death counter
		isDead = true;
		Mesh1P->SetSimulatePhysics(true);
		//Mesh1P->SetAllBodiesBelowSimulatePhysics(TEXT("pelvis"), true, true);
		Mesh1P->WakeAllRigidBodies();
		DisableInput(UGameplayStatics::GetPlayerController(this, 0));
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &AWizardsCharacter::Killed, 5.0, false);
	}
}

void AWizardsCharacter::Killed() {
	isDead = false;
	Mesh1P->PutAllRigidBodiesToSleep();
	Mesh1P->SetSimulatePhysics(false);

	Health = maxHealth;
	Mana = maxMana;
	AActor* StartSpot = GetWorld()->GetAuthGameMode()->FindPlayerStart(this->GetController());
	this->SetActorLocation(StartSpot->GetActorLocation());
	Mesh1P->AttachToComponent(this->GetCapsuleComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	Mesh1P->SetRelativeLocationAndRotation(FVector(0.0, 0.0, -98.0), FRotator(0.0f, -90.0f, 0.0f));
	EnableInput(UGameplayStatics::GetPlayerController(this, 0));
}


void AWizardsCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWizardsCharacter, mySpellBook);
	DOREPLIFETIME(AWizardsCharacter, Health);
	DOREPLIFETIME(AWizardsCharacter, Mana);
	DOREPLIFETIME(AWizardsCharacter, currSpell);
}

void AWizardsCharacter::ServerFireProjectile_Implementation(FtheSpell castSpell, FRotator rotation, FVector location) {
	UE_LOG(LogTemp, Warning, TEXT("Server Side"));
	ClientFireProjectile(castSpell, rotation, location);

}
bool AWizardsCharacter::ServerFireProjectile_Validate(FtheSpell castSpell, FRotator rotation, FVector location) {
	return true;
}

void AWizardsCharacter::ClientFireProjectile_Implementation(FtheSpell castSpell, FRotator rotation, FVector location) {
	if (castSpell.spellType == 0)//single projectile
	{
		UWorld* const World = GetWorld();
		if (World)
		{
			// spawn the projectile at the muzzle
			UParticleSystem* projParticle = particleList[castSpell.spellEffect];
			UParticleSystem* blastParticle = particleList[castSpell.spellEffect + 5];
			AWizardsProjectile* wizardsSpell = World->SpawnActor<AWizardsProjectile>(ProjectileClass, location, rotation);// , myparams);
			wizardsSpell->SpellCreation(&castSpell, projParticle, blastParticle, BlastClass, this);
		}
	}
	else if (castSpell.spellType == 1) {//blast, local
		UWorld* const World = GetWorld();
		if (World)
		{
			// spawn the projectile at the person.
			UParticleSystem* blastParticle = particleList[castSpell.spellEffect + 5];//Only valid since this is the SECOND one
			AWizardsBlast* wizardsSpell = World->SpawnActor<AWizardsBlast>(BlastClass, location, rotation);// , myparams);
			wizardsSpell->SpellCreation(blastParticle, castSpell.spellSize, castSpell.spellDamage, this);
			//wizardsSpell->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::KeepRelativeTransform);//Should eliminate this
		}
	}
	else if (castSpell.spellType == 2) {//conical type
		UWorld* const World = GetWorld();
		if (World)
		{
			// spawn the projectile at the muzzle
			UParticleSystem* coneParticle = particleList[castSpell.spellEffect + castSpell.spellType * 5];
			UParticleSystem* blastParticle = particleList[castSpell.spellEffect + 5];
			//AWizardsCone* wizardsCone = World->SpawnActor<AWizardsCone>(ConeClass, location, rotation);// , myparams);
			AWizardsProjectile* wizardsCone = World->SpawnActor<AWizardsProjectile>(ProjectileClass, location, rotation);// , myparams);
			wizardsCone->SpellCreation(&castSpell, coneParticle, blastParticle, BlastClass, this);
		}
	}
	else if (castSpell.spellType == 3)//rapid fire
	{
		UWorld* const World = GetWorld();
		if (World)
		{
			// spawn the projectile at the muzzle
			UParticleSystem* projParticle = particleList[castSpell.spellEffect];
			UParticleSystem* blastParticle = particleList[castSpell.spellEffect + 5];
			AWizardsProjectile* wizardsSpell = World->SpawnActor<AWizardsProjectile>(ProjectileClass, location, rotation + RotatorArray[currRandom]);// , myparams);
			wizardsSpell->SpellCreation(&castSpell, projParticle, blastParticle, BlastClass, this);
			currRandom = (currRandom + 1) % 30;
		}
	}
	else if (castSpell.spellType == 4) {//beam instant
		UWorld* const World = GetWorld();
		if (World)
		{
			UParticleSystem* beamParticle = particleList[castSpell.spellEffect + 15];
			AWizardsBeam* wizardsBeam = World->SpawnActor<AWizardsBeam>(BeamClass, location, rotation);// , myparams);
			wizardsBeam->SpellCreation(beamParticle, castSpell.spellDamage, this);
			//wizardsBeam->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::KeepRelativeTransform);//Should eliminate this

		}
	}
	else if (castSpell.spellType == 5) {//beam duration
		UWorld* const World = GetWorld();
		if (World)
		{
			UParticleSystem* beamParticle = particleList[castSpell.spellEffect + 15];
			wizardsBeamRapid = World->SpawnActor<AWizardsBeam>(BeamClass, location, rotation);// , myparams);
			wizardsBeamRapid->SpellCreation(beamParticle, castSpell.spellDamage, this);
			//wizardsBeamRapid->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::KeepRelativeTransform);//Should eliminate this
			KeepBeaming();
		}
	}
	else if (castSpell.spellType == 6) {//wall
		UWorld* const World = GetWorld();
		if (World)
		{
			UParticleSystem* wallParticle = particleList[castSpell.spellEffect + 15];
			AWizardsWall* wizardsWall = World->SpawnActor<AWizardsWall>(WallClass, location, rotation);// , myparams);
			wizardsWall->SpellCreation(&castSpell, wallParticle, theWall, this);
		}
	}
	else if (castSpell.spellType == 7) {//Cage
		UWorld* const World = GetWorld();
		if (World)
		{
			UParticleSystem* cageParticle = particleList[castSpell.spellEffect + 15];
			AWizardsCage* wizardsCage = World->SpawnActor<AWizardsCage>(CageClass, location, rotation);// , myparams);
			wizardsCage->SpellCreation(&castSpell, cageParticle, theCage, this);
		}
	}
	else if (castSpell.spellType == 8) {//AOE Instant
		UWorld* const World = GetWorld();
		if (World)
		{
			UParticleSystem* AOEParticle = particleList[castSpell.spellEffect + 20];
			AWizardsGroundAOEInstant* wizardsAOEInstant = World->SpawnActor<AWizardsGroundAOEInstant>(CageClass, location, rotation);// , myparams);
			wizardsAOEInstant->SpellCreation(&castSpell, AOEParticle, this);
		}
	}

}
bool AWizardsCharacter::ClientFireProjectile_Validate(FtheSpell castSpell, FRotator rotation, FVector location) {
	return true;
}

void AWizardsCharacter::ServerStopFiring_Implementation() {

	ClientStopFiring();

}
bool AWizardsCharacter::ServerStopFiring_Validate() {
	return true;
}

void AWizardsCharacter::ClientStopFiring_Implementation() {
	GetWorldTimerManager().ClearTimer(RapidHandler);
	GetWorldTimerManager().ClearTimer(BeamHandler);
	GetWorldTimerManager().SetTimer(rapidTimerHandler, this, &AWizardsCharacter::rapidReset, 3.0, false);

}
bool AWizardsCharacter::ClientStopFiring_Validate() {
	return true;
}

void AWizardsCharacter::rapidReset()
{
	currRandom = 0;
}

