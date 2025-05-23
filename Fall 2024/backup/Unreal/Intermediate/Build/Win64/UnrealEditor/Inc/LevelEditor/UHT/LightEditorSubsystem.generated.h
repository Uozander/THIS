// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELEDITOR_LightEditorSubsystem_generated_h
#error "LightEditorSubsystem.generated.h already included, missing '#pragma once' in LightEditorSubsystem.h"
#endif
#define LEVELEDITOR_LightEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightEditorSubsystem(); \
	friend struct Z_Construct_UClass_ULightEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULightEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), NO_API) \
	DECLARE_SERIALIZER(ULightEditorSubsystem)


#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightEditorSubsystem(ULightEditorSubsystem&&); \
	ULightEditorSubsystem(const ULightEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightEditorSubsystem) \
	NO_API virtual ~ULightEditorSubsystem();


#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_40_PROLOG
#define FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELEDITOR_API UClass* StaticClass<class ULightEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelEditor_Private_LightEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
