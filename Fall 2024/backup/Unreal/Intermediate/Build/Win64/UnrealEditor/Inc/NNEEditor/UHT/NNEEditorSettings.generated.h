// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNEEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNEEDITOR_NNEEditorSettings_generated_h
#error "NNEEditorSettings.generated.h already included, missing '#pragma once' in NNEEditorSettings.h"
#endif
#define NNEEDITOR_NNEEditorSettings_generated_h

#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNNEEditorSettings(); \
	friend struct Z_Construct_UClass_UNNEEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UNNEEditorSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NNEEditor"), NO_API) \
	DECLARE_SERIALIZER(UNNEEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNEEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNNEEditorSettings(UNNEEditorSettings&&); \
	UNNEEditorSettings(const UNNEEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNEEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNEEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNEEditorSettings) \
	NO_API virtual ~UNNEEditorSettings();


#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNEEDITOR_API UClass* StaticClass<class UNNEEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_NNEEditor_Private_NNEEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
