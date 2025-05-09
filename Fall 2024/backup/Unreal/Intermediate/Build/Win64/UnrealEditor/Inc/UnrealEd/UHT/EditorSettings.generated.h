// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/EditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorSettings_generated_h
#error "EditorSettings.generated.h already included, missing '#pragma once' in EditorSettings.h"
#endif
#define UNREALED_EditorSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecentProjectFile_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FRecentProjectFile>();

#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUEditorSettings(); \
	friend struct Z_Construct_UClass_UEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorSettings(UEditorSettings&&); \
	UEditorSettings(const UEditorSettings&); \
public: \
	UNREALED_API virtual ~UEditorSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_55_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_58_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Settings_EditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
