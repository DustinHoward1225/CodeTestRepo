// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodingTestProjCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

//////////////////////////////////////////////////////////////////////////
// ACodingTestProjCharacter

ACodingTestProjCharacter::ACodingTestProjCharacter()
{
	// Able to tick every frame
	PrimaryActorTick.bCanEverTick = true;
	
	// Able to replicate actions
	SetReplicates(true);
	bReplicates = true;

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
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Spawns a place to spawn the projectile
	ProjectileSpawnPlace = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPlace->AttachTo(GetCapsuleComponent());
	ProjectileSpawnPlace->SetRelativeLocation(FVector(100.f, 0.f, 0.f));

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ACodingTestProjCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bProjectileCooldown) 
	{
		// Using the seconds left on the cooldown delay to set the cooldown value
		RemainingSecondsInCooldown = GetWorld()->GetTimerManager().GetTimerRemaining(DelayTimerHandle);
		CooldownSecondsLength = RemainingSecondsInCooldown;
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACodingTestProjCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACodingTestProjCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACodingTestProjCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACodingTestProjCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACodingTestProjCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACodingTestProjCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACodingTestProjCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ACodingTestProjCharacter::OnResetVR);

	// Action to play Flail animation
	PlayerInputComponent->BindAction("Flail", IE_Pressed, this, &ACodingTestProjCharacter::FlailAroundServerRPC);
}


void ACodingTestProjCharacter::OnResetVR()
{
	// If CodingTestProj is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in CodingTestProj.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACodingTestProjCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ACodingTestProjCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ACodingTestProjCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACodingTestProjCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACodingTestProjCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACodingTestProjCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// Find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// Get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

//////////////////////////////////////////////////////////////////////////
// Spawn Projectile

void ACodingTestProjCharacter::FlailAround()
{
	// Exposing this cue in blueprint
	FlailAroundBP();	
	if (SpawnAnimationMontage)
	{
		if (!bProjectileCooldown)
		{
			// Plays the animation and activates cooldown
			PlayAnimMontage(SpawnAnimationMontage, 1, NAME_None);
			bProjectileCooldown = true;

			// Activates the delay for the CooldownDelay function
			GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, this, &ACodingTestProjCharacter::CooldownEnd, CooldownSecondsMax, false);
		}
	}
}

void ACodingTestProjCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	// Sets up for the Replication process
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}


void ACodingTestProjCharacter::FlailAroundServerRPC_Implementation()
{
	// Calls the multicast for the Flailing Action
	FlailAroundMultiRPC();
}

void ACodingTestProjCharacter::FlailAroundMultiRPC_Implementation()
{
	// Exposing this cue in blueprint
	FlailAroundBP();
	if (IsLocallyControlled())
	{
		if (SpawnAnimationMontage)
		{
			if (!bProjectileCooldown)
			{
				// Plays the animation and activates cooldown
				PlayAnimMontage(SpawnAnimationMontage, 1, NAME_None);
				bProjectileCooldown = true;

				// Activates the delay for the CooldownDelay function
				GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, this, &ACodingTestProjCharacter::CooldownEnd, CooldownSecondsMax, false);
			}
		}
	}
	else
	{
		//Stops the animation from spawning needless projectiles if it isn't possessed
		StopAnimMontage(SpawnAnimationMontage);
	}
}


void ACodingTestProjCharacter::SpawnProjectileRPC_Implementation()
{
	// Exposing this cue in blueprint
	SpawnProjectileBP();

	// Spawns the projectils by using the location and rotation of the provided component
	const FVector SpawnPlaceLocation = ProjectileSpawnPlace->GetComponentLocation();
	const FRotator SpawnPlaceRotation = ProjectileSpawnPlace->GetComponentRotation();
	GetWorld()->SpawnActor<AActor>(AProjectileObj, SpawnPlaceLocation, SpawnPlaceRotation);
}

void ACodingTestProjCharacter::CooldownEnd()
{	
	// Exposing this cue in blueprint
	EndOfCooldownBP();

	// Turns off the cooldown and prints on the string to fire the projectile again
	bProjectileCooldown = false;
}

void ACodingTestProjCharacter::SpawnProjectile()
{
	// Exposing this cue in blueprint
	SpawnProjectileBP();

	// Spawns the projectils by using the location and rotation of the provided component
	const FVector SpawnPlaceLocation = ProjectileSpawnPlace->GetComponentLocation();
	const FRotator SpawnPlaceRotation = ProjectileSpawnPlace->GetComponentRotation();
	GetWorld()->SpawnActor<AActor>(AProjectileObj, SpawnPlaceLocation, SpawnPlaceRotation);
}

