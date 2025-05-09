// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/MakeBinaryConfigCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MakeBinaryConfigCommandlet_generated_h
#error "MakeBinaryConfigCommandlet.generated.h already included, missing '#pragma once' in MakeBinaryConfigCommandlet.h"
#endif
#define UNREALED_MakeBinaryConfigCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMakeBinaryConfigCommandlet(); \
	friend struct Z_Construct_UClass_UMakeBinaryConfigCommandlet_Statics; \
public: \
	DECLARE_CLASS(UMakeBinaryConfigCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMakeBinaryConfigCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMakeBinaryConfigCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMakeBinaryConfigCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMakeBinaryConfigCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMakeBinaryConfigCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMakeBinaryConfigCommandlet(UMakeBinaryConfigCommandlet&&); \
	UMakeBinaryConfigCommandlet(const UMakeBinaryConfigCommandlet&); \
public: \
	NO_API virtual ~UMakeBinaryConfigCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMakeBinaryConfigCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
