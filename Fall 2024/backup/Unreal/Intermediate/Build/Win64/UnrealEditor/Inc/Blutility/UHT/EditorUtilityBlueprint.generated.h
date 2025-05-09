// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUTILITY_EditorUtilityBlueprint_generated_h
#error "EditorUtilityBlueprint.generated.h already included, missing '#pragma once' in EditorUtilityBlueprint.h"
#endif
#define BLUTILITY_EditorUtilityBlueprint_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprint(); \
	friend struct Z_Construct_UClass_UEditorUtilityBlueprint_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprint)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilityBlueprint(UEditorUtilityBlueprint&&); \
	UEditorUtilityBlueprint(const UEditorUtilityBlueprint&); \
public: \
	NO_API virtual ~UEditorUtilityBlueprint();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h_17_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h_20_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
