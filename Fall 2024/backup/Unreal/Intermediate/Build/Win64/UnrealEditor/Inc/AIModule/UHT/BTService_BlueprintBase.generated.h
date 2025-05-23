// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;
#ifdef AIMODULE_BTService_BlueprintBase_generated_h
#error "BTService_BlueprintBase.generated.h already included, missing '#pragma once' in BTService_BlueprintBase.h"
#endif
#define AIMODULE_BTService_BlueprintBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsServiceActive);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUBTService_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTService_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTService_BlueprintBase, UBTService, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBTService_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBTService_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBTService_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTService_BlueprintBase(UBTService_BlueprintBase&&); \
	UBTService_BlueprintBase(const UBTService_BlueprintBase&); \
public: \
	AIMODULE_API virtual ~UBTService_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_23_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTService_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
