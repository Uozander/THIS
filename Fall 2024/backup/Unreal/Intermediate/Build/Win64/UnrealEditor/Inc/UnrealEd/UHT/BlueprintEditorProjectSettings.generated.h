// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/BlueprintEditorProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BlueprintEditorProjectSettings_generated_h
#error "BlueprintEditorProjectSettings.generated.h already included, missing '#pragma once' in BlueprintEditorProjectSettings.h"
#endif
#define UNREALED_BlueprintEditorProjectSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UBlueprintEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintEditorProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintEditorProjectSettings(UBlueprintEditorProjectSettings&&); \
	UBlueprintEditorProjectSettings(const UBlueprintEditorProjectSettings&); \
public: \
	UNREALED_API virtual ~UBlueprintEditorProjectSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBlueprintEditorProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
