// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlatformSettingsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVELOPERSETTINGS_PlatformSettingsManager_generated_h
#error "PlatformSettingsManager.generated.h already included, missing '#pragma once' in PlatformSettingsManager.h"
#endif
#define DEVELOPERSETTINGS_PlatformSettingsManager_generated_h

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics; \
	DEVELOPERSETTINGS_API static class UScriptStruct* StaticStruct();


template<> DEVELOPERSETTINGS_API UScriptStruct* StaticStruct<struct FPlatformSettingsInstances>();

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformSettingsManager(); \
	friend struct Z_Construct_UClass_UPlatformSettingsManager_Statics; \
public: \
	DECLARE_CLASS(UPlatformSettingsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), DEVELOPERSETTINGS_API) \
	DECLARE_SERIALIZER(UPlatformSettingsManager)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlatformSettingsManager(UPlatformSettingsManager&&); \
	UPlatformSettingsManager(const UPlatformSettingsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEVELOPERSETTINGS_API, UPlatformSettingsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformSettingsManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformSettingsManager) \
	DEVELOPERSETTINGS_API virtual ~UPlatformSettingsManager();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_39_PROLOG
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVELOPERSETTINGS_API UClass* StaticClass<class UPlatformSettingsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
