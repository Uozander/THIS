// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KismetAnimationLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
enum class EEasingFuncType : uint8;
struct FPositionHistory;
struct FRuntimeFloatCurve;
#ifdef ANIMGRAPHRUNTIME_KismetAnimationLibrary_generated_h
#error "KismetAnimationLibrary.generated.h already included, missing '#pragma once' in KismetAnimationLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_KismetAnimationLibrary_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCalculateDirection); \
	DECLARE_FUNCTION(execK2_EndProfilingTimer); \
	DECLARE_FUNCTION(execK2_StartProfilingTimer); \
	DECLARE_FUNCTION(execK2_CalculateVelocityFromSockets); \
	DECLARE_FUNCTION(execK2_CalculateVelocityFromPositionHistory); \
	DECLARE_FUNCTION(execK2_MakePerlinNoiseAndRemap); \
	DECLARE_FUNCTION(execK2_MakePerlinNoiseVectorAndRemap); \
	DECLARE_FUNCTION(execK2_DirectionBetweenSockets); \
	DECLARE_FUNCTION(execK2_DistanceBetweenTwoSocketsAndMapRange); \
	DECLARE_FUNCTION(execK2_LookAt); \
	DECLARE_FUNCTION(execK2_TwoBoneIK);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUKismetAnimationLibrary(); \
	friend struct Z_Construct_UClass_UKismetAnimationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetAnimationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UKismetAnimationLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UKismetAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetAnimationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UKismetAnimationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetAnimationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UKismetAnimationLibrary(UKismetAnimationLibrary&&); \
	UKismetAnimationLibrary(const UKismetAnimationLibrary&); \
public: \
	ANIMGRAPHRUNTIME_API virtual ~UKismetAnimationLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_17_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UKismetAnimationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
