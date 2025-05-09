// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityBlueprintFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUTILITY_EditorUtilityBlueprintFactory_generated_h
#error "EditorUtilityBlueprintFactory.generated.h already included, missing '#pragma once' in EditorUtilityBlueprintFactory.h"
#endif
#define BLUTILITY_EditorUtilityBlueprintFactory_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprintFactory(); \
	friend struct Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprintFactory)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprintFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprintFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilityBlueprintFactory(UEditorUtilityBlueprintFactory&&); \
	UEditorUtilityBlueprintFactory(const UEditorUtilityBlueprintFactory&); \
public: \
	NO_API virtual ~UEditorUtilityBlueprintFactory();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_24_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_27_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityBlueprintFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
