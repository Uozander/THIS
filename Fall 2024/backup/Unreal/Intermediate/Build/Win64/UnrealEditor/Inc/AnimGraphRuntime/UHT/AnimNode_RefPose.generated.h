// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_RefPose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_RefPose_generated_h
#error "AnimNode_RefPose.generated.h already included, missing '#pragma once' in AnimNode_RefPose.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_RefPose_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_RefPose>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_MeshSpaceRefPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h


#define FOREACH_ENUM_EREFPOSETYPE(op) \
	op(EIT_LocalSpace) \
	op(EIT_Additive) 

enum ERefPoseType : int;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ERefPoseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
