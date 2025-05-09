// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/SummarizeTraceCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SummarizeTraceCommandlet_generated_h
#error "SummarizeTraceCommandlet.generated.h already included, missing '#pragma once' in SummarizeTraceCommandlet.h"
#endif
#define UNREALED_SummarizeTraceCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSummarizeTraceCommandlet(); \
	friend struct Z_Construct_UClass_USummarizeTraceCommandlet_Statics; \
public: \
	DECLARE_CLASS(USummarizeTraceCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(USummarizeTraceCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USummarizeTraceCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USummarizeTraceCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USummarizeTraceCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USummarizeTraceCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USummarizeTraceCommandlet(USummarizeTraceCommandlet&&); \
	USummarizeTraceCommandlet(const USummarizeTraceCommandlet&); \
public: \
	NO_API virtual ~USummarizeTraceCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USummarizeTraceCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SummarizeTraceCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
