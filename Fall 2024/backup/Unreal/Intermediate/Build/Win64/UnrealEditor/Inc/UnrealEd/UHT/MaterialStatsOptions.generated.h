// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/MaterialStatsOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialStatsOptions_generated_h
#error "MaterialStatsOptions.generated.h already included, missing '#pragma once' in MaterialStatsOptions.h"
#endif
#define UNREALED_MaterialStatsOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialStatsOptions(); \
	friend struct Z_Construct_UClass_UMaterialStatsOptions_Statics; \
public: \
	DECLARE_CLASS(UMaterialStatsOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialStatsOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialStatsOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialStatsOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialStatsOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialStatsOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialStatsOptions(UMaterialStatsOptions&&); \
	UMaterialStatsOptions(const UMaterialStatsOptions&); \
public: \
	UNREALED_API virtual ~UMaterialStatsOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_29_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_32_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialStatsOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h


#define FOREACH_ENUM_EMATERIALSTATSDERIVEDMIOPTION(op) \
	op(EMaterialStatsDerivedMIOption::Ignore) \
	op(EMaterialStatsDerivedMIOption::CompileOnly) \
	op(EMaterialStatsDerivedMIOption::ShowStats) \
	op(EMaterialStatsDerivedMIOption::InvalidOrMax) 

enum class EMaterialStatsDerivedMIOption : uint8;
template<> struct TIsUEnumClass<EMaterialStatsDerivedMIOption> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EMaterialStatsDerivedMIOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
