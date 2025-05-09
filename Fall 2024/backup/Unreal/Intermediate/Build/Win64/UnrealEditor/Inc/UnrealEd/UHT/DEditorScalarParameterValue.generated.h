// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorScalarParameterValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DEditorScalarParameterValue_generated_h
#error "DEditorScalarParameterValue.generated.h already included, missing '#pragma once' in DEditorScalarParameterValue.h"
#endif
#define UNREALED_DEditorScalarParameterValue_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FScalarParameterAtlasData>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorScalarParameterValue(); \
	friend struct Z_Construct_UClass_UDEditorScalarParameterValue_Statics; \
public: \
	DECLARE_CLASS(UDEditorScalarParameterValue, UDEditorParameterValue, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDEditorScalarParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorScalarParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorScalarParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorScalarParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorScalarParameterValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEditorScalarParameterValue(UDEditorScalarParameterValue&&); \
	UDEditorScalarParameterValue(const UDEditorScalarParameterValue&); \
public: \
	UNREALED_API virtual ~UDEditorScalarParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDEditorScalarParameterValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorScalarParameterValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
