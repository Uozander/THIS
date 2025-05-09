// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UndoHistorySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNDOHISTORYEDITOR_UndoHistorySettings_generated_h
#error "UndoHistorySettings.generated.h already included, missing '#pragma once' in UndoHistorySettings.h"
#endif
#define UNDOHISTORYEDITOR_UndoHistorySettings_generated_h

#define FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUndoHistorySettings(); \
	friend struct Z_Construct_UClass_UUndoHistorySettings_Statics; \
public: \
	DECLARE_CLASS(UUndoHistorySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UndoHistoryEditor"), NO_API) \
	DECLARE_SERIALIZER(UUndoHistorySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUndoHistorySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUndoHistorySettings(UUndoHistorySettings&&); \
	UUndoHistorySettings(const UUndoHistorySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUndoHistorySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUndoHistorySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUndoHistorySettings) \
	NO_API virtual ~UUndoHistorySettings();


#define FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_13_PROLOG
#define FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNDOHISTORYEDITOR_API UClass* StaticClass<class UUndoHistorySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
