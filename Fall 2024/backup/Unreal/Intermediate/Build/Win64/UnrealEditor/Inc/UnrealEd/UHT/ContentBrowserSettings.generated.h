// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ContentBrowserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ContentBrowserSettings_generated_h
#error "ContentBrowserSettings.generated.h already included, missing '#pragma once' in ContentBrowserSettings.h"
#endif
#define UNREALED_ContentBrowserSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserSettings(); \
	friend struct Z_Construct_UClass_UContentBrowserSettings_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UContentBrowserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UContentBrowserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentBrowserSettings(UContentBrowserSettings&&); \
	UContentBrowserSettings(const UContentBrowserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UContentBrowserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserSettings) \
	UNREALED_API virtual ~UContentBrowserSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UContentBrowserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
