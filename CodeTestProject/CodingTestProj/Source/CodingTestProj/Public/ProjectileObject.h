// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "Engine/DataTable.h"
#include "ProjectileObject.generated.h"

/** Effect Data Table */
USTRUCT(BlueprintType)
struct FProjectileEffect : public FTableRowBase
{
	GENERATED_BODY()
	/** Column that lists the effects to take place */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Effect;

	/** Column that explains what the effects do for better understanding */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Description;
};

/** Sphere collision component */
class USPhereComponent;

/** Projectile Object */
UCLASS()
class CODINGTESTPROJ_API AProjectileObject : public AActor
{
	GENERATED_BODY()

public:
	/** Sets default values for this actor's properties */
	AProjectileObject();
protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

public:
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

	/** Sphere mesh component */
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		UStaticMeshComponent* ProjectileMeshComponent;

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Projectile)
		USphereComponent* ProjectileCollisionComponent;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;

public:
	/** Whether or not to destroy the projectile after hitting an object */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
		bool bDestroyProjectile;

	/** Whether or not to more than one actor */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
		bool bAffectMultipleActors;

	/** Amount of actors that the projectile is allowed to affect if it able to affect multiple */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
		int AmountOfActorsToAffect;

	/** Handler for the data that holds the effect */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
		UDataTable* EffectDataTable;

	/** Time before the projectile destroys */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
		float ProjectileLifespan;


protected:
	/**
	 * Called when this hits another object.
	 * @param HitComponent	This is what component on the projectile has been hit
	 * @param OtherActor	This is the actor that the projectile hit
	 * @param OtherComp	This is the component on the other actor that the projectile hit
	 * @param NormalImpulse	This is the impulse or 'shock' from the hit
	 * @param Hit	This is result from the hit
	 */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param EffectTable	This is the data used to determine which effect is taking place
	 * @param AffectedActor	This is the actor that is being effected
	 * @param AffectedObjectType	This is object type of the effected actor
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "ProjectileEffect")
		void OnApplyEffect(UDataTable* EffectTable,  AActor * AffectedActor, const FString& AffectedObjectType);

	/** Destroys itself when lifespan runs out */
	void DestroySelf();

	UFUNCTION(BlueprintImplementableEvent, Category = "ProjectileEffect")
		void OnHitBP(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintImplementableEvent, Category = "ProjectileEffect")
		void DestroySelfBP();
};