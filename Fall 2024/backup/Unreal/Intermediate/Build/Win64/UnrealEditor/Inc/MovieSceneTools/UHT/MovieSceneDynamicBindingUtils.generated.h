// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneDynamicBindingUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneDynamicBindingResolveResult;
#ifdef MOVIESCENETOOLS_MovieSceneDynamicBindingUtils_generated_h
#error "MovieSceneDynamicBindingUtils.generated.h already included, missing '#pragma once' in MovieSceneDynamicBindingUtils.h"
#endif
#define MOVIESCENETOOLS_MovieSceneDynamicBindingUtils_generated_h

#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSampleResolveBinding);


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDynamicBindingEndpointUtil(); \
	friend struct Z_Construct_UClass_UMovieSceneDynamicBindingEndpointUtil_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneDynamicBindingEndpointUtil, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneDynamicBindingEndpointUtil)


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneDynamicBindingEndpointUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneDynamicBindingEndpointUtil(UMovieSceneDynamicBindingEndpointUtil&&); \
	UMovieSceneDynamicBindingEndpointUtil(const UMovieSceneDynamicBindingEndpointUtil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneDynamicBindingEndpointUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDynamicBindingEndpointUtil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDynamicBindingEndpointUtil) \
	NO_API virtual ~UMovieSceneDynamicBindingEndpointUtil();


#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_64_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETOOLS_API UClass* StaticClass<class UMovieSceneDynamicBindingEndpointUtil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneDynamicBindingUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
