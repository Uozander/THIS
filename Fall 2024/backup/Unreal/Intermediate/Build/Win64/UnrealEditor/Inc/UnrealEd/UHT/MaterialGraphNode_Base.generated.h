// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialGraphNode_Base_generated_h
#error "MaterialGraphNode_Base.generated.h already included, missing '#pragma once' in MaterialGraphNode_Base.h"
#endif
#define UNREALED_MaterialGraphNode_Base_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode_Base(); \
	friend struct Z_Construct_UClass_UMaterialGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraphNode_Base, UEdGraphNode, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialGraphNode_Base)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialGraphNode_Base(UMaterialGraphNode_Base&&); \
	UMaterialGraphNode_Base(const UMaterialGraphNode_Base&); \
public: \
	UNREALED_API virtual ~UMaterialGraphNode_Base();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialGraphNode_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
