// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorAnimBaseObj.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorAnimBaseObj_generated_h
#error "EditorAnimBaseObj.generated.h already included, missing '#pragma once' in EditorAnimBaseObj.h"
#endif
#define UNREALED_EditorAnimBaseObj_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAnimBaseObj(); \
	friend struct Z_Construct_UClass_UEditorAnimBaseObj_Statics; \
public: \
	DECLARE_CLASS(UEditorAnimBaseObj, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorAnimBaseObj)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimBaseObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimBaseObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimBaseObj); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimBaseObj); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorAnimBaseObj(UEditorAnimBaseObj&&); \
	UEditorAnimBaseObj(const UEditorAnimBaseObj&); \
public: \
	UNREALED_API virtual ~UEditorAnimBaseObj();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_21_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorAnimBaseObj>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
