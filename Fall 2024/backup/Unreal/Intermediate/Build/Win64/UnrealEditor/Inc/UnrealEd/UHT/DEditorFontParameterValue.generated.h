// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorFontParameterValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DEditorFontParameterValue_generated_h
#error "DEditorFontParameterValue.generated.h already included, missing '#pragma once' in DEditorFontParameterValue.h"
#endif
#define UNREALED_DEditorFontParameterValue_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDFontParameters_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FDFontParameters>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorFontParameterValue(); \
	friend struct Z_Construct_UClass_UDEditorFontParameterValue_Statics; \
public: \
	DECLARE_CLASS(UDEditorFontParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDEditorFontParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorFontParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorFontParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorFontParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorFontParameterValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEditorFontParameterValue(UDEditorFontParameterValue&&); \
	UDEditorFontParameterValue(const UDEditorFontParameterValue&); \
public: \
	UNREALED_API virtual ~UDEditorFontParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_23_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDEditorFontParameterValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorFontParameterValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
