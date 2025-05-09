// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorNotifyObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorNotifyObject_generated_h
#error "EditorNotifyObject.generated.h already included, missing '#pragma once' in EditorNotifyObject.h"
#endif
#define UNREALED_EditorNotifyObject_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEditorNotifyObject(); \
	friend struct Z_Construct_UClass_UEditorNotifyObject_Statics; \
public: \
	DECLARE_CLASS(UEditorNotifyObject, UEditorAnimBaseObj, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorNotifyObject)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorNotifyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorNotifyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorNotifyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorNotifyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorNotifyObject(UEditorNotifyObject&&); \
	UEditorNotifyObject(const UEditorNotifyObject&); \
public: \
	UNREALED_API virtual ~UEditorNotifyObject();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorNotifyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorNotifyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
