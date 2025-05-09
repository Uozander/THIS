// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetToolsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETTOOLS_AssetToolsSettings_generated_h
#error "AssetToolsSettings.generated.h already included, missing '#pragma once' in AssetToolsSettings.h"
#endif
#define ASSETTOOLS_AssetToolsSettings_generated_h

#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FAdvancedCopyMap>();

#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsSettings(); \
	friend struct Z_Construct_UClass_UAssetToolsSettings_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetToolsSettings(UAssetToolsSettings&&); \
	UAssetToolsSettings(const UAssetToolsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetToolsSettings) \
	NO_API virtual ~UAssetToolsSettings();


#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_27_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetToolsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
