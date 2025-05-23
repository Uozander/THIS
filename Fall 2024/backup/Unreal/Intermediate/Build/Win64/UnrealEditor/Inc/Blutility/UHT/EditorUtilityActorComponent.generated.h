// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUTILITY_EditorUtilityActorComponent_generated_h
#error "EditorUtilityActorComponent.generated.h already included, missing '#pragma once' in EditorUtilityActorComponent.h"
#endif
#define BLUTILITY_EditorUtilityActorComponent_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityActorComponent(); \
	friend struct Z_Construct_UClass_UEditorUtilityActorComponent_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityActorComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityActorComponent)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilityActorComponent(UEditorUtilityActorComponent&&); \
	UEditorUtilityActorComponent(const UEditorUtilityActorComponent&); \
public: \
	NO_API virtual ~UEditorUtilityActorComponent();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_18_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
