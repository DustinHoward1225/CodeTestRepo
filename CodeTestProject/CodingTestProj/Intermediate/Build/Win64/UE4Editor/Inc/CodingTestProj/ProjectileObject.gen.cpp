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
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
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
		{ "Comment", "/** Effect Data Table */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Effect Data Table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "ProjectileEffect" },
		{ "Comment", "/** Column that lists the effects to take place */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Column that lists the effects to take place" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileEffect, Effect), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileEffect_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProjectileEffect" },
		{ "Comment", "/** Column that explains what the effects do for better understanding */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Column that explains what the effects do for better understanding" },
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
	uint32 Get_Z_Construct_UScriptStruct_FProjectileEffect_Hash() { return 1491251213U; }
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
	void AProjectileObject::OnApplyEffect(UDataTable* EffectTable, AActor* AffectedActor, const FString& AffectedObjectType)
	{
		ProjectileObject_eventOnApplyEffect_Parms Parms;
		Parms.EffectTable=EffectTable;
		Parms.AffectedActor=AffectedActor;
		Parms.AffectedObjectType=AffectedObjectType;
		ProcessEvent(FindFunctionChecked(NAME_AProjectileObject_OnApplyEffect),&Parms);
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AffectedObjectType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectTable = { "EffectTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnApplyEffect_Parms, EffectTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedActor = { "AffectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnApplyEffect_Parms, AffectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedObjectType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedObjectType = { "AffectedObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectileObject_eventOnApplyEffect_Parms, AffectedObjectType), METADATA_PARAMS(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedObjectType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_EffectTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::NewProp_AffectedObjectType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileObject_OnApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEffect" },
		{ "Comment", "/**\n\x09 * Called via input to turn look up/down at a given rate.\n\x09 * @param EffectTable\x09This is the data used to determine which effect is taking place\n\x09 * @param AffectedActor\x09This is the actor that is being effected\n\x09 * @param AffectedObjectType\x09This is object type of the effected actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Called via input to turn look up/down at a given rate.\n@param EffectTable   This is the data used to determine which effect is taking place\n@param AffectedActor This is the actor that is being effected\n@param AffectedObjectType    This is object type of the effected actor" },
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
		{ "Comment", "/**\n\x09 * Called when this hits another object.\n\x09 * @param HitComponent\x09This is what component on the projectile has been hit\n\x09 * @param OtherActor\x09This is the actor that the projectile hit\n\x09 * @param OtherComp\x09This is the component on the other actor that the projectile hit\n\x09 * @param NormalImpulse\x09This is the impulse or 'shock' from the hit\n\x09 * @param Hit\x09This is result from the hit\n\x09 */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Called when this hits another object.\n@param HitComponent  This is what component on the projectile has been hit\n@param OtherActor    This is the actor that the projectile hit\n@param OtherComp     This is the component on the other actor that the projectile hit\n@param NormalImpulse This is the impulse or 'shock' from the hit\n@param Hit   This is result from the hit" },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyProjectile_MetaData[];
#endif
		static void NewProp_bDestroyProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectMultipleActors_MetaData[];
#endif
		static void NewProp_bAffectMultipleActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectMultipleActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountOfActorsToAffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmountOfActorsToAffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifespan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifespan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectileObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileObject_OnApplyEffect, "OnApplyEffect" }, // 3461248899
		{ &Z_Construct_UFunction_AProjectileObject_OnHit, "OnHit" }, // 3456157440
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Projectile Object */" },
		{ "IncludePath", "ProjectileObject.h" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Projectile Object" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Sphere mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Sphere mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent = { "ProjectileMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, ProjectileMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileCollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Sphere collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileCollisionComponent = { "ProjectileCollisionComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, ProjectileCollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileCollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Projectile movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "/** Whether or not to destroy the projectile after hitting an object */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Whether or not to destroy the projectile after hitting an object" },
	};
#endif
	void Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile_SetBit(void* Obj)
	{
		((AProjectileObject*)Obj)->bDestroyProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile = { "bDestroyProjectile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectileObject), &Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "/** Whether or not to more than one actor */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Whether or not to more than one actor" },
	};
#endif
	void Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors_SetBit(void* Obj)
	{
		((AProjectileObject*)Obj)->bAffectMultipleActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors = { "bAffectMultipleActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectileObject), &Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmountOfActorsToAffect_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "/** Amount of actors that the projectile is allowed to affect if it able to affect multiple */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Amount of actors that the projectile is allowed to affect if it able to affect multiple" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmountOfActorsToAffect = { "AmountOfActorsToAffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, AmountOfActorsToAffect), METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmountOfActorsToAffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmountOfActorsToAffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "/** Handler for the data that holds the effect */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Handler for the data that holds the effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable = { "EffectDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, EffectDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileLifespan_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "/** Time before the projectile destroys */" },
		{ "ModuleRelativePath", "Public/ProjectileObject.h" },
		{ "ToolTip", "Time before the projectile destroys" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileLifespan = { "ProjectileLifespan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileObject, ProjectileLifespan), METADATA_PARAMS(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileLifespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileLifespan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileCollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_bDestroyProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_bAffectMultipleActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_AmountOfActorsToAffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_EffectDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileObject_Statics::NewProp_ProjectileLifespan,
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
	IMPLEMENT_CLASS(AProjectileObject, 3864607925);
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
