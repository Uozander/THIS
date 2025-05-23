// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneCaptureProtocolBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneCaptureProtocolState : uint8;
#ifdef MOVIESCENECAPTURE_MovieSceneCaptureProtocolBase_generated_h
#error "MovieSceneCaptureProtocolBase.generated.h already included, missing '#pragma once' in MovieSceneCaptureProtocolBase.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCaptureProtocolBase_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execGetState);


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureProtocolBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureProtocolBase) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCaptureProtocolBase(UMovieSceneCaptureProtocolBase&&); \
	UMovieSceneCaptureProtocolBase(const UMovieSceneCaptureProtocolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneCaptureProtocolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureProtocolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureProtocolBase) \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneCaptureProtocolBase();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_56_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneCaptureProtocolBase>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneImageCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneImageCaptureProtocolBase, UMovieSceneCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UMovieSceneImageCaptureProtocolBase)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneImageCaptureProtocolBase(UMovieSceneImageCaptureProtocolBase&&); \
	UMovieSceneImageCaptureProtocolBase(const UMovieSceneImageCaptureProtocolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneImageCaptureProtocolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneImageCaptureProtocolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneImageCaptureProtocolBase) \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneImageCaptureProtocolBase();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_281_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneImageCaptureProtocolBase>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioCaptureProtocolBase, UMovieSceneCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioCaptureProtocolBase)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneAudioCaptureProtocolBase(UMovieSceneAudioCaptureProtocolBase&&); \
	UMovieSceneAudioCaptureProtocolBase(const UMovieSceneAudioCaptureProtocolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneAudioCaptureProtocolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioCaptureProtocolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioCaptureProtocolBase) \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneAudioCaptureProtocolBase();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_296_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_299_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneAudioCaptureProtocolBase>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFrameMetrics_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<struct FFrameMetrics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureProtocolBase_h


#define FOREACH_ENUM_EMOVIESCENECAPTUREPROTOCOLSTATE(op) \
	op(EMovieSceneCaptureProtocolState::Idle) \
	op(EMovieSceneCaptureProtocolState::Initialized) \
	op(EMovieSceneCaptureProtocolState::Capturing) \
	op(EMovieSceneCaptureProtocolState::Finalizing) 

enum class EMovieSceneCaptureProtocolState : uint8;
template<> struct TIsUEnumClass<EMovieSceneCaptureProtocolState> { enum { Value = true }; };
template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EMovieSceneCaptureProtocolState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
