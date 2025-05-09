// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/OutlinerScriptingObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSequencerViewModelScriptingStruct;
#ifdef SEQUENCERCORE_OutlinerScriptingObject_generated_h
#error "OutlinerScriptingObject.generated.h already included, missing '#pragma once' in OutlinerScriptingObject.h"
#endif
#define SEQUENCERCORE_OutlinerScriptingObject_generated_h

#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_16_DELEGATE \
SEQUENCERCORE_API void FSequencerOutlinerSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& SequencerOutlinerSelectionChanged);


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execGetSelection); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetRootNode);


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerOutlinerScriptingObject(); \
	friend struct Z_Construct_UClass_USequencerOutlinerScriptingObject_Statics; \
public: \
	DECLARE_CLASS(USequencerOutlinerScriptingObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerCore"), SEQUENCERCORE_API) \
	DECLARE_SERIALIZER(USequencerOutlinerScriptingObject)


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SEQUENCERCORE_API USequencerOutlinerScriptingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerOutlinerScriptingObject(USequencerOutlinerScriptingObject&&); \
	USequencerOutlinerScriptingObject(const USequencerOutlinerScriptingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SEQUENCERCORE_API, USequencerOutlinerScriptingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerOutlinerScriptingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerOutlinerScriptingObject) \
	SEQUENCERCORE_API virtual ~USequencerOutlinerScriptingObject();


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_18_PROLOG
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h_23_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERCORE_API UClass* StaticClass<class USequencerOutlinerScriptingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequencerCore_Public_Scripting_OutlinerScriptingObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
