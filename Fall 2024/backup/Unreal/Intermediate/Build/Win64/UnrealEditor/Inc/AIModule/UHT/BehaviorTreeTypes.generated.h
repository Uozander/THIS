// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTreeTypes_generated_h
#error "BehaviorTreeTypes.generated.h already included, missing '#pragma once' in BehaviorTreeTypes.h"
#endif
#define AIMODULE_BehaviorTreeTypes_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_618_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBlackboardKeySelector>();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_680_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeTypes(); \
	friend struct Z_Construct_UClass_UBehaviorTreeTypes_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeTypes, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBehaviorTreeTypes)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_680_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeTypes(UBehaviorTreeTypes&&); \
	UBehaviorTreeTypes(const UBehaviorTreeTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBehaviorTreeTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeTypes); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeTypes) \
	AIMODULE_API virtual ~UBehaviorTreeTypes();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_677_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_680_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_680_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_680_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTreeTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h


#define FOREACH_ENUM_EBTNODERESULT(op) \
	op(EBTNodeResult::Succeeded) \
	op(EBTNodeResult::Failed) \
	op(EBTNodeResult::Aborted) \
	op(EBTNodeResult::InProgress) 

namespace EBTNodeResult { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EBTNodeResult::Type>();

#define FOREACH_ENUM_EBTFLOWABORTMODE(op) \
	op(EBTFlowAbortMode::None) \
	op(EBTFlowAbortMode::LowerPriority) \
	op(EBTFlowAbortMode::Self) \
	op(EBTFlowAbortMode::Both) 

namespace EBTFlowAbortMode { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EBTFlowAbortMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
