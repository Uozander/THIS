// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AimOffsetBlendSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AimOffsetBlendSpace_generated_h
#error "AimOffsetBlendSpace.generated.h already included, missing '#pragma once' in AimOffsetBlendSpace.h"
#endif
#define ENGINE_AimOffsetBlendSpace_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAimOffsetBlendSpace(); \
	friend struct Z_Construct_UClass_UAimOffsetBlendSpace_Statics; \
public: \
	DECLARE_CLASS(UAimOffsetBlendSpace, UBlendSpace, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAimOffsetBlendSpace)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAimOffsetBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimOffsetBlendSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAimOffsetBlendSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimOffsetBlendSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAimOffsetBlendSpace(UAimOffsetBlendSpace&&); \
	UAimOffsetBlendSpace(const UAimOffsetBlendSpace&); \
public: \
	ENGINE_API virtual ~UAimOffsetBlendSpace();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAimOffsetBlendSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
