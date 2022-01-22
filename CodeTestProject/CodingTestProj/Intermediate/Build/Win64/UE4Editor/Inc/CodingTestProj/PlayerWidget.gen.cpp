// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodingTestProj/Public/PlayerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWidget() {}
// Cross Module References
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_UPlayerWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CodingTestProj();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	CODINGTESTPROJ_API UClass* Z_Construct_UClass_ACodingTestProjCharacter_NoRegister();
// End Cross Module References
	void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerWidget_NoRegister()
	{
		return UPlayerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CooldownBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CodingTestProj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerWidget.h" },
		{ "ModuleRelativePath", "Public/PlayerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWidget_Statics::NewProp_CooldownBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerWidget" },
		{ "Comment", "//virtual void Tick(float DeltaTime) override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerWidget.h" },
		{ "ToolTip", "virtual void Tick(float DeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_CooldownBar = { "CooldownBar", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerWidget, CooldownBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerWidget_Statics::NewProp_CooldownBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::NewProp_CooldownBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerWidget_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "Comment", "/*/, meta = (BindWidget) */" },
		{ "ModuleRelativePath", "Public/PlayerWidget.h" },
		{ "ToolTip", "/, meta = (BindWidget)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerWidget, Character), Z_Construct_UClass_ACodingTestProjCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerWidget_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_CooldownBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidget_Statics::ClassParams = {
		&UPlayerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerWidget, 1178232329);
	template<> CODINGTESTPROJ_API UClass* StaticClass<UPlayerWidget>()
	{
		return UPlayerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerWidget(Z_Construct_UClass_UPlayerWidget, &UPlayerWidget::StaticClass, TEXT("/Script/CodingTestProj"), TEXT("UPlayerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
