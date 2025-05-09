// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerKeyStructGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerKeyStructGenerator_generated_h
#error "SequencerKeyStructGenerator.generated.h already included, missing '#pragma once' in SequencerKeyStructGenerator.h"
#endif
#define SEQUENCER_SequencerKeyStructGenerator_generated_h

#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneKeyStructType(); \
	friend struct Z_Construct_UClass_UMovieSceneKeyStructType_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneKeyStructType, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneKeyStructType)


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneKeyStructType(UMovieSceneKeyStructType&&); \
	UMovieSceneKeyStructType(const UMovieSceneKeyStructType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneKeyStructType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneKeyStructType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneKeyStructType) \
	NO_API virtual ~UMovieSceneKeyStructType();


#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_36_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h_40_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class UMovieSceneKeyStructType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_SequencerKeyStructGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
