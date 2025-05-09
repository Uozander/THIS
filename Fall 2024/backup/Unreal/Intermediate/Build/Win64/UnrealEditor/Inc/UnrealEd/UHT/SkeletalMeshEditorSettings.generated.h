// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SkeletalMeshEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SkeletalMeshEditorSettings_generated_h
#error "SkeletalMeshEditorSettings.generated.h already included, missing '#pragma once' in SkeletalMeshEditorSettings.h"
#endif
#define UNREALED_SkeletalMeshEditorSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshEditorSettings(); \
	friend struct Z_Construct_UClass_USkeletalMeshEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USkeletalMeshEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USkeletalMeshEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USkeletalMeshEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshEditorSettings(USkeletalMeshEditorSettings&&); \
	USkeletalMeshEditorSettings(const USkeletalMeshEditorSettings&); \
public: \
	UNREALED_API virtual ~USkeletalMeshEditorSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_19_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USkeletalMeshEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_SkeletalMeshEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
