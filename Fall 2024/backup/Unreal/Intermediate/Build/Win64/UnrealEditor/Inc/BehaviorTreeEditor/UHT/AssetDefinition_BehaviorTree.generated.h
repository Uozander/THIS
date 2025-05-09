// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition_BehaviorTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_AssetDefinition_BehaviorTree_generated_h
#error "AssetDefinition_BehaviorTree.generated.h already included, missing '#pragma once' in AssetDefinition_BehaviorTree.h"
#endif
#define BEHAVIORTREEEDITOR_AssetDefinition_BehaviorTree_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_BehaviorTree(); \
	friend struct Z_Construct_UClass_UAssetDefinition_BehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition_BehaviorTree, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition_BehaviorTree)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_BehaviorTree(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetDefinition_BehaviorTree(UAssetDefinition_BehaviorTree&&); \
	UAssetDefinition_BehaviorTree(const UAssetDefinition_BehaviorTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_BehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_BehaviorTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_BehaviorTree) \
	NO_API virtual ~UAssetDefinition_BehaviorTree();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h_10_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UAssetDefinition_BehaviorTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Public_AssetDefinition_BehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
