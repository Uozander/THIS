// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorConfigSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORCONFIG_EditorConfigSubsystem_generated_h
#error "EditorConfigSubsystem.generated.h already included, missing '#pragma once' in EditorConfigSubsystem.h"
#endif
#define EDITORCONFIG_EditorConfigSubsystem_generated_h

#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorConfigSubsystem(); \
	friend struct Z_Construct_UClass_UEditorConfigSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorConfigSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorConfig"), NO_API) \
	DECLARE_SERIALIZER(UEditorConfigSubsystem)


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorConfigSubsystem(UEditorConfigSubsystem&&); \
	UEditorConfigSubsystem(const UEditorConfigSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorConfigSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorConfigSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorConfigSubsystem) \
	NO_API virtual ~UEditorConfigSubsystem();


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_12_PROLOG
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORCONFIG_API UClass* StaticClass<class UEditorConfigSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
