// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/EditorMiscSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorMiscSettings_generated_h
#error "EditorMiscSettings.generated.h already included, missing '#pragma once' in EditorMiscSettings.h"
#endif
#define UNREALED_EditorMiscSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEditorMiscSettings(); \
	friend struct Z_Construct_UClass_UEditorMiscSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorMiscSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorMiscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorMiscSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorMiscSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorMiscSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorMiscSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorMiscSettings(UEditorMiscSettings&&); \
	UEditorMiscSettings(const UEditorMiscSettings&); \
public: \
	UNREALED_API virtual ~UEditorMiscSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorMiscSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
