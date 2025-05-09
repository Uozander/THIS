// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_SoundBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_AssetDefinition_SoundBase_generated_h
#error "AssetDefinition_SoundBase.generated.h already included, missing '#pragma once' in AssetDefinition_SoundBase.h"
#endif
#define AUDIOEDITOR_AssetDefinition_SoundBase_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_SoundBase(); \
	friend struct Z_Construct_UClass_UAssetDefinition_SoundBase_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_SoundBase, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition_SoundBase)


#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_SoundBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_SoundBase(UAssetDefinition_SoundBase&&); \
	UAssetDefinition_SoundBase(const UAssetDefinition_SoundBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_SoundBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_SoundBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_SoundBase) \
	NO_API virtual ~UAssetDefinition_SoundBase();


#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_22_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class UAssetDefinition_SoundBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Public_AssetTypeActions_AssetDefinition_SoundBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
