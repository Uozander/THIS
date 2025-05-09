// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/EditorExperimentalSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorExperimentalSettings_generated_h
#error "EditorExperimentalSettings.generated.h already included, missing '#pragma once' in EditorExperimentalSettings.h"
#endif
#define UNREALED_EditorExperimentalSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEditorExperimentalSettings(); \
	friend struct Z_Construct_UClass_UEditorExperimentalSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorExperimentalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorExperimentalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorExperimentalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorExperimentalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorExperimentalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorExperimentalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorExperimentalSettings(UEditorExperimentalSettings&&); \
	UEditorExperimentalSettings(const UEditorExperimentalSettings&); \
public: \
	UNREALED_API virtual ~UEditorExperimentalSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorExperimentalSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorExperimentalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
