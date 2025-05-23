// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeSourceNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeSourceNode_generated_h
#error "InterchangeSourceNode.generated.h already included, missing '#pragma once' in InterchangeSourceNode.h"
#endif
#define INTERCHANGECORE_InterchangeSourceNode_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomImportUnusedMaterial); \
	DECLARE_FUNCTION(execGetCustomImportUnusedMaterial); \
	DECLARE_FUNCTION(execSetCustomAnimatedTimeEnd); \
	DECLARE_FUNCTION(execGetCustomAnimatedTimeEnd); \
	DECLARE_FUNCTION(execSetCustomAnimatedTimeStart); \
	DECLARE_FUNCTION(execGetCustomAnimatedTimeStart); \
	DECLARE_FUNCTION(execSetCustomSourceTimelineEnd); \
	DECLARE_FUNCTION(execGetCustomSourceTimelineEnd); \
	DECLARE_FUNCTION(execSetCustomSourceTimelineStart); \
	DECLARE_FUNCTION(execGetCustomSourceTimelineStart); \
	DECLARE_FUNCTION(execSetCustomSourceFrameRateDenominator); \
	DECLARE_FUNCTION(execGetCustomSourceFrameRateDenominator); \
	DECLARE_FUNCTION(execSetCustomSourceFrameRateNumerator); \
	DECLARE_FUNCTION(execGetCustomSourceFrameRateNumerator); \
	DECLARE_FUNCTION(execInitializeSourceNode);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSourceNode(); \
	friend struct Z_Construct_UClass_UInterchangeSourceNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSourceNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeSourceNode)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSourceNode(UInterchangeSourceNode&&); \
	UInterchangeSourceNode(const UInterchangeSourceNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeSourceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSourceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSourceNode) \
	INTERCHANGECORE_API virtual ~UInterchangeSourceNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_25_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeSourceNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
