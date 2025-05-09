// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/MaterialEditorOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialEditorOptions_generated_h
#error "MaterialEditorOptions.generated.h already included, missing '#pragma once' in MaterialEditorOptions.h"
#endif
#define UNREALED_MaterialEditorOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditorOptions(); \
	friend struct Z_Construct_UClass_UMaterialEditorOptions_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialEditorOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialEditorOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialEditorOptions(UMaterialEditorOptions&&); \
	UMaterialEditorOptions(const UMaterialEditorOptions&); \
public: \
	UNREALED_API virtual ~UMaterialEditorOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialEditorOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
