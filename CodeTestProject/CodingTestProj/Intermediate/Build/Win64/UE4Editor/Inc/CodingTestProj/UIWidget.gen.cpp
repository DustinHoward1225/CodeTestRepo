// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodingTestProj/Public/UIWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWidget() {}
// Cross Module References
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_UUIWidget_NoRegister();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_UUIWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CodingTestProj();
// End Cross Module References
	void UUIWidget::StaticRegisterNativesUUIWidget()
	{
	}
	UClass* Z_Construct_UClass_UUIWidget_NoRegister()
	{
		return UUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UIWidget.h" },
		{ "ModuleRelativePath", "Public/UIWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIWidget_Statics::ClassParams = {
		&UUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIWidget, 436723004);
	template<> CODINGTESTPROJ_API UClass* StaticClass<UUIWidget>()
	{
		return UUIWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIWidget(Z_Construct_UClass_UUIWidget, &UUIWidget::StaticClass, TEXT("/Script/CodingTestProj"), TEXT("UUIWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
