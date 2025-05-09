// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDPARTITIONEDITOR_WorldPartitionEditorSettings_generated_h
#error "WorldPartitionEditorSettings.generated.h already included, missing '#pragma once' in WorldPartitionEditorSettings.h"
#endif
#define WORLDPARTITIONEDITOR_WorldPartitionEditorSettings_generated_h

#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorSettings(); \
	friend struct Z_Construct_UClass_UWorldPartitionEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldPartitionEditor"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorSettings(UWorldPartitionEditorSettings&&); \
	UWorldPartitionEditorSettings(const UWorldPartitionEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionEditorSettings) \
	NO_API virtual ~UWorldPartitionEditorSettings();


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_10_PROLOG
#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<class UWorldPartitionEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
