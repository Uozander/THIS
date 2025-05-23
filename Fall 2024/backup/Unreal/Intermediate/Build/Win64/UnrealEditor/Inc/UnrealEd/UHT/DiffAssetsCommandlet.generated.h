// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DiffAssetsCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DiffAssetsCommandlet_generated_h
#error "DiffAssetsCommandlet.generated.h already included, missing '#pragma once' in DiffAssetsCommandlet.h"
#endif
#define UNREALED_DiffAssetsCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDiffAssetsCommandlet(); \
	friend struct Z_Construct_UClass_UDiffAssetsCommandlet_Statics; \
public: \
	DECLARE_CLASS(UDiffAssetsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UDiffAssetsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiffAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiffAssetsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiffAssetsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiffAssetsCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDiffAssetsCommandlet(UDiffAssetsCommandlet&&); \
	UDiffAssetsCommandlet(const UDiffAssetsCommandlet&); \
public: \
	NO_API virtual ~UDiffAssetsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDiffAssetsCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
