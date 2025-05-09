// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsyncEditorDelay;
class UAsyncEditorOpenMapAndFocusActor;
class UAsyncEditorWaitForGameWorld;
class UObject;
class UWidgetBlueprint;
class UWorld;
struct FAssetData;
struct FContentBrowserItemPath;
struct FSoftObjectPath;
#ifdef BLUTILITY_EditorUtilityLibrary_generated_h
#error "EditorUtilityLibrary.generated.h already included, missing '#pragma once' in EditorUtilityLibrary.h"
#endif
#define BLUTILITY_EditorUtilityLibrary_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprintAsyncActionBase(); \
	friend struct Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityBlueprintAsyncActionBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprintAsyncActionBase)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprintAsyncActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityBlueprintAsyncActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprintAsyncActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilityBlueprintAsyncActionBase(UEditorUtilityBlueprintAsyncActionBase&&); \
	UEditorUtilityBlueprintAsyncActionBase(const UEditorUtilityBlueprintAsyncActionBase&); \
public: \
	NO_API virtual ~UEditorUtilityBlueprintAsyncActionBase();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_29_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_32_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityBlueprintAsyncActionBase>();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_39_DELEGATE \
BLUTILITY_API void FAsyncDelayComplete_DelegateWrapper(const FMulticastScriptDelegate& AsyncDelayComplete);


#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAsyncEditorDelay);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorDelay(); \
	friend struct Z_Construct_UClass_UAsyncEditorDelay_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorDelay, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorDelay)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorDelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncEditorDelay(UAsyncEditorDelay&&); \
	UAsyncEditorDelay(const UAsyncEditorDelay&); \
public: \
	NO_API virtual ~UAsyncEditorDelay();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_41_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncEditorDelay>();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_71_DELEGATE \
BLUTILITY_API void FAsyncEditorWaitForGameWorldEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncEditorWaitForGameWorldEvent, UWorld* World);


#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAsyncWaitForGameWorld);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorWaitForGameWorld(); \
	friend struct Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorWaitForGameWorld, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorWaitForGameWorld)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorWaitForGameWorld(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorWaitForGameWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorWaitForGameWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorWaitForGameWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncEditorWaitForGameWorld(UAsyncEditorWaitForGameWorld&&); \
	UAsyncEditorWaitForGameWorld(const UAsyncEditorWaitForGameWorld&); \
public: \
	NO_API virtual ~UAsyncEditorWaitForGameWorld();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_73_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncEditorWaitForGameWorld>();

#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAsyncEditorOpenMapAndFocusActor);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorOpenMapAndFocusActor(); \
	friend struct Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorOpenMapAndFocusActor, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorOpenMapAndFocusActor)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorOpenMapAndFocusActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorOpenMapAndFocusActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorOpenMapAndFocusActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorOpenMapAndFocusActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncEditorOpenMapAndFocusActor(UAsyncEditorOpenMapAndFocusActor&&); \
	UAsyncEditorOpenMapAndFocusActor(const UAsyncEditorOpenMapAndFocusActor&); \
public: \
	NO_API virtual ~UAsyncEditorOpenMapAndFocusActor();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_103_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncEditorOpenMapAndFocusActor>();

#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execConvertToEditorUtilityWidget); \
	DECLARE_FUNCTION(execSyncBrowserToFolders); \
	DECLARE_FUNCTION(execGetSelectedPathViewFolderPaths); \
	DECLARE_FUNCTION(execGetSelectedFolderPaths); \
	DECLARE_FUNCTION(execGetCurrentContentBrowserItemPath); \
	DECLARE_FUNCTION(execGetCurrentContentBrowserPath); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectedAssetData); \
	DECLARE_FUNCTION(execGetSelectedBlueprintClasses); \
	DECLARE_FUNCTION(execGetSelectedAssetsOfClass); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execGetSelectionSet);
#else // WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UEditorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityLibrary)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilityLibrary(UEditorUtilityLibrary&&); \
	UEditorUtilityLibrary(const UEditorUtilityLibrary&); \
public: \
	NO_API virtual ~UEditorUtilityLibrary();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_135_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
