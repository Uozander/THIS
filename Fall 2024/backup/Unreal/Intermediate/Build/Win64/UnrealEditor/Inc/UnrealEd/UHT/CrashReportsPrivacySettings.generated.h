// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Analytics/CrashReportsPrivacySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CrashReportsPrivacySettings_generated_h
#error "CrashReportsPrivacySettings.generated.h already included, missing '#pragma once' in CrashReportsPrivacySettings.h"
#endif
#define UNREALED_CrashReportsPrivacySettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCrashReportsPrivacySettings(); \
	friend struct Z_Construct_UClass_UCrashReportsPrivacySettings_Statics; \
public: \
	DECLARE_CLASS(UCrashReportsPrivacySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCrashReportsPrivacySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UCrashReportsPrivacySettings*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCrashReportsPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrashReportsPrivacySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCrashReportsPrivacySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashReportsPrivacySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCrashReportsPrivacySettings(UCrashReportsPrivacySettings&&); \
	UCrashReportsPrivacySettings(const UCrashReportsPrivacySettings&); \
public: \
	UNREALED_API virtual ~UCrashReportsPrivacySettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCrashReportsPrivacySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Analytics_CrashReportsPrivacySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
