// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidSDKSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDPLATFORMEDITOR_AndroidSDKSettings_generated_h
#error "AndroidSDKSettings.generated.h already included, missing '#pragma once' in AndroidSDKSettings.h"
#endif
#define ANDROIDPLATFORMEDITOR_AndroidSDKSettings_generated_h

#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidSDKSettings(); \
	friend struct Z_Construct_UClass_UAndroidSDKSettings_Statics; \
public: \
	DECLARE_CLASS(UAndroidSDKSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_GlobalUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidPlatformEditor"), NO_API) \
	DECLARE_SERIALIZER(UAndroidSDKSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidSDKSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidSDKSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidSDKSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidSDKSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAndroidSDKSettings(UAndroidSDKSettings&&); \
	UAndroidSDKSettings(const UAndroidSDKSettings&); \
public: \
	NO_API virtual ~UAndroidSDKSettings();


#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_17_PROLOG
#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_INCLASS \
	FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDPLATFORMEDITOR_API UClass* StaticClass<class UAndroidSDKSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
