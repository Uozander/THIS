// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_Blackboard_generated_h
#error "BTDecorator_Blackboard.generated.h already included, missing '#pragma once' in BTDecorator_Blackboard.h"
#endif
#define AIMODULE_BTDecorator_Blackboard_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_Blackboard(); \
	friend struct Z_Construct_UClass_UBTDecorator_Blackboard_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_Blackboard, UBTDecorator_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTDecorator_Blackboard)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTDecorator_Blackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_Blackboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTDecorator_Blackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_Blackboard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTDecorator_Blackboard(UBTDecorator_Blackboard&&); \
	UBTDecorator_Blackboard(const UBTDecorator_Blackboard&); \
public: \
	AIMODULE_API virtual ~UBTDecorator_Blackboard();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_35_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_38_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_Blackboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h


#define FOREACH_ENUM_EBTBLACKBOARDRESTART(op) \
	op(EBTBlackboardRestart::ValueChange) \
	op(EBTBlackboardRestart::ResultChange) 

namespace EBTBlackboardRestart { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EBTBlackboardRestart::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
