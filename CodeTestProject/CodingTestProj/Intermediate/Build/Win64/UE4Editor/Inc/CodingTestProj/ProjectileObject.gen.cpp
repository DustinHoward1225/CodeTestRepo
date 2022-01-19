// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodingTestProj/Public/ProjectileObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileObject() {}
// Cross Module References
	CODINGTESTPROJ_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileEffect();
	UPackage* Z_Construct_UPackage__Script_CodingTestProj();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_AProjectileObject_NoRegister();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_AProjectileObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProjectileEffect>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FProjectileEffect cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FProjectileEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CODINGTESTPROJ_API uint32 Get_Z_Construct_UScriptStruct_FProjectileEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileEffect, Z_Construct_UPackage__Script_CodingTestProj(), TEXT("ProjectileEffect"), sizeof(FProjectileEffect), Get_Z_Construct_UScriptStruct_FProjectileEffect_Hash());
	}
	return Singleton;
}
template<> CODINGTESTPROJ_API UScriptStruct* StaticStruct<FProjectileEffect>()
{
	return FProjectileEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileEffect(FProjectileEffect::StaticStruct, TEXT("/Script/CodingTestProj"), TEXT("ProjectileEffect"), false, nullptr, nullptr);
static struct FScriptStruct_CodingTestProj_StaticRegisterNativesFProjectileEffect
{
	FScriptStruct_CodingTestProj_StaticRegisterNativesFProjectileEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProjectileEffect")),new UScriptStruct::TCppStructOps<FProjectileEffect>);
	}
} ScriptStruct_CodingTestProj_StaticRegisterNativesFProjectileEffect;
	struct Z_Construct_UScriptStruct_FProjectileEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "ProjectileEffect" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileEffect, Effect), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProjectileEffect" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileEffect, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ProjectileEffect",
		sizeof(FProjectileEffect),
		alignof(FProjectileEffect),
		Z_Construct_UScriptStruct_FProjectileEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CodingTestProj();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileEffect"), sizeof(FProjectileEffect), Get_Z_Construct_UScriptStruct_FProjectileEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileEffect_Hash() { return 758698334U; }
	DEFINE_FUNCTION(AProjectileObject::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_AProjectileObject_OnApplyEffect = FName(TEXT("OnApplyEffect"));
	void AProjectileObject::OnApplyEffect(AActor* AffectedActor, const FString& EffectToTakePlace)
	{
		ProjectileObject_eventOnApplyEffect_Parms Parms;
		Parms.AffectedActor=AffectedActor;
		Parms.EffectToTakePlace=EffectToTakePlace;
		ProcessEvent(FindFunctionChecked(NAME_AProjectileObject_OnApplyEffect),&Parms);
	}
	static FName NAME_AProjectileObject_TestEvent = FName(TEXT("TestEvent"));
	void AProjectileObject::TestEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProjectileObject_TestEvent),NULL);
	}
	void AProjectileObject::StaticRegisterNativesAProjectileObject()
	{
		UClass* Class = AProjectileObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AProjectileObject::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectToTakePlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectToTakePlace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedActor = { "AffectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnApplyEffect_Parms, AffectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectToTakePlace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectToTakePlace = { "EffectToTakePlace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnApplyEffect_Parms, EffectToTakePlace), METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectToTakePlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectToTakePlace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectToTakePlace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEffect" },
		{ "Comment", "/*const FTableRowBase& EffectTable, */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "const FTableRowBase& EffectTable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileObject, nullptr, "OnApplyEffect", nullptr, nullptr, sizeof(ProjectileObject_eventOnApplyEffect_Parms), Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileObject_OnApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileObject_OnHit_Statics
	{
		struct ProjectileObject_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileObject_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileObject_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileObject, nullptr, "OnHit", nullptr, nullptr, sizeof(ProjectileObject_eventOnHit_Parms), Z_Construct_UFunction_AProjectileObject_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileObject_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileObject_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileObject_TestEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_TestEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEffect" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileObject_TestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileObject, nullptr, "TestEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_TestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_TestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectileObject_TestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectileObject_TestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectileObject_NoRegister()
	{
		return AProjectileObject::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyProjectile_MetaData[];
#endif
		static void NewProp_DestroyProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectMultipleActors_MetaData[];
#endif
		static void NewProp_AffectMultipleActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectMultipleActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmtOfActorsToAffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmtOfActorsToAffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectileObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileObject_OnApplyEffect, "OnApplyEffect" }, // 639709907
		{ &Z_Construct_UFunction_AProjectileObject_OnHit, "OnHit" }, // 2549274709
		{ &Z_Construct_UFunction_AProjectileObject_TestEvent, "TestEvent" }, // 707071885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileObject.h" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = \"Chillin\")\n//USceneComponent* RootComponent;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Chillin\")\nUSceneComponent* RootComponent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// Sphere mesh component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Sphere mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent = { "ProjectileMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, ProjectileMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// Sphere collision component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	void Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile_SetBit(void* Obj)
	{
		((AProjectileObject*)Obj)->DestroyProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile = { "DestroyProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectileObject), &Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	void Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors_SetBit(void* Obj)
	{
		((AProjectileObject*)Obj)->AffectMultipleActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors = { "AffectMultipleActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectileObject), &Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmtOfActorsToAffect_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmtOfActorsToAffect = { "AmtOfActorsToAffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, AmtOfActorsToAffect), METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmtOfActorsToAffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmtOfActorsToAffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable_MetaData[] = {
		{ "Category", "ProjectileObject" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable = { "EffectDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, EffectDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_DestroyProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_AffectMultipleActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmtOfActorsToAffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileObject_Statics::ClassParams = {
		&AProjectileObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectileObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileObject, 2574015);
	template<> CODINGTESTPROJ_API UClass* StaticClass<AProjectileObject>()
	{
		return AProjectileObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileObject(Z_Construct_UClass_AProjectileObject, &AProjectileObject::StaticClass, TEXT("/Script/CodingTestProj"), TEXT("AProjectileObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
