// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSUBSYSTEM_EditorSubsystem_generated_h
#error "EditorSubsystem.generated.h already included, missing '#pragma once' in EditorSubsystem.h"
#endif
#define EDITORSUBSYSTEM_EditorSubsystem_generated_h

#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UEditorSubsystem)


#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorSubsystem(UEditorSubsystem&&); \
	UEditorSubsystem(const UEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEditorSubsystem) \
	NO_API virtual ~UEditorSubsystem();


#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_24_PROLOG
#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSUBSYSTEM_API UClass* StaticClass<class UEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
