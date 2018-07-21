// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "ParticleDefinitions.h"
//#include "WizardsCone.h"
#include "spellBook.h"
#include "WizardsCharacter.generated.h"

class UInputComponent;



USTRUCT()
struct FtheSpell
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY()
		uint8 spellEffect;
	UPROPERTY()
		uint8 spellType;
	UPROPERTY()
		float spellCost;
	UPROPERTY()
		float spellSpeed;
	UPROPERTY()
		float spellDamage;
	UPROPERTY()
		float spellRange; //lifetime for projectiles, distance for rays and blasts
	UPROPERTY()
		float spellSize;
	UPROPERTY()
		bool canBounce;
	UPROPERTY()
		bool hasGravity;
	UPROPERTY()
		bool isHoming;
	UPROPERTY()
		bool explodeOnCollision;
	UPROPERTY()
		bool explodeOnDeath;
	UPROPERTY()
		float explosionHitDamage;
	UPROPERTY()
		float explosionHitSize;
	UPROPERTY()
		float explosionDeathDamage;
	UPROPERTY()
		float explosionDeathSize;
};



UCLASS(config = Game)
class AWizardsCharacter : public ACharacter
{
	GENERATED_BODY()

		/** Pawn mesh: 1st person view (arms; seen only by self) */
		class USkeletalMeshComponent* Mesh1P;

	/** Third person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* ThirdPersonCameraComponent;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

public:
	AWizardsCharacter();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "CharacterFunctions")
		void newCharactersSpells();

	void Tick(float DeltaTime) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

	//All wizard properties located here

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Gameplay)
	UPROPERTY(Replicated)
	float Health;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Gameplay)
	float maxHealth;
	UPROPERTY(Replicated)
	float Mana;
	float corruptionLevel;
	float maxCorruption;
	float madnessLevel;
	float maxMadness;
	float damageMod;
	float healingMod;
	float selfDamageMod;
	float selfHealingMod;
	AWizardsCharacter* connectedWizard;//for skills that use the connected wizard effect
	TArray<float> resistances;//light, dark, heat, cold, kinetic, nature, corruption, madness
	TArray<float> statusEffectMods;//slow, slow duration, haste, haste duration, fire, fire duration, mending, mending duration, feather, feather duration, bind duration, 
	TArray<float> specialSkills;//the special skill in question as well as its strength
	//special skills to go in this array to be listed here
	//CoM skill 2, will need an if() when a character gets healed
	//CoM Skill 3, same as above
	//Com Skill 4, will need to implement inside of a check-for-nearest ally function
	//Com Skill 5, will need an if() when a character gets healed
	//Com Skill 6, will need an if() on death that causes a function that causes a healing blast
	//Com skill 7, will need a function to make target ally connected and an isConnected check on heals
	//Com skill 8, same as above but on death
	//com skill 9, same as above but on damage
	//com skill 10, need to implement inside of a check-for-nearest ally function
	//com skill 11, same as 7-9 but on status effect
	//com skill 12, same as 7-9 but on corruption/madness
	//coc skill 1, needs an if() on taking damage


	//end wizard properties

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gameplay)
		bool isDead = false;

	/** Mana */
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Gameplay)
	bool Attacking = false;
	bool Firing = false;
	float FiringVal = 0.0f;
	bool Running = false;
	bool Jumping = false;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Gameplay)
	float maxMana;

	UPROPERTY(Replicated)
		TArray<FtheSpell> mySpellBook;
	UPROPERTY(Replicated, BlueprintReadWrite, Category = Gameplay)
	TArray<float> morphList;
	UPROPERTY(Replicated, BlueprintReadWrite, Category = Gameplay)
	TArray<int> clothesList;
	UPROPERTY(Replicated, BlueprintReadWrite, Category = Gameplay)
	TArray<int> colorList;

	TArray<UParticleSystem*> particleList;

	UPROPERTY(Replicated)
		int8 currSpell;
	//AWizardsCone* wizardsCone;
	AActor* activeAttack;


	/** Projectile class to spawn */
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsProjectile> ProjectileClass;
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsBlast> BlastClass;
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsCone> ConeClass;
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsBeam> BeamClass;
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsWall> WallClass;
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsCage> CageClass;
	UPROPERTY(Replicated, EditAnywhere, Category = Projectile)
		TSubclassOf<class AWizardsGroundAOEInstant> AOEInstantClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UStaticMesh* theWall;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UStaticMesh* theCage;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* HeadMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* GlassesMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* NeckMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* ShouldersMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* ShirtMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* CoatMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* GlovesMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* PantsMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* ShoesMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* RingsMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* Accessory1Mesh;




protected:
	FTimerHandle RapidHandler;
	FTimerHandle FiringHandler;
	FTimerHandle ArmHandler;
	FTimerHandle BeamHandler;
	FTimerHandle rapidTimerHandler;
	AWizardsBeam* wizardsBeamRapid; //For le beam
	//handles delay before an attack is started
	void preFire();
	/** Fires a projectile. */
	void OnFire();

	void OffFire();//stops cones

	void LowerArms();

	void KeepBeaming();

	void onSprint();
	void offSprint();



	TArray<FRotator> RotatorArray;
	int currRandom = 0;
	void rapidReset();

				   /** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	* Called via input to turn at a given rate.
	* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void TurnAtRate(float Rate);

	/**
	* Called via input to turn look up/down at a given rate.
	* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false; Location = FVector::ZeroVector; }
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;

	//Called when you switch a spell
	template<int newspell>
	void spellSwitch();
	bool shooting = false;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/*
	* Configures input for touchscreen devices if there is a valid touch interface for doing so
	*
	* @param	InputComponent	The input component pointer to bind controls to
	* @returns true if touch controls were enabled.
	*/
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetThirdPersonCameraComponent() const { return ThirdPersonCameraComponent; }
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UFUNCTION(BlueprintPure, Category = "CharacterFunctions")
		float GetHealth();
	UFUNCTION(BlueprintPure, Category = "CharacterFunctions")
		float GetMana();
	/* Stuff for animations*/
	UFUNCTION(BlueprintPure, Category = "CharacterFunctions")
		bool isJumping();
	UFUNCTION(BlueprintPure, Category = "CharacterFunctions")
		bool isRunning();
	UFUNCTION(BlueprintPure, Category = "CharacterFunctions")
		float isFiring();


	void Damaged(float damageAmount);
	void Killed();

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;


	//server related code all goes down here

	UFUNCTION(reliable, server, WithValidation)
		void ServerFireProjectile(FtheSpell castSpell, FRotator rotation, FVector location);
	virtual void ServerFireProjectile_Implementation(FtheSpell castSpell, FRotator rotation, FVector location);
	virtual bool ServerFireProjectile_Validate(FtheSpell castSpell, FRotator rotation, FVector location);

	UFUNCTION(reliable, NetMulticast, WithValidation)
		void ClientFireProjectile(FtheSpell castSpell, FRotator rotation, FVector location);
	virtual void ClientFireProjectile_Implementation(FtheSpell castSpell, FRotator rotation, FVector location);
	virtual bool ClientFireProjectile_Validate(FtheSpell castSpell, FRotator rotation, FVector location);

	UFUNCTION(reliable, server, WithValidation)
		void ServerStopFiring();
	virtual void ServerStopFiring_Implementation();
	virtual bool ServerStopFiring_Validate();

	UFUNCTION(reliable, NetMulticast, WithValidation)
		void ClientStopFiring();
	virtual void ClientStopFiring_Implementation();
	virtual bool ClientStopFiring_Validate();

};
