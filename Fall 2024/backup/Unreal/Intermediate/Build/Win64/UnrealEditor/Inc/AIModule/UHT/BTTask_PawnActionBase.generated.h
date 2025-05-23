// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_PawnActionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_PawnActionBase_generated_h
#error "BTTask_PawnActionBase.generated.h already included, missing '#pragma once' in BTTask_PawnActionBase.h"
#endif
#define AIMODULE_BTTask_PawnActionBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_PawnActionBase(); \
	friend struct Z_Construct_UClass_UBTTask_PawnActionBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_PawnActionBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTTask_PawnActionBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTTask_PawnActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PawnActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTTask_PawnActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PawnActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_PawnActionBase(UBTTask_PawnActionBase&&); \
	UBTTask_PawnActionBase(const UBTTask_PawnActionBase&); \
public: \
	AIMODULE_API virtual ~UBTTask_PawnActionBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_29_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_PawnActionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
