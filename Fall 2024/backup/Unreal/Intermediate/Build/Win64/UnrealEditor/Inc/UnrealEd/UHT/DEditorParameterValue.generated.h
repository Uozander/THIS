// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditor/DEditorParameterValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DEditorParameterValue_generated_h
#error "DEditorParameterValue.generated.h already included, missing '#pragma once' in DEditorParameterValue.h"
#endif
#define UNREALED_DEditorParameterValue_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDEditorParameterValue(); \
	friend struct Z_Construct_UClass_UDEditorParameterValue_Statics; \
public: \
	DECLARE_CLASS(UDEditorParameterValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDEditorParameterValue)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDEditorParameterValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEditorParameterValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDEditorParameterValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEditorParameterValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEditorParameterValue(UDEditorParameterValue&&); \
	UDEditorParameterValue(const UDEditorParameterValue&); \
public: \
	UNREALED_API virtual ~UDEditorParameterValue();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDEditorParameterValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
