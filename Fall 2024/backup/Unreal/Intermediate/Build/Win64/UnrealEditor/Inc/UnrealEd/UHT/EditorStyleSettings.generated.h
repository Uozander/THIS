// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/EditorStyleSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorStyleSettings_generated_h
#error "EditorStyleSettings.generated.h already included, missing '#pragma once' in EditorStyleSettings.h"
#endif
#define UNREALED_EditorStyleSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUEditorStyleSettings(); \
	friend struct Z_Construct_UClass_UEditorStyleSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorStyleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorStyleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorStyleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStyleSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorStyleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStyleSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorStyleSettings(UEditorStyleSettings&&); \
	UEditorStyleSettings(const UEditorStyleSettings&); \
public: \
	UNREALED_API virtual ~UEditorStyleSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_35_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_40_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorStyleSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorStyleSettings_h


#define FOREACH_ENUM_EASSETEDITOROPENLOCATION(op) \
	op(EAssetEditorOpenLocation::Default) \
	op(EAssetEditorOpenLocation::NewWindow) \
	op(EAssetEditorOpenLocation::MainWindow) \
	op(EAssetEditorOpenLocation::ContentBrowser) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrNewWindow) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrMainWindow) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser) 

enum class EAssetEditorOpenLocation : uint8;
template<> struct TIsUEnumClass<EAssetEditorOpenLocation> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EAssetEditorOpenLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
