// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUTILITY_EditorUtilityObject_generated_h
#error "EditorUtilityObject.generated.h already included, missing '#pragma once' in EditorUtilityObject.h"
#endif
#define BLUTILITY_EditorUtilityObject_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityObject(); \
	friend struct Z_Construct_UClass_UEditorUtilityObject_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityObject) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorUtilityObject*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorUtilityObject(UEditorUtilityObject&&); \
	UEditorUtilityObject(const UEditorUtilityObject&); \
public: \
	NO_API virtual ~UEditorUtilityObject();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_17_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
