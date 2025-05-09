// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncRegisterAndExecuteTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncRegisterAndExecuteTask;
class UEditorUtilityTask;
#ifdef BLUTILITY_AsyncRegisterAndExecuteTask_generated_h
#error "AsyncRegisterAndExecuteTask.generated.h already included, missing '#pragma once' in AsyncRegisterAndExecuteTask.h"
#endif
#define BLUTILITY_AsyncRegisterAndExecuteTask_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterAndExecuteTask);


#define FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncRegisterAndExecuteTask(); \
	friend struct Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics; \
public: \
	DECLARE_CLASS(UAsyncRegisterAndExecuteTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), BLUTILITY_API) \
	DECLARE_SERIALIZER(UAsyncRegisterAndExecuteTask)


#define FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncRegisterAndExecuteTask(UAsyncRegisterAndExecuteTask&&); \
	UAsyncRegisterAndExecuteTask(const UAsyncRegisterAndExecuteTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncRegisterAndExecuteTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncRegisterAndExecuteTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncRegisterAndExecuteTask) \
	BLUTILITY_API virtual ~UAsyncRegisterAndExecuteTask();


#define FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_16_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncRegisterAndExecuteTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
