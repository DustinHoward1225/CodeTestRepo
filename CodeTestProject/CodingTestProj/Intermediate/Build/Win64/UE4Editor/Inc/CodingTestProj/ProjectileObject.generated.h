// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
class UDataTable;
#ifdef CODINGTESTPROJ_ProjectileObject_generated_h
#error "ProjectileObject.generated.h already included, missing '#pragma once' in ProjectileObject.h"
#endif
#define CODINGTESTPROJ_ProjectileObject_generated_h

#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileEffect_Statics; \
	CODINGTESTPROJ_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> CODINGTESTPROJ_API UScriptStruct* StaticStruct<struct FProjectileEffect>();

#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_SPARSE_DATA
#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_EVENT_PARMS \
	struct ProjectileObject_eventOnApplyEffect_Parms \
	{ \
		UDataTable* EffectTable; \
		AActor* AffectedActor; \
		FString AffectedObjectType; \
	};


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_CALLBACK_WRAPPERS
#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileObject(); \
	friend struct Z_Construct_UClass_AProjectileObject_Statics; \
public: \
	DECLARE_CLASS(AProjectileObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodingTestProj"), NO_API) \
	DECLARE_SERIALIZER(AProjectileObject)


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileObject(); \
	friend struct Z_Construct_UClass_AProjectileObject_Statics; \
public: \
	DECLARE_CLASS(AProjectileObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodingTestProj"), NO_API) \
	DECLARE_SERIALIZER(AProjectileObject)


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileObject(AProjectileObject&&); \
	NO_API AProjectileObject(const AProjectileObject&); \
public:


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileObject(AProjectileObject&&); \
	NO_API AProjectileObject(const AProjectileObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileObject)


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_PRIVATE_PROPERTY_OFFSET
#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_31_PROLOG \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_EVENT_PARMS


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_PRIVATE_PROPERTY_OFFSET \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_SPARSE_DATA \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_RPC_WRAPPERS \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_CALLBACK_WRAPPERS \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_INCLASS \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_PRIVATE_PROPERTY_OFFSET \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_SPARSE_DATA \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_CALLBACK_WRAPPERS \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_INCLASS_NO_PURE_DECLS \
	CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODINGTESTPROJ_API UClass* StaticClass<class AProjectileObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CodingTestProj_Source_CodingTestProj_Public_ProjectileObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
