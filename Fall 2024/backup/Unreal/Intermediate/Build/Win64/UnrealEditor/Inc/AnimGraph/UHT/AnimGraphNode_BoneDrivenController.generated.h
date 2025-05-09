// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BoneDrivenController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_BoneDrivenController_generated_h
#error "AnimGraphNode_BoneDrivenController.generated.h already included, missing '#pragma once' in AnimGraphNode_BoneDrivenController.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BoneDrivenController_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_BoneDrivenController, NO_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BoneDrivenController(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_BoneDrivenController, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_BoneDrivenController) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_BoneDrivenController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BoneDrivenController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_BoneDrivenController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BoneDrivenController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BoneDrivenController(UAnimGraphNode_BoneDrivenController&&); \
	UAnimGraphNode_BoneDrivenController(const UAnimGraphNode_BoneDrivenController&); \
public: \
	NO_API virtual ~UAnimGraphNode_BoneDrivenController();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_23_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_BoneDrivenController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
