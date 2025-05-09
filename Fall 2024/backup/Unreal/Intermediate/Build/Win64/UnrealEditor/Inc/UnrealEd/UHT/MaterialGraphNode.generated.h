// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialGraph/MaterialGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialGraphNode_generated_h
#error "MaterialGraphNode.generated.h already included, missing '#pragma once' in MaterialGraphNode.h"
#endif
#define UNREALED_MaterialGraphNode_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraphNode(); \
	friend struct Z_Construct_UClass_UMaterialGraphNode_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraphNode, UMaterialGraphNode_Base, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UMaterialGraphNode)


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UMaterialGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UMaterialGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialGraphNode(UMaterialGraphNode&&); \
	UMaterialGraphNode(const UMaterialGraphNode&); \
public: \
	UNREALED_API virtual ~UMaterialGraphNode();


#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
