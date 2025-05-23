// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorAnimSegment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorAnimSegment_generated_h
#error "EditorAnimSegment.generated.h already included, missing '#pragma once' in EditorAnimSegment.h"
#endif
#define UNREALED_EditorAnimSegment_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAnimSegment(); \
	friend struct Z_Construct_UClass_UEditorAnimSegment_Statics; \
public: \
	DECLARE_CLASS(UEditorAnimSegment, UEditorAnimBaseObj, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorAnimSegment)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimSegment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimSegment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorAnimSegment(UEditorAnimSegment&&); \
	UEditorAnimSegment(const UEditorAnimSegment&); \
public: \
	UNREALED_API virtual ~UEditorAnimSegment();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorAnimSegment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
