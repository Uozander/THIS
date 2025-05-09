// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ExternalActorsCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ExternalActorsCommandlet_generated_h
#error "ExternalActorsCommandlet.generated.h already included, missing '#pragma once' in ExternalActorsCommandlet.h"
#endif
#define UNREALED_ExternalActorsCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUExternalActorsCommandlet(); \
	friend struct Z_Construct_UClass_UExternalActorsCommandlet_Statics; \
public: \
	DECLARE_CLASS(UExternalActorsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UExternalActorsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UExternalActorsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalActorsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UExternalActorsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalActorsCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExternalActorsCommandlet(UExternalActorsCommandlet&&); \
	UExternalActorsCommandlet(const UExternalActorsCommandlet&); \
public: \
	UNREALED_API virtual ~UExternalActorsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UExternalActorsCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExternalActorsCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
