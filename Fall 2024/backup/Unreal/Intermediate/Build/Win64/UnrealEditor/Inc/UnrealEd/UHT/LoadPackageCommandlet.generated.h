// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/LoadPackageCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LoadPackageCommandlet_generated_h
#error "LoadPackageCommandlet.generated.h already included, missing '#pragma once' in LoadPackageCommandlet.h"
#endif
#define UNREALED_LoadPackageCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesULoadPackageCommandlet(); \
	friend struct Z_Construct_UClass_ULoadPackageCommandlet_Statics; \
public: \
	DECLARE_CLASS(ULoadPackageCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULoadPackageCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadPackageCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadPackageCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadPackageCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadPackageCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoadPackageCommandlet(ULoadPackageCommandlet&&); \
	ULoadPackageCommandlet(const ULoadPackageCommandlet&); \
public: \
	NO_API virtual ~ULoadPackageCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULoadPackageCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_LoadPackageCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
