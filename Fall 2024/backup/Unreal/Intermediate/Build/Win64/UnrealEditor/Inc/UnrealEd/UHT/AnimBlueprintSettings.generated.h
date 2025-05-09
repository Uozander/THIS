// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AnimBlueprintSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AnimBlueprintSettings_generated_h
#error "AnimBlueprintSettings.generated.h already included, missing '#pragma once' in AnimBlueprintSettings.h"
#endif
#define UNREALED_AnimBlueprintSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBlueprintSettings(); \
	friend struct Z_Construct_UClass_UAnimBlueprintSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimBlueprintSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAnimBlueprintSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimBlueprintSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBlueprintSettings(UAnimBlueprintSettings&&); \
	UAnimBlueprintSettings(const UAnimBlueprintSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimBlueprintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintSettings) \
	UNREALED_API virtual ~UAnimBlueprintSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAnimBlueprintSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_AnimBlueprintSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
