// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_AssetPlayerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_AssetPlayerBase_generated_h
#error "AnimGraphNode_AssetPlayerBase.generated.h already included, missing '#pragma once' in AnimGraphNode_AssetPlayerBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_AssetPlayerBase_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_AssetPlayerBase, NO_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_AssetPlayerBase(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_AssetPlayerBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_AssetPlayerBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_AssetPlayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_AssetPlayerBase(UAnimGraphNode_AssetPlayerBase&&); \
	UAnimGraphNode_AssetPlayerBase(const UAnimGraphNode_AssetPlayerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_AssetPlayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_AssetPlayerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_AssetPlayerBase) \
	NO_API virtual ~UAnimGraphNode_AssetPlayerBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_19_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_AssetPlayerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
