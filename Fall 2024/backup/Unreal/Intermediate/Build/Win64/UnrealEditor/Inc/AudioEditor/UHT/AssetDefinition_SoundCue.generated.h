// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTypeActions/AssetDefinition_SoundCue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_AssetDefinition_SoundCue_generated_h
#error "AssetDefinition_SoundCue.generated.h already included, missing '#pragma once' in AssetDefinition_SoundCue.h"
#endif
#define AUDIOEDITOR_AssetDefinition_SoundCue_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_SoundCue(); \
	friend struct Z_Construct_UClass_UAssetDefinition_SoundCue_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_SoundCue, UAssetDefinition_SoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition_SoundCue)


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_SoundCue(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_SoundCue(UAssetDefinition_SoundCue&&); \
	UAssetDefinition_SoundCue(const UAssetDefinition_SoundCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_SoundCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_SoundCue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_SoundCue) \
	NO_API virtual ~UAssetDefinition_SoundCue();


#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_11_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class UAssetDefinition_SoundCue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
