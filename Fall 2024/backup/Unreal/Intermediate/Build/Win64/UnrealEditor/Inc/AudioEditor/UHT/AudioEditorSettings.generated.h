// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEDITOR_AudioEditorSettings_generated_h
#error "AudioEditorSettings.generated.h already included, missing '#pragma once' in AudioEditorSettings.h"
#endif
#define AUDIOEDITOR_AudioEditorSettings_generated_h

#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEditorSettings(); \
	friend struct Z_Construct_UClass_UAudioEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioEditor"), NO_API) \
	DECLARE_SERIALIZER(UAudioEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioEditorSettings(UAudioEditorSettings&&); \
	UAudioEditorSettings(const UAudioEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEditorSettings) \
	NO_API virtual ~UAudioEditorSettings();


#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_16_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEDITOR_API UClass* StaticClass<class UAudioEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
