// Fill out your copyright notice in the Description page of Project Settings.



#include "ProjectileObject.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"

#define PrintString(String) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White,String)
// Sets default values
AProjectileObject::AProjectileObject()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;


    //HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    //HitBox->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);
    if (!RootComponent)
    {
        RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
    }
    /*else
    {
        RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
    }
    */

    if (!ProjectileMeshComponent)
    {
        ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
        ProjectileMeshComponent->AttachTo(RootComponent);
        static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
        if (Mesh.Succeeded())
        {
            ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
            ProjectileMeshComponent->AttachTo(RootComponent);
        }
        //const FVector Empty = (0.0f,0.0f,0.0f);
        
    }
    ProjectileMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    if (!CollisionComponent)
    {
        // Use a sphere as a simple collision representation.
        CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
        CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);

        // Set the sphere's collision radius.
        CollisionComponent->InitSphereRadius(90.0f);
        // Set the root component to be the collision component.
        RootComponent = CollisionComponent;
    }
    else {
        CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    }

    if (!ProjectileMovementComponent)
    {
        // Use this component to drive this projectile's movement.
        ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
        ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
        ProjectileMovementComponent->InitialSpeed = 3000.0f;
        ProjectileMovementComponent->MaxSpeed = 3000.0f;
        ProjectileMovementComponent->bRotationFollowsVelocity = true;
        ProjectileMovementComponent->bShouldBounce = true;
        ProjectileMovementComponent->Bounciness = 0.3f;
        ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
    }



    //CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);

}

// Called when the game starts or when spawned
void AProjectileObject::BeginPlay()
{
    Super::BeginPlay();
    //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
    TestEvent();
    if (!AffectMultipleActors)
    {
        AmtOfActorsToAffect = 1;
    }
    ProjectileMeshComponent->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
}

// Called every frame
void AProjectileObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
   /* if (EffectDataTable)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Tyeee"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("no!"));
    }*/
}
 
//static ConstructorHelpers::FObjectFinder<UDataTable> ProjectileDataObject(TEXT("DataTable'/Game/Datatables/EffectsTableObj.EffectsTableObj'"));
//EffectDataTable = ProjectileDataObject

void AProjectileObject::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    //PrintString(FString::Printf(TEXT("Hit: %s"), *OtherActor->GetName()));
    //PrintString(FString::Printf(TEXT("YUO"), *OtherActor->GetName()));

    ECollisionChannel ObjType = OtherComp->GetCollisionObjectType();
    const FString ObjTypeS = *UEnum::GetDisplayValueAsText(ObjType).ToString();
    //PrintString(FString::Printf(TEXT("Type: %s"), *ObjTypeS));

    if (EffectDataTable)
    {
        static const FString ContextString(TEXT("Effect Context"));
        FProjectileEffect* TableRow = EffectDataTable->FindRow<FProjectileEffect>(FName(ObjTypeS), ContextString, true);
        if (TableRow)
        {
            
            //const FProjectileEffect& ProjectileTable = ProjectileEff;
            if (AmtOfActorsToAffect > 0)
            {
                OnApplyEffect(/*EffectDataTable, */OtherActor, ObjTypeS);
                AmtOfActorsToAffect--;
            }
            
            
            
            if (DestroyProjectile)
            {
                   AProjectileObject::Destroy();
            }
            
           // PrintString(FString::Printf(TEXT("%s"), *TableRow->Description));
           
        }
    }

    /*switch (ObjType)
    {
    case 0:
        PrintString(FString::Printf(TEXT("static")));
        break;
    case 1:
        PrintString(FString::Printf(TEXT("dynami")));
        break;
    case 2:
        PrintString(FString::Printf(TEXT("pawn")));
        break;
    case 3:
        PrintString(FString::Printf(TEXT("Visibllle")));
        break;
    case 4:
        PrintString(FString::Printf(TEXT("cam")));
        break;
    case 5:
        PrintString(FString::Printf(TEXT("phys")));
        break;
    case 6:
        PrintString(FString::Printf(TEXT("car")));
        break;
    case 7:
        PrintString(FString::Printf(TEXT("oooof")));
        break;
    default:
        PrintString(FString::Printf(TEXT("jjj")));
        break;
        /*
        *
        *
        *
        *
        *
        *
        *
        *
        //Reserved Engine Trace Channels
            uint8 WorldStatic;			// 0
            uint8 WorldDynamic;			// 1
            uint8 Pawn;					// 2
            uint8 Visibility;			// 3
            uint8 Camera;				// 4
            uint8 PhysicsBody;			// 5
            uint8 Vehicle;				// 6
            uint8 Destructible;			// 7

    }
    */

    //FString ObjTypeS = "yes";
    //const FString ObjTypeS = *UEnum::GetDisplayValueAsText(ObjType).ToString();
    //UE_LOG(LogTemp, Warning, TEXT("%s"), ObjTypeS);
    //ObjType.ToString();
    //PrintString(FString::Printf(TEXT(ObjTypeS)));

    //switch (ObjType)
   // {
   // }

}


