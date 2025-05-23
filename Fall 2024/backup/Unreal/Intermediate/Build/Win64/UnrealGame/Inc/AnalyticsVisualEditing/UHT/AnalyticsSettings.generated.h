// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnalyticsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANALYTICSVISUALEDITING_AnalyticsSettings_generated_h
#error "AnalyticsSettings.generated.h already included, missing '#pragma once' in AnalyticsSettings.h"
#endif
#define ANALYTICSVISUALEDITING_AnalyticsSettings_generated_h

#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsSettingsBase(); \
	friend struct Z_Construct_UClass_UAnalyticsSettingsBase_Statics; \
public: \
	DECLARE_CLASS(UAnalyticsSettingsBase, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnalyticsVisualEditing"), NO_API) \
	DECLARE_SERIALIZER(UAnalyticsSettingsBase)


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsSettingsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsSettingsBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnalyticsSettingsBase(UAnalyticsSettingsBase&&); \
	UAnalyticsSettingsBase(const UAnalyticsSettingsBase&); \
public: \
	NO_API virtual ~UAnalyticsSettingsBase();


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_14_PROLOG
#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_INCLASS \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANALYTICSVISUALEDITING_API UClass* StaticClass<class UAnalyticsSettingsBase>();

#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUAnalyticsSettings(); \
	friend struct Z_Construct_UClass_UAnalyticsSettings_Statics; \
public: \
	DECLARE_CLASS(UAnalyticsSettings, UAnalyticsSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnalyticsVisualEditing"), NO_API) \
	DECLARE_SERIALIZER(UAnalyticsSettings)


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnalyticsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalyticsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnalyticsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalyticsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnalyticsSettings(UAnalyticsSettings&&); \
	UAnalyticsSettings(const UAnalyticsSettings&); \
public: \
	NO_API virtual ~UAnalyticsSettings();


#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_85_PROLOG
#define FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_INCLASS \
	FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANALYTICSVISUALEDITING_API UClass* StaticClass<class UAnalyticsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
