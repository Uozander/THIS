// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTrackInstanceSystem_generated_h
#error "MovieSceneTrackInstanceSystem.generated.h already included, missing '#pragma once' in MovieSceneTrackInstanceSystem.h"
#endif
#define MOVIESCENE_MovieSceneTrackInstanceSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceEntry_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackInstanceEntry>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTrackInstanceInstantiator, MOVIESCENE_API)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstanceInstantiator(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackInstanceInstantiator_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackInstanceInstantiator, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstanceInstantiator) \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTrackInstanceInstantiator(UMovieSceneTrackInstanceInstantiator&&); \
	UMovieSceneTrackInstanceInstantiator(const UMovieSceneTrackInstanceInstantiator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackInstanceInstantiator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstanceInstantiator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstanceInstantiator) \
	MOVIESCENE_API virtual ~UMovieSceneTrackInstanceInstantiator();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_39_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTrackInstanceInstantiator>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrackInstanceSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackInstanceSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackInstanceSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackInstanceSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTrackInstanceSystem(UMovieSceneTrackInstanceSystem&&); \
	UMovieSceneTrackInstanceSystem(const UMovieSceneTrackInstanceSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackInstanceSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackInstanceSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackInstanceSystem) \
	MOVIESCENE_API virtual ~UMovieSceneTrackInstanceSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_78_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTrackInstanceSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstanceSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
