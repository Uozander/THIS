// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTreeFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeFactory_generated_h
#error "BehaviorTreeFactory.generated.h already included, missing '#pragma once' in BehaviorTreeFactory.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeFactory_generated_h

#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeFactory(); \
	friend struct Z_Construct_UClass_UBehaviorTreeFactory_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeFactory)


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviorTreeFactory(UBehaviorTreeFactory&&); \
	UBehaviorTreeFactory(const UBehaviorTreeFactory&); \
public: \
	NO_API virtual ~UBehaviorTreeFactory();


#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
