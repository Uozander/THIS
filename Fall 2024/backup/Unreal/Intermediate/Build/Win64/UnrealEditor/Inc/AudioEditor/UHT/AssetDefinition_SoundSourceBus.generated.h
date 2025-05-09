// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_SoundSourceBus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_AssetDefinition_SoundSourceBus_generated_h
#error "AssetDefinition_SoundSourceBus.generated.h already included, missing '#pragma once' in AssetDefinition_SoundSourceBus.h"
#endif
#define AUDIOEDITOR_AssetDefinition_SoundSourceBus_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_SoundSourceBus(); \
	friend struct Z_Construct_UClass_UAssetDefinition_SoundSourceBus_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_SoundSourceBus, UAssetDefinition_SoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition_SoundSourceBus)


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_SoundSourceBus(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_SoundSourceBus(UAssetDefinition_SoundSourceBus&&); \
	UAssetDefinition_SoundSourceBus(const UAssetDefinition_SoundSourceBus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_SoundSourceBus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_SoundSourceBus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_SoundSourceBus) \
	NO_API virtual ~UAssetDefinition_SoundSourceBus();


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h_11_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class UAssetDefinition_SoundSourceBus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundSourceBus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
