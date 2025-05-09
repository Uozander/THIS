// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/DataAssetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DataAssetFactory_generated_h
#error "DataAssetFactory.generated.h already included, missing '#pragma once' in DataAssetFactory.h"
#endif
#define UNREALED_DataAssetFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDataAssetFactory(); \
	friend struct Z_Construct_UClass_UDataAssetFactory_Statics; \
public: \
	DECLARE_CLASS(UDataAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDataAssetFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDataAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDataAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAssetFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataAssetFactory(UDataAssetFactory&&); \
	UDataAssetFactory(const UDataAssetFactory&); \
public: \
	UNREALED_API virtual ~UDataAssetFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDataAssetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_DataAssetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
