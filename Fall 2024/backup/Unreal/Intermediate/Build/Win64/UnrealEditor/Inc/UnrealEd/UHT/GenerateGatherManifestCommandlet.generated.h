// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GenerateGatherManifestCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_GenerateGatherManifestCommandlet_generated_h
#error "GenerateGatherManifestCommandlet.generated.h already included, missing '#pragma once' in GenerateGatherManifestCommandlet.h"
#endif
#define UNREALED_GenerateGatherManifestCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGenerateGatherManifestCommandlet(); \
	friend struct Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics; \
public: \
	DECLARE_CLASS(UGenerateGatherManifestCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UGenerateGatherManifestCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenerateGatherManifestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenerateGatherManifestCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenerateGatherManifestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenerateGatherManifestCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenerateGatherManifestCommandlet(UGenerateGatherManifestCommandlet&&); \
	UGenerateGatherManifestCommandlet(const UGenerateGatherManifestCommandlet&); \
public: \
	NO_API virtual ~UGenerateGatherManifestCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UGenerateGatherManifestCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherManifestCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
