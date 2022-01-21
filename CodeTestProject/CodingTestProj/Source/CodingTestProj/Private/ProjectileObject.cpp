// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectileObject.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"
#include "..\Public\ProjectileObject.h"

// Sets default values
AProjectileObject::AProjectileObject()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Attempt at replication
    bReplicates = true;

    // Root component setup
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));

    // Collision component setup
    ProjectileCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    ProjectileCollisionComponent->AttachTo(RootComponent);
    // Collision Radius and OnHit assigned
    ProjectileCollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);
    ProjectileCollisionComponent->InitSphereRadius(35.0f);
    ProjectileCollisionComponent->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
    ProjectileCollisionComponent->BodyInstance.bNotifyRigidBodyCollision = true;

    // Mesh component setup
    ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
    ProjectileMeshComponent->AttachTo(ProjectileCollisionComponent);
    // Finding the correct mesh to set
    static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (Mesh.Succeeded())
    {
        ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
    }
    // Setting the size and offset
    ProjectileMeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    ProjectileMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, -30.f));

    // Movement component setup
    ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    ProjectileMovementComponent->SetUpdatedComponent(ProjectileCollisionComponent);
    // Movement component features
    ProjectileMovementComponent->InitialSpeed = 3000.0f;
    ProjectileMovementComponent->MaxSpeed = 3000.0f;
    ProjectileMovementComponent->bRotationFollowsVelocity = true;
    ProjectileMovementComponent->bShouldBounce = true;
    ProjectileMovementComponent->Bounciness = 0.3f;
    ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
    
    // Lifespan of projectile
    ProjectileLifespan = 7.0f;
}

// Called when the game starts or when spawned
void AProjectileObject::BeginPlay()
{
    Super::BeginPlay();
    // Can only affect one actor if it can't affect multiple
    if (!bAffectMultipleActors)
    {
        AmountOfActorsToAffect = 1;
    }
    // Starts the delay for the lifespan
    FTimerHandle InputDelayManager;
    GetWorld()->GetTimerManager().SetTimer(InputDelayManager, this, &AProjectileObject::DestroySelf, ProjectileLifespan, false);
}

// Called every frame
void AProjectileObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);   
}


void AProjectileObject::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    // Gets the object type of the affected actor and converts it to a string
    ECollisionChannel ObjectType = OtherComp->GetCollisionObjectType();
    const FString ObjectTypeString = *UEnum::GetDisplayValueAsText(ObjectType).ToString();

    if (EffectDataTable)
    {        
        if (AmountOfActorsToAffect > 0)
        {
            // If the data table is valid and it can affect actors, it would apply the effect and decrement the amount of actors it has left
            OnApplyEffect(EffectDataTable, OtherActor, ObjectTypeString);
            AmountOfActorsToAffect--;
        } 

        if (bDestroyProjectile)
        {
            // Destroys the projectile on hit
            AProjectileObject::Destroy();
        }
    }    
}

void AProjectileObject::DestroySelf()
{
    // Destroys the projectile once lifespan runs out
    AProjectileObject::Destroy();
}