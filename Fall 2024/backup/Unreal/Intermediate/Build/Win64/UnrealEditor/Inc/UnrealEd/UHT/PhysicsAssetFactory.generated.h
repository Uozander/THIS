// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/PhysicsAssetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PhysicsAssetFactory_generated_h
#error "PhysicsAssetFactory.generated.h already included, missing '#pragma once' in PhysicsAssetFactory.h"
#endif
#define UNREALED_PhysicsAssetFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetFactory(); \
	friend struct Z_Construct_UClass_UPhysicsAssetFactory_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UPhysicsAssetFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPhysicsAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicsAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsAssetFactory(UPhysicsAssetFactory&&); \
	UPhysicsAssetFactory(const UPhysicsAssetFactory&); \
public: \
	UNREALED_API virtual ~UPhysicsAssetFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPhysicsAssetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
