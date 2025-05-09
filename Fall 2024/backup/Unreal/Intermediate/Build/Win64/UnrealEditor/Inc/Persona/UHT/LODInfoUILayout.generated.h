// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LODInfoUILayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONA_LODInfoUILayout_generated_h
#error "LODInfoUILayout.generated.h already included, missing '#pragma once' in LODInfoUILayout.h"
#endif
#define PERSONA_LODInfoUILayout_generated_h

#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULODInfoUILayout(); \
	friend struct Z_Construct_UClass_ULODInfoUILayout_Statics; \
public: \
	DECLARE_CLASS(ULODInfoUILayout, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), PERSONA_API) \
	DECLARE_SERIALIZER(ULODInfoUILayout)


#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API ULODInfoUILayout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODInfoUILayout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, ULODInfoUILayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODInfoUILayout); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULODInfoUILayout(ULODInfoUILayout&&); \
	ULODInfoUILayout(const ULODInfoUILayout&); \
public: \
	PERSONA_API virtual ~ULODInfoUILayout();


#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_17_PROLOG
#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_INCLASS \
	FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONA_API UClass* StaticClass<class ULODInfoUILayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
