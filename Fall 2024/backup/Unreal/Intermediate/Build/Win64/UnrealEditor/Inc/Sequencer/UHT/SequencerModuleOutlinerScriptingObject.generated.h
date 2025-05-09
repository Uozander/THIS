// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/SequencerModuleOutlinerScriptingObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneTimeUnit : uint8;
struct FFrameNumber;
struct FSequencerViewModelScriptingStruct;
#ifdef SEQUENCER_SequencerModuleOutlinerScriptingObject_generated_h
#error "SequencerModuleOutlinerScriptingObject.generated.h already included, missing '#pragma once' in SequencerModuleOutlinerScriptingObject.h"
#endif
#define SEQUENCER_SequencerModuleOutlinerScriptingObject_generated_h

#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPreviousKey); \
	DECLARE_FUNCTION(execGetNextKey);


#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerModuleOutlinerScriptingObject(); \
	friend struct Z_Construct_UClass_USequencerModuleOutlinerScriptingObject_Statics; \
public: \
	DECLARE_CLASS(USequencerModuleOutlinerScriptingObject, USequencerOutlinerScriptingObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(USequencerModuleOutlinerScriptingObject)


#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerModuleOutlinerScriptingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerModuleOutlinerScriptingObject(USequencerModuleOutlinerScriptingObject&&); \
	USequencerModuleOutlinerScriptingObject(const USequencerModuleOutlinerScriptingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerModuleOutlinerScriptingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerModuleOutlinerScriptingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerModuleOutlinerScriptingObject) \
	NO_API virtual ~USequencerModuleOutlinerScriptingObject();


#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_15_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class USequencerModuleOutlinerScriptingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_Scripting_SequencerModuleOutlinerScriptingObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
