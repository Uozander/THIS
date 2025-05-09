// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/SequencerScriptingLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCERCORE_SequencerScriptingLayer_generated_h
#error "SequencerScriptingLayer.generated.h already included, missing '#pragma once' in SequencerScriptingLayer.h"
#endif
#define SEQUENCERCORE_SequencerScriptingLayer_generated_h

#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerScriptingLayer(); \
	friend struct Z_Construct_UClass_USequencerScriptingLayer_Statics; \
public: \
	DECLARE_CLASS(USequencerScriptingLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerCore"), SEQUENCERCORE_API) \
	DECLARE_SERIALIZER(USequencerScriptingLayer)


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERCORE_API USequencerScriptingLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerScriptingLayer(USequencerScriptingLayer&&); \
	USequencerScriptingLayer(const USequencerScriptingLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERCORE_API, USequencerScriptingLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerScriptingLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerScriptingLayer) \
	SEQUENCERCORE_API virtual ~USequencerScriptingLayer();


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h_17_PROLOG
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERCORE_API UClass* StaticClass<class USequencerScriptingLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequencerCore_Public_Scripting_SequencerScriptingLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
