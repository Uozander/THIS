// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scripting/ViewModelScriptingStruct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSequencerViewModelScriptingStruct;
#ifdef SEQUENCERCORE_ViewModelScriptingStruct_generated_h
#error "ViewModelScriptingStruct.generated.h already included, missing '#pragma once' in ViewModelScriptingStruct.h"
#endif
#define SEQUENCERCORE_ViewModelScriptingStruct_generated_h

#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerViewModelScriptingStruct_Statics; \
	SEQUENCERCORE_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERCORE_API UScriptStruct* StaticStruct<struct FSequencerViewModelScriptingStruct>();

#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLabel);


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerViewModelStructExtensions(); \
	friend struct Z_Construct_UClass_USequencerViewModelStructExtensions_Statics; \
public: \
	DECLARE_CLASS(USequencerViewModelStructExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerCore"), NO_API) \
	DECLARE_SERIALIZER(USequencerViewModelStructExtensions)


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerViewModelStructExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USequencerViewModelStructExtensions(USequencerViewModelStructExtensions&&); \
	USequencerViewModelStructExtensions(const USequencerViewModelStructExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerViewModelStructExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerViewModelStructExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerViewModelStructExtensions) \
	NO_API virtual ~USequencerViewModelStructExtensions();


#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_46_PROLOG
#define FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h_51_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERCORE_API UClass* StaticClass<class USequencerViewModelStructExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequencerCore_Public_Scripting_ViewModelScriptingStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
