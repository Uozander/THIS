// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/CurveEdOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CurveEdOptions_generated_h
#error "CurveEdOptions.generated.h already included, missing '#pragma once' in CurveEdOptions.h"
#endif
#define UNREALED_CurveEdOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCurveEdOptions(); \
	friend struct Z_Construct_UClass_UCurveEdOptions_Statics; \
public: \
	DECLARE_CLASS(UCurveEdOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCurveEdOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCurveEdOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEdOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCurveEdOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEdOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveEdOptions(UCurveEdOptions&&); \
	UCurveEdOptions(const UCurveEdOptions&); \
public: \
	UNREALED_API virtual ~UCurveEdOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCurveEdOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
