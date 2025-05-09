// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/EditorLoadingSavingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorLoadingSavingSettings_generated_h
#error "EditorLoadingSavingSettings.generated.h already included, missing '#pragma once' in EditorLoadingSavingSettings.h"
#endif
#define UNREALED_EditorLoadingSavingSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FAutoReimportWildcard>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FAutoReimportDirectoryConfig>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLoadingSavingSettings(); \
	friend struct Z_Construct_UClass_UEditorLoadingSavingSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorLoadingSavingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorLoadingSavingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorLoadingSavingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingSavingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorLoadingSavingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingSavingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorLoadingSavingSettings(UEditorLoadingSavingSettings&&); \
	UEditorLoadingSavingSettings(const UEditorLoadingSavingSettings&); \
public: \
	UNREALED_API virtual ~UEditorLoadingSavingSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_94_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorLoadingSavingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h


#define FOREACH_ENUM_ELOADLEVELATSTARTUP(op) \
	op(ELoadLevelAtStartup::None) \
	op(ELoadLevelAtStartup::ProjectDefault) \
	op(ELoadLevelAtStartup::LastOpened) 

namespace ELoadLevelAtStartup { enum Type : int; }
template<> UNREALED_API UEnum* StaticEnum<ELoadLevelAtStartup::Type>();

#define FOREACH_ENUM_EAUTOSAVEMETHOD(op) \
	op(EAutoSaveMethod::BackupAndRestore) \
	op(EAutoSaveMethod::BackupAndOverwrite) 

enum class EAutoSaveMethod : uint8;
template<> struct TIsUEnumClass<EAutoSaveMethod> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EAutoSaveMethod>();

#define FOREACH_ENUM_ERESTOREOPENASSETTABSMETHOD(op) \
	op(ERestoreOpenAssetTabsMethod::AlwaysPrompt) \
	op(ERestoreOpenAssetTabsMethod::AlwaysRestore) \
	op(ERestoreOpenAssetTabsMethod::NeverRestore) 

enum class ERestoreOpenAssetTabsMethod : uint8;
template<> struct TIsUEnumClass<ERestoreOpenAssetTabsMethod> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ERestoreOpenAssetTabsMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
