// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieScenePreAnimatedStateSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieScenePreAnimatedStateSystem_generated_h
#error "MovieScenePreAnimatedStateSystem.generated.h already included, missing '#pragma once' in MovieScenePreAnimatedStateSystem.h"
#endif
#define MOVIESCENE_MovieScenePreAnimatedStateSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePreAnimatedStateSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScenePreAnimatedStateSystemInterface(UMovieScenePreAnimatedStateSystemInterface&&); \
	UMovieScenePreAnimatedStateSystemInterface(const UMovieScenePreAnimatedStateSystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePreAnimatedStateSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePreAnimatedStateSystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePreAnimatedStateSystemInterface) \
	NO_API virtual ~UMovieScenePreAnimatedStateSystemInterface();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface(); \
	friend struct Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePreAnimatedStateSystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePreAnimatedStateSystemInterface)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieScenePreAnimatedStateSystemInterface() {} \
public: \
	typedef UMovieScenePreAnimatedStateSystemInterface UClassType; \
	typedef IMovieScenePreAnimatedStateSystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_23_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieScenePreAnimatedStateSystemInterface>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCachePreAnimatedStateSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneCachePreAnimatedStateSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCachePreAnimatedStateSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneCachePreAnimatedStateSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCachePreAnimatedStateSystem(UMovieSceneCachePreAnimatedStateSystem&&); \
	UMovieSceneCachePreAnimatedStateSystem(const UMovieSceneCachePreAnimatedStateSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneCachePreAnimatedStateSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCachePreAnimatedStateSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCachePreAnimatedStateSystem) \
	MOVIESCENE_API virtual ~UMovieSceneCachePreAnimatedStateSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_58_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_64_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCachePreAnimatedStateSystem>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneRestorePreAnimatedStateSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneRestorePreAnimatedStateSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneRestorePreAnimatedStateSystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneRestorePreAnimatedStateSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneRestorePreAnimatedStateSystem(UMovieSceneRestorePreAnimatedStateSystem&&); \
	UMovieSceneRestorePreAnimatedStateSystem(const UMovieSceneRestorePreAnimatedStateSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneRestorePreAnimatedStateSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneRestorePreAnimatedStateSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneRestorePreAnimatedStateSystem) \
	MOVIESCENE_API virtual ~UMovieSceneRestorePreAnimatedStateSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_85_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h_91_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneRestorePreAnimatedStateSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePreAnimatedStateSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
