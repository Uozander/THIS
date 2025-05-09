// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilitySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityTask;
class UEditorUtilityWidget;
class UEditorUtilityWidgetBlueprint;
class UObject;
#ifdef BLUTILITY_EditorUtilitySubsystem_generated_h
#error "EditorUtilitySubsystem.generated.h already included, missing '#pragma once' in EditorUtilitySubsystem.h"
#endif
#define BLUTILITY_EditorUtilitySubsystem_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_40_DELEGATE \
BLUTILITY_API void FOnEditorUtilityPIEEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditorUtilityPIEEvent, bool bIsSimulating);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterAndExecuteTask); \
	DECLARE_FUNCTION(execFindUtilityWidgetFromBlueprint); \
	DECLARE_FUNCTION(execUnregisterTabByID); \
	DECLARE_FUNCTION(execCloseTabByID); \
	DECLARE_FUNCTION(execDoesTabExist); \
	DECLARE_FUNCTION(execSpawnRegisteredTabByID); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabWithIdGeneratedClass); \
	DECLARE_FUNCTION(execRegisterTabAndGetIDGeneratedClass); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabGeneratedClass); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabAndGetIDGeneratedClass); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabWithId); \
	DECLARE_FUNCTION(execRegisterTabAndGetID); \
	DECLARE_FUNCTION(execSpawnAndRegisterTab); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabAndGetID); \
	DECLARE_FUNCTION(execCanRun); \
	DECLARE_FUNCTION(execTryRunClass); \
	DECLARE_FUNCTION(execTryRun); \
	DECLARE_FUNCTION(execReleaseInstanceOfAsset);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilitySubsystem(); \
	friend struct Z_Construct_UClass_UEditorUtilitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilitySubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilitySubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilitySubsystem(UEditorUtilitySubsystem&&); \
	UEditorUtilitySubsystem(const UEditorUtilitySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorUtilitySubsystem) \
	NO_API virtual ~UEditorUtilitySubsystem();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_42_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilitySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
