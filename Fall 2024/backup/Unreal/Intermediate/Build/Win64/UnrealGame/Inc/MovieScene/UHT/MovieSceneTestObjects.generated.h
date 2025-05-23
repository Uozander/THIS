// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MovieSceneTestObjects.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTestObjects_generated_h
#error "MovieSceneTestObjects.generated.h already included, missing '#pragma once' in MovieSceneTestObjects.h"
#endif
#define MOVIESCENE_MovieSceneTestObjects_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneEvalTemplate Super;


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FTestMovieSceneEvalTemplate>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneTrack(); \
	friend struct Z_Construct_UClass_UTestMovieSceneTrack_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UTestMovieSceneTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneTrack(UTestMovieSceneTrack&&); \
	UTestMovieSceneTrack(const UTestMovieSceneTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneTrack) \
	MOVIESCENE_API virtual ~UTestMovieSceneTrack();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_24_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_29_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneTrack>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSection(); \
	friend struct Z_Construct_UClass_UTestMovieSceneSection_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneSection)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneSection(UTestMovieSceneSection&&); \
	UTestMovieSceneSection(const UTestMovieSceneSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSection) \
	MOVIESCENE_API virtual ~UTestMovieSceneSection();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_53_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_57_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneSection>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSequence(); \
	friend struct Z_Construct_UClass_UTestMovieSceneSequence_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneSequence)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneSequence(UTestMovieSceneSequence&&); \
	UTestMovieSceneSequence(const UTestMovieSceneSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSequence) \
	MOVIESCENE_API virtual ~UTestMovieSceneSequence();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_60_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_64_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneSequence>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSubTrack(); \
	friend struct Z_Construct_UClass_UTestMovieSceneSubTrack_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneSubTrack, UMovieSceneSubTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneSubTrack)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneSubTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneSubTrack(UTestMovieSceneSubTrack&&); \
	UTestMovieSceneSubTrack(const UTestMovieSceneSubTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSubTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSubTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSubTrack) \
	MOVIESCENE_API virtual ~UTestMovieSceneSubTrack();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_89_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_93_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneSubTrack>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneSubSection(); \
	friend struct Z_Construct_UClass_UTestMovieSceneSubSection_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneSubSection, UMovieSceneSubSection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneSubSection)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneSubSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneSubSection(UTestMovieSceneSubSection&&); \
	UTestMovieSceneSubSection(const UTestMovieSceneSubSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneSubSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneSubSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneSubSection) \
	MOVIESCENE_API virtual ~UTestMovieSceneSubSection();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_101_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneSubSection>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneEvalHookTrack(); \
	friend struct Z_Construct_UClass_UTestMovieSceneEvalHookTrack_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneEvalHookTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneEvalHookTrack)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UTestMovieSceneEvalHookTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneEvalHookTrack(UTestMovieSceneEvalHookTrack&&); \
	UTestMovieSceneEvalHookTrack(const UTestMovieSceneEvalHookTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneEvalHookTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneEvalHookTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneEvalHookTrack) \
	MOVIESCENE_API virtual ~UTestMovieSceneEvalHookTrack();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_107_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_111_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneEvalHookTrack>();

#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestMovieSceneEvalHookSection(); \
	friend struct Z_Construct_UClass_UTestMovieSceneEvalHookSection_Statics; \
public: \
	DECLARE_CLASS(UTestMovieSceneEvalHookSection, UMovieSceneHookSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UTestMovieSceneEvalHookSection)


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_134_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestMovieSceneEvalHookSection(UTestMovieSceneEvalHookSection&&); \
	UTestMovieSceneEvalHookSection(const UTestMovieSceneEvalHookSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UTestMovieSceneEvalHookSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestMovieSceneEvalHookSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestMovieSceneEvalHookSection) \
	MOVIESCENE_API virtual ~UTestMovieSceneEvalHookSection();


#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_130_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h_134_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UTestMovieSceneEvalHookSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Private_Tests_MovieSceneTestObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
