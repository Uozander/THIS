// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/UnrealPakCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealPakCommandlet_generated_h
#error "UnrealPakCommandlet.generated.h already included, missing '#pragma once' in UnrealPakCommandlet.h"
#endif
#define UNREALED_UnrealPakCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealPakCommandlet(); \
	friend struct Z_Construct_UClass_UUnrealPakCommandlet_Statics; \
public: \
	DECLARE_CLASS(UUnrealPakCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealPakCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealPakCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealPakCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealPakCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealPakCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnrealPakCommandlet(UUnrealPakCommandlet&&); \
	UUnrealPakCommandlet(const UUnrealPakCommandlet&); \
public: \
	NO_API virtual ~UUnrealPakCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUnrealPakCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_UnrealPakCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
