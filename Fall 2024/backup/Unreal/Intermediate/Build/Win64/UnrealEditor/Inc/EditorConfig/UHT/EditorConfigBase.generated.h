// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorConfigBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORCONFIG_EditorConfigBase_generated_h
#error "EditorConfigBase.generated.h already included, missing '#pragma once' in EditorConfigBase.h"
#endif
#define EDITORCONFIG_EditorConfigBase_generated_h

#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorConfigBase(); \
	friend struct Z_Construct_UClass_UEditorConfigBase_Statics; \
public: \
	DECLARE_CLASS(UEditorConfigBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorConfig"), NO_API) \
	DECLARE_SERIALIZER(UEditorConfigBase)


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorConfigBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorConfigBase(UEditorConfigBase&&); \
	UEditorConfigBase(const UEditorConfigBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorConfigBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorConfigBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorConfigBase) \
	NO_API virtual ~UEditorConfigBase();


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_12_PROLOG
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORCONFIG_API UClass* StaticClass<class UEditorConfigBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
