// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "CodingTestProjCharacter.generated.h"

/** Coding Test Proj Character */
UCLASS(config=Game)
class ACodingTestProjCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** Place to spawn projectile */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* ProjectileSpawnPlace;

public:

	ACodingTestProjCharacter();

	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;	

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

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

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:

	/** Executes Flailing Animation Montage */
	UFUNCTION(BlueprintCallable, Category = "Other Functionality")
	void FlailAround();

	UFUNCTION(BlueprintImplementableEvent, Category = "Other Functionality")
		void FlailAroundBP();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Other Functionality")
		void FlailAroundBPFortimer();

	/** As it's able to be called from blueprint, this handles bringing the projectile in the game. */
	UFUNCTION(BlueprintCallable, Category = "Other Functionality")
	void SpawnProjectile();
	
	/** Handles object or actor of the projectile */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	TSubclassOf<AActor> AProjectileObj;
	
	/** Animation Montage to play when Flailing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	UAnimMontage* SpawnAnimation;

	/** Maximum amount of time for cooldown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	float CooldownMax;

	/** Amount of time it has left durning cooldown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	float CooldownLength;

protected:
	/** Wait for the cooldown to end */
	void CooldownDelay();

	/** Handler for when fire the projectile during cooldown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	bool bProjectileCooldown;	


	
	float secsLeft;
};