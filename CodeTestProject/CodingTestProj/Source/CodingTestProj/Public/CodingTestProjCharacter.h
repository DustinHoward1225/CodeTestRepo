// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
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
	/** Handles object or actor of the projectile */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	TSubclassOf<AActor> AProjectileObj;
	
	/** Animation Montage to play when Flailing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	UAnimMontage* SpawnAnimationMontage;

	/** Handler for when fire the projectile during cooldown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	bool bProjectileCooldown;

	/** Maximum amount of time for cooldown */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	float CooldownSecondsMax;

	/** Amount of time it has left durning cooldown */
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Projectile Spawn")
	float CooldownSecondsLength;

protected:
	/** Wait for the cooldown to end */
	void CooldownEnd();

	/** Amount of seconds left in cooldown delay*/
	float RemainingSecondsInCooldown;

	/** Handler for the cooldown delay */
	FTimerHandle DelayTimerHandle;

	/** Event for handling replication */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:
	
	/** Exposing flailing cue to blueprint */
	UFUNCTION(BlueprintImplementableEvent, Category = "Other Functionality")
	void FlailAroundBP();	

	/** Exposing actual projectile spawn cue to blueprint */
	UFUNCTION(BlueprintImplementableEvent, Category = "Other Functionality")
	void SpawnProjectileBP();

	/** Exposing end of cooldown delay cue to blueprint */
	UFUNCTION(BlueprintImplementableEvent, Category = "Other Functionality")
	void EndOfCooldownBP();

	/** Calls The Flailing action to server */
	UFUNCTION(Server, reliable)
	void FlailAroundServerRPC();
	
	/** Calls the Flailing action to all clients */
	UFUNCTION(NetMulticast, Reliable)
	void FlailAroundMultiRPC();

	/** Calls spawning the projectile to the server */
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void SpawnProjectileRPC();
	
};