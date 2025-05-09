// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CascadeConfiguration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CASCADE_CascadeConfiguration_generated_h
#error "CascadeConfiguration.generated.h already included, missing '#pragma once' in CascadeConfiguration.h"
#endif
#define CASCADE_CascadeConfiguration_generated_h

#define FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModuleMenuMapper_Statics; \
	CASCADE_API static class UScriptStruct* StaticStruct();


template<> CASCADE_API UScriptStruct* StaticStruct<struct FModuleMenuMapper>();

#define FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUCascadeConfiguration(); \
	friend struct Z_Construct_UClass_UCascadeConfiguration_Statics; \
public: \
	DECLARE_CLASS(UCascadeConfiguration, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cascade"), NO_API) \
	DECLARE_SERIALIZER(UCascadeConfiguration) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCascadeConfiguration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCascadeConfiguration) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCascadeConfiguration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCascadeConfiguration); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCascadeConfiguration(UCascadeConfiguration&&); \
	UCascadeConfiguration(const UCascadeConfiguration&); \
public: \
	NO_API virtual ~UCascadeConfiguration();


#define FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_30_PROLOG
#define FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_33_INCLASS \
	FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CASCADE_API UClass* StaticClass<class UCascadeConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Cascade_Classes_CascadeConfiguration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
