// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneSkeletalAnimationTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESwapRootBone : uint8;
#ifdef MOVIESCENETRACKS_MovieSceneSkeletalAnimationTrack_generated_h
#error "MovieSceneSkeletalAnimationTrack.generated.h already included, missing '#pragma once' in MovieSceneSkeletalAnimationTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSkeletalAnimationTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneSkeletalAnimRootMotionTrackParams>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSwapRootBone); \
	DECLARE_FUNCTION(execSetSwapRootBone);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_ACCESSORS \
static void GetSwapRootBone_WrapperImpl(const void* Object, void* OutValue); \
static void SetSwapRootBone_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSkeletalAnimationTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSkeletalAnimationTrack(UMovieSceneSkeletalAnimationTrack&&); \
	UMovieSceneSkeletalAnimationTrack(const UMovieSceneSkeletalAnimationTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneSkeletalAnimationTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_40_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneSkeletalAnimationTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
