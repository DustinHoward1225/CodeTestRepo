// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodingTestProj/Public/MainHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHud() {}
// Cross Module References
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_AMainHud_NoRegister();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_AMainHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CodingTestProj();
// End Cross Module References
	void AMainHud::StaticRegisterNativesAMainHud()
	{
	}
	UClass* Z_Construct_UClass_AMainHud_NoRegister()
	{
		return AMainHud::StaticClass();
	}
	struct Z_Construct_UClass_AMainHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainHud_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MainHud.h" },
		{ "ModuleRelativePath", "Public/MainHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainHud_Statics::ClassParams = {
		&AMainHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainHud, 1416080535);
	template<> CODINGTESTPROJ_API UClass* StaticClass<AMainHud>()
	{
		return AMainHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainHud(Z_Construct_UClass_AMainHud, &AMainHud::StaticClass, TEXT("/Script/CodingTestProj"), TEXT("AMainHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
