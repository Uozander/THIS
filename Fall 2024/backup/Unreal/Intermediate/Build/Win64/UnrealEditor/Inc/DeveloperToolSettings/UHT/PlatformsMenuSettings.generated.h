// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/PlatformsMenuSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVELOPERTOOLSETTINGS_PlatformsMenuSettings_generated_h
#error "PlatformsMenuSettings.generated.h already included, missing '#pragma once' in PlatformsMenuSettings.h"
#endif
#define DEVELOPERTOOLSETTINGS_PlatformsMenuSettings_generated_h

#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformsMenuSettings(); \
	friend struct Z_Construct_UClass_UPlatformsMenuSettings_Statics; \
public: \
	DECLARE_CLASS(UPlatformsMenuSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeveloperToolSettings"), NO_API) \
	DECLARE_SERIALIZER(UPlatformsMenuSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformsMenuSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformsMenuSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformsMenuSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformsMenuSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlatformsMenuSettings(UPlatformsMenuSettings&&); \
	UPlatformsMenuSettings(const UPlatformsMenuSettings&); \
public: \
	NO_API virtual ~UPlatformsMenuSettings();


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_13_PROLOG
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_17_INCLASS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVELOPERTOOLSETTINGS_API UClass* StaticClass<class UPlatformsMenuSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
