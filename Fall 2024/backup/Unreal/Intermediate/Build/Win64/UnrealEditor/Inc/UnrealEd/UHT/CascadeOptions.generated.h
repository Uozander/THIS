// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/CascadeOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CascadeOptions_generated_h
#error "CascadeOptions.generated.h already included, missing '#pragma once' in CascadeOptions.h"
#endif
#define UNREALED_CascadeOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCascadeOptions(); \
	friend struct Z_Construct_UClass_UCascadeOptions_Statics; \
public: \
	DECLARE_CLASS(UCascadeOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCascadeOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCascadeOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCascadeOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCascadeOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCascadeOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCascadeOptions(UCascadeOptions&&); \
	UCascadeOptions(const UCascadeOptions&); \
public: \
	UNREALED_API virtual ~UCascadeOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCascadeOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CascadeOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
