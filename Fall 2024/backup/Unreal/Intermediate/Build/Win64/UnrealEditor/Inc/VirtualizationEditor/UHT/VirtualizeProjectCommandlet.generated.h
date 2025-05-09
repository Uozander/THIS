// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualizeProjectCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALIZATIONEDITOR_VirtualizeProjectCommandlet_generated_h
#error "VirtualizeProjectCommandlet.generated.h already included, missing '#pragma once' in VirtualizeProjectCommandlet.h"
#endif
#define VIRTUALIZATIONEDITOR_VirtualizeProjectCommandlet_generated_h

#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualizeProjectCommandlet(); \
	friend struct Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics; \
public: \
	DECLARE_CLASS(UVirtualizeProjectCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VirtualizationEditor"), NO_API) \
	DECLARE_SERIALIZER(UVirtualizeProjectCommandlet)


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualizeProjectCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualizeProjectCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualizeProjectCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualizeProjectCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVirtualizeProjectCommandlet(UVirtualizeProjectCommandlet&&); \
	UVirtualizeProjectCommandlet(const UVirtualizeProjectCommandlet&); \
public: \
	NO_API virtual ~UVirtualizeProjectCommandlet();


#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_18_PROLOG
#define FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_INCLASS \
	FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALIZATIONEDITOR_API UClass* StaticClass<class UVirtualizeProjectCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
