// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FixedFrameRateCustomTimeStep.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_FixedFrameRateCustomTimeStep_generated_h
#error "FixedFrameRateCustomTimeStep.generated.h already included, missing '#pragma once' in FixedFrameRateCustomTimeStep.h"
#endif
#define TIMEMANAGEMENT_FixedFrameRateCustomTimeStep_generated_h

#define FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFixedFrameRateCustomTimeStep(); \
	friend struct Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UFixedFrameRateCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), TIMEMANAGEMENT_API) \
	DECLARE_SERIALIZER(UFixedFrameRateCustomTimeStep)


#define FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UFixedFrameRateCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFixedFrameRateCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UFixedFrameRateCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFixedFrameRateCustomTimeStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFixedFrameRateCustomTimeStep(UFixedFrameRateCustomTimeStep&&); \
	UFixedFrameRateCustomTimeStep(const UFixedFrameRateCustomTimeStep&); \
public: \
	TIMEMANAGEMENT_API virtual ~UFixedFrameRateCustomTimeStep();


#define FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_21_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_24_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UFixedFrameRateCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_FixedFrameRateCustomTimeStep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
