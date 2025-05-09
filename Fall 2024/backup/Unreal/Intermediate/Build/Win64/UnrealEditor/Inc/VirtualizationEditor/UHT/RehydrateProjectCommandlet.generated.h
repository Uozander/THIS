// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RehydrateProjectCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALIZATIONEDITOR_RehydrateProjectCommandlet_generated_h
#error "RehydrateProjectCommandlet.generated.h already included, missing '#pragma once' in RehydrateProjectCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_RehydrateProjectCommandlet_generated_h

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURehydrateProjectCommandlet(); \
	friend struct Z_Construct_UClass_URehydrateProjectCommandlet_Statics; \
public: \
	DECLARE_CLASS(URehydrateProjectCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), NO_API) \
	DECLARE_SERIALIZER(URehydrateProjectCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URehydrateProjectCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URehydrateProjectCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URehydrateProjectCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URehydrateProjectCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URehydrateProjectCommandlet(URehydrateProjectCommandlet&&); \
	URehydrateProjectCommandlet(const URehydrateProjectCommandlet&); \
public: \
	NO_API virtual ~URehydrateProjectCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_18_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_24_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALIZATIONEDITOR_API UClass* StaticClass<class URehydrateProjectCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
