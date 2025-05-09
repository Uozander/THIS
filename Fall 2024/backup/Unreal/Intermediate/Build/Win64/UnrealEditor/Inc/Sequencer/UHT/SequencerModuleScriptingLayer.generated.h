// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/SequencerModuleScriptingLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USequencerModuleOutlinerScriptingObject;
#ifdef SEQUENCER_SequencerModuleScriptingLayer_generated_h
#error "SequencerModuleScriptingLayer.generated.h already included, missing '#pragma once' in SequencerModuleScriptingLayer.h"
#endif
#define SEQUENCER_SequencerModuleScriptingLayer_generated_h

#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOutliner);


#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerModuleScriptingLayer(); \
	friend struct Z_Construct_UClass_USequencerModuleScriptingLayer_Statics; \
public: \
	DECLARE_CLASS(USequencerModuleScriptingLayer, USequencerScriptingLayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), SEQUENCER_API) \
	DECLARE_SERIALIZER(USequencerModuleScriptingLayer)


#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCER_API USequencerModuleScriptingLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerModuleScriptingLayer(USequencerModuleScriptingLayer&&); \
	USequencerModuleScriptingLayer(const USequencerModuleScriptingLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCER_API, USequencerModuleScriptingLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerModuleScriptingLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerModuleScriptingLayer) \
	SEQUENCER_API virtual ~USequencerModuleScriptingLayer();


#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_10_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class USequencerModuleScriptingLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_Scripting_SequencerModuleScriptingLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
