// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorCompositeSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorCompositeSection_generated_h
#error "EditorCompositeSection.generated.h already included, missing '#pragma once' in EditorCompositeSection.h"
#endif
#define UNREALED_EditorCompositeSection_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEditorCompositeSection(); \
	friend struct Z_Construct_UClass_UEditorCompositeSection_Statics; \
public: \
	DECLARE_CLASS(UEditorCompositeSection, UEditorAnimBaseObj, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorCompositeSection)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorCompositeSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorCompositeSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorCompositeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorCompositeSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorCompositeSection(UEditorCompositeSection&&); \
	UEditorCompositeSection(const UEditorCompositeSection&); \
public: \
	UNREALED_API virtual ~UEditorCompositeSection();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorCompositeSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
