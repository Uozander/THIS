// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationRecorderParameters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCERECORDER_AnimationRecorderParameters_generated_h
#error "AnimationRecorderParameters.generated.h already included, missing '#pragma once' in AnimationRecorderParameters.h"
#endif
#define SEQUENCERECORDER_AnimationRecorderParameters_generated_h

#define FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationRecordingParameters(); \
	friend struct Z_Construct_UClass_UAnimationRecordingParameters_Statics; \
public: \
	DECLARE_CLASS(UAnimationRecordingParameters, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SequenceRecorder"), NO_API) \
	DECLARE_SERIALIZER(UAnimationRecordingParameters) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationRecordingParameters(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationRecordingParameters(UAnimationRecordingParameters&&); \
	UAnimationRecordingParameters(const UAnimationRecordingParameters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationRecordingParameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationRecordingParameters); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationRecordingParameters) \
	NO_API virtual ~UAnimationRecordingParameters();


#define FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_14_PROLOG
#define FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERECORDER_API UClass* StaticClass<class UAnimationRecordingParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SequenceRecorder_Private_AnimationRecorderParameters_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
