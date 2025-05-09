// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerSettings_generated_h
#error "SequencerSettings.generated.h already included, missing '#pragma once' in SequencerSettings.h"
#endif
#define SEQUENCER_SequencerSettings_generated_h

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerSettingsContainer(); \
	friend struct Z_Construct_UClass_USequencerSettingsContainer_Statics; \
public: \
	DECLARE_CLASS(USequencerSettingsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerSettingsContainer)


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerSettingsContainer(USequencerSettingsContainer&&); \
	USequencerSettingsContainer(const USequencerSettingsContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettingsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettingsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettingsContainer) \
	NO_API virtual ~USequencerSettingsContainer();


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_57_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_62_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class USequencerSettingsContainer>();

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColumnVisibilitySetting_Statics; \
	SEQUENCER_API static class UScriptStruct* StaticStruct();


template<> SEQUENCER_API UScriptStruct* StaticStruct<struct FColumnVisibilitySetting>();

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUSequencerSettings(); \
	friend struct Z_Construct_UClass_USequencerSettings_Statics; \
public: \
	DECLARE_CLASS(USequencerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerSettings(USequencerSettings&&); \
	USequencerSettings(const USequencerSettings&); \
public: \
	NO_API virtual ~USequencerSettings();


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_117_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_122_INCLASS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class USequencerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h


#define FOREACH_ENUM_ESEQUENCERSPAWNPOSITION(op) \
	op(SSP_Origin) \
	op(SSP_PlaceInFrontOfCamera) 

enum ESequencerSpawnPosition : int;
template<> SEQUENCER_API UEnum* StaticEnum<ESequencerSpawnPosition>();

#define FOREACH_ENUM_ESEQUENCERZOOMPOSITION(op) \
	op(SZP_CurrentTime) \
	op(SZP_MousePosition) 

enum ESequencerZoomPosition : int;
template<> SEQUENCER_API UEnum* StaticEnum<ESequencerZoomPosition>();

#define FOREACH_ENUM_ESEQUENCERLOOPMODE(op) \
	op(SLM_NoLoop) \
	op(SLM_Loop) \
	op(SLM_LoopSelectionRange) 

enum ESequencerLoopMode : int;
template<> SEQUENCER_API UEnum* StaticEnum<ESequencerLoopMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
