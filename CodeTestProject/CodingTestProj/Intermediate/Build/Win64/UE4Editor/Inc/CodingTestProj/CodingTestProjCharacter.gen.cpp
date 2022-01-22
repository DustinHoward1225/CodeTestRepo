// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodingTestProj/CodingTestProjCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodingTestProjCharacter() {}
// Cross Module References
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_ACodingTestProjCharacter_NoRegister();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_ACodingTestProjCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CodingTestProj();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACodingTestProjCharacter::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACodingTestProjCharacter::execFlailAround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlailAround();
		P_NATIVE_END;
	}
	static FName NAME_ACodingTestProjCharacter_FlailAroundBP = FName(TEXT("FlailAroundBP"));
	void ACodingTestProjCharacter::FlailAroundBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACodingTestProjCharacter_FlailAroundBP),NULL);
	}
	static FName NAME_ACodingTestProjCharacter_FlailAroundBPFortimer = FName(TEXT("FlailAroundBPFortimer"));
	void ACodingTestProjCharacter::FlailAroundBPFortimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACodingTestProjCharacter_FlailAroundBPFortimer),NULL);
	}
	void ACodingTestProjCharacter::StaticRegisterNativesACodingTestProjCharacter()
	{
		UClass* Class = ACodingTestProjCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlailAround", &ACodingTestProjCharacter::execFlailAround },
			{ "SpawnProjectile", &ACodingTestProjCharacter::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround_Statics::Function_MetaDataParams[] = {
		{ "Category", "Other Functionality" },
		{ "Comment", "/** Executes Flailing Animation Montage */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Executes Flailing Animation Montage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestProjCharacter, nullptr, "FlailAround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Other Functionality" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestProjCharacter, nullptr, "FlailAroundBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Other Functionality" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestProjCharacter, nullptr, "FlailAroundBPFortimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Other Functionality" },
		{ "Comment", "/** As it's able to be called from blueprint, this handles bringing the projectile in the game. */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "As it's able to be called from blueprint, this handles bringing the projectile in the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestProjCharacter, nullptr, "SpawnProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACodingTestProjCharacter_NoRegister()
	{
		return ACodingTestProjCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACodingTestProjCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AProjectileObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AProjectileObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectileCooldown_MetaData[];
#endif
		static void NewProp_bProjectileCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectileCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingTestProjCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACodingTestProjCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACodingTestProjCharacter_FlailAround, "FlailAround" }, // 2956813495
		{ &Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBP, "FlailAroundBP" }, // 992334622
		{ &Z_Construct_UFunction_ACodingTestProjCharacter_FlailAroundBPFortimer, "FlailAroundBPFortimer" }, // 195543930
		{ &Z_Construct_UFunction_ACodingTestProjCharacter_SpawnProjectile, "SpawnProjectile" }, // 3072377344
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Coding Test Proj Character */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CodingTestProjCharacter.h" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Coding Test Proj Character" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_ProjectileSpawnPlace_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CodingTestProjCharacter" },
		{ "Comment", "/** Place to spawn projectile */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Place to spawn projectile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_ProjectileSpawnPlace = { "ProjectileSpawnPlace", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, ProjectileSpawnPlace), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_ProjectileSpawnPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_ProjectileSpawnPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_AProjectileObj_MetaData[] = {
		{ "Category", "Projectile Spawn" },
		{ "Comment", "/** Handles object or actor of the projectile */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Handles object or actor of the projectile" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_AProjectileObj = { "AProjectileObj", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, AProjectileObj), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_AProjectileObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_AProjectileObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_SpawnAnimation_MetaData[] = {
		{ "Category", "Projectile Spawn" },
		{ "Comment", "/** Animation Montage to play when Flailing */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Animation Montage to play when Flailing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_SpawnAnimation = { "SpawnAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, SpawnAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_SpawnAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_SpawnAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownMax_MetaData[] = {
		{ "Category", "Projectile Spawn" },
		{ "Comment", "/** Maximum amount of time for cooldown */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Maximum amount of time for cooldown" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownMax = { "CooldownMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, CooldownMax), METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownLength_MetaData[] = {
		{ "Category", "Projectile Spawn" },
		{ "Comment", "/** Amount of time it has left durning cooldown */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Amount of time it has left durning cooldown" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownLength = { "CooldownLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestProjCharacter, CooldownLength), METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown_MetaData[] = {
		{ "Category", "Projectile Spawn" },
		{ "Comment", "/** Handler for when fire the projectile during cooldown */" },
		{ "ModuleRelativePath", "CodingTestProjCharacter.h" },
		{ "ToolTip", "Handler for when fire the projectile during cooldown" },
	};
#endif
	void Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown_SetBit(void* Obj)
	{
		((ACodingTestProjCharacter*)Obj)->bProjectileCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown = { "bProjectileCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACodingTestProjCharacter), &Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodingTestProjCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_ProjectileSpawnPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_AProjectileObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_SpawnAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_CooldownLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestProjCharacter_Statics::NewProp_bProjectileCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingTestProjCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingTestProjCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodingTestProjCharacter_Statics::ClassParams = {
		&ACodingTestProjCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACodingTestProjCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACodingTestProjCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestProjCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodingTestProjCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodingTestProjCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodingTestProjCharacter, 981370093);
	template<> CODINGTESTPROJ_API UClass* StaticClass<ACodingTestProjCharacter>()
	{
		return ACodingTestProjCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodingTestProjCharacter(Z_Construct_UClass_ACodingTestProjCharacter, &ACodingTestProjCharacter::StaticClass, TEXT("/Script/CodingTestProj"), TEXT("ACodingTestProjCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodingTestProjCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
