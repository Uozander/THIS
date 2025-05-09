// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimationGraphSchema_generated_h
#error "AnimationGraphSchema.generated.h already included, missing '#pragma once' in AnimationGraphSchema.h"
#endif
#define ANIMGRAPH_AnimationGraphSchema_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationGraphSchema(); \
	friend struct Z_Construct_UClass_UAnimationGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraphSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimationGraphSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationGraphSchema(UAnimationGraphSchema&&); \
	UAnimationGraphSchema(const UAnimationGraphSchema&); \
public: \
	ANIMGRAPH_API virtual ~UAnimationGraphSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_21_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_24_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
