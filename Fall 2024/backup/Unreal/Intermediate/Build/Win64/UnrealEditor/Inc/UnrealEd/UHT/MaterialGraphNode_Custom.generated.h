// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Custom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialGraphNode_Custom_generated_h
#error "MaterialGraphNode_Custom.generated.h already included, missing '#pragma once' in MaterialGraphNode_Custom.h"
#endif
#define UNREALED_MaterialGraphNode_Custom_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Custom(); \
	friend struct Z_Construct_UClass_UMaterialGraphNode_Custom_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraphNode_Custom, UMaterialGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Custom)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Custom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Custom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Custom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Custom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Custom(UMaterialGraphNode_Custom&&); \
	UMaterialGraphNode_Custom(const UMaterialGraphNode_Custom&); \
public: \
	UNREALED_API virtual ~UMaterialGraphNode_Custom();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_18_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialGraphNode_Custom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Custom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
