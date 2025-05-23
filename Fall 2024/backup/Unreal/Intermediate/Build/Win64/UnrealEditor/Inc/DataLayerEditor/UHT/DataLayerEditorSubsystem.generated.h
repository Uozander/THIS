// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLayer/DataLayerEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataLayerAsset;
class UDataLayerInstance;
class UDEPRECATED_DataLayer;
class UExternalDataLayerAsset;
struct FActorDataLayer;
struct FDataLayerCreationParameters;
#ifdef DATALAYEREDITOR_DataLayerEditorSubsystem_generated_h
#error "DataLayerEditorSubsystem.generated.h already included, missing '#pragma once' in DataLayerEditorSubsystem.h"
#endif
#define DATALAYEREDITOR_DataLayerEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATALAYEREDITOR_API UScriptStruct* StaticStruct<struct FDataLayerCreationParameters>();

#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDataLayer); \
	DECLARE_FUNCTION(execRenameDataLayer); \
	DECLARE_FUNCTION(execGetDataLayerFromLabel); \
	DECLARE_FUNCTION(execGetDataLayer); \
	DECLARE_FUNCTION(execToggleDataLayersIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execToggleDataLayerIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayersIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayerIsDynamicallyLoadedInEditor); \
	DECLARE_FUNCTION(execUpdateActorAllViewsVisibility); \
	DECLARE_FUNCTION(execUpdateAllViewVisibility); \
	DECLARE_FUNCTION(execGetAllDataLayers); \
	DECLARE_FUNCTION(execDeleteDataLayer); \
	DECLARE_FUNCTION(execDeleteDataLayers); \
	DECLARE_FUNCTION(execSetParentDataLayer); \
	DECLARE_FUNCTION(execCreateDataLayerInstance); \
	DECLARE_FUNCTION(execGetDataLayerInstances); \
	DECLARE_FUNCTION(execGetDataLayerInstance); \
	DECLARE_FUNCTION(execMakeAllDataLayersVisible); \
	DECLARE_FUNCTION(execToggleDataLayersIsLoadedInEditor); \
	DECLARE_FUNCTION(execToggleDataLayerIsLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayersIsLoadedInEditor); \
	DECLARE_FUNCTION(execSetDataLayerIsLoadedInEditor); \
	DECLARE_FUNCTION(execToggleDataLayersVisibility); \
	DECLARE_FUNCTION(execToggleDataLayerVisibility); \
	DECLARE_FUNCTION(execSetDataLayersVisibility); \
	DECLARE_FUNCTION(execSetDataLayerVisibility); \
	DECLARE_FUNCTION(execGetActorsFromDataLayers); \
	DECLARE_FUNCTION(execGetActorsFromDataLayer); \
	DECLARE_FUNCTION(execAppendActorsFromDataLayers); \
	DECLARE_FUNCTION(execAppendActorsFromDataLayer); \
	DECLARE_FUNCTION(execUpdateAllActorsVisibility); \
	DECLARE_FUNCTION(execUpdateActorVisibility); \
	DECLARE_FUNCTION(execSelectActorsInDataLayers); \
	DECLARE_FUNCTION(execSelectActorsInDataLayer); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromDataLayers); \
	DECLARE_FUNCTION(execRemoveSelectedActorsFromDataLayer); \
	DECLARE_FUNCTION(execAddSelectedActorsToDataLayers); \
	DECLARE_FUNCTION(execAddSelectedActorsToDataLayer); \
	DECLARE_FUNCTION(execRemoveActorsFromDataLayers); \
	DECLARE_FUNCTION(execRemoveActorsFromDataLayer); \
	DECLARE_FUNCTION(execAddActorsToDataLayers); \
	DECLARE_FUNCTION(execAddActorsToDataLayer); \
	DECLARE_FUNCTION(execRemoveActorsFromAllDataLayers); \
	DECLARE_FUNCTION(execRemoveActorFromAllDataLayers); \
	DECLARE_FUNCTION(execRemoveActorFromDataLayers); \
	DECLARE_FUNCTION(execRemoveActorFromDataLayer); \
	DECLARE_FUNCTION(execAddActorToDataLayers); \
	DECLARE_FUNCTION(execAddActorToDataLayer); \
	DECLARE_FUNCTION(execIsActorValidForDataLayerInstances); \
	DECLARE_FUNCTION(execIsActorValidForDataLayer); \
	DECLARE_FUNCTION(execGetActorEditorContextCurrentExternalDataLayer); \
	DECLARE_FUNCTION(execSetActorEditorContextCurrentExternalDataLayer); \
	DECLARE_FUNCTION(execRemoveFromActorEditorContext); \
	DECLARE_FUNCTION(execAddToActorEditorContext);


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerEditorSubsystem(); \
	friend struct Z_Construct_UClass_UDataLayerEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataLayerEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLayerEditor"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerEditorSubsystem)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataLayerEditorSubsystem(UDataLayerEditorSubsystem&&); \
	UDataLayerEditorSubsystem(const UDataLayerEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLayerEditorSubsystem)


#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_70_PROLOG
#define FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATALAYEREDITOR_API UClass* StaticClass<class UDataLayerEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
