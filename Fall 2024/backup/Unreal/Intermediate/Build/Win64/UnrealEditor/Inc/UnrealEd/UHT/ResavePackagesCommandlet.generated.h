// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ResavePackagesCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ResavePackagesCommandlet_generated_h
#error "ResavePackagesCommandlet.generated.h already included, missing '#pragma once' in ResavePackagesCommandlet.h"
#endif
#define UNREALED_ResavePackagesCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUResavePackagesCommandlet(); \
	friend struct Z_Construct_UClass_UResavePackagesCommandlet_Statics; \
public: \
	DECLARE_CLASS(UResavePackagesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UResavePackagesCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UResavePackagesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResavePackagesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UResavePackagesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResavePackagesCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UResavePackagesCommandlet(UResavePackagesCommandlet&&); \
	UResavePackagesCommandlet(const UResavePackagesCommandlet&); \
public: \
	UNREALED_API virtual ~UResavePackagesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UResavePackagesCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
