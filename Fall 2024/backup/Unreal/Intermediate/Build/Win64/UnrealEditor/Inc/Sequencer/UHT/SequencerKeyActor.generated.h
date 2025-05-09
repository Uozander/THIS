// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerKeyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_SequencerKeyActor_generated_h
#error "SequencerKeyActor.generated.h already included, missing '#pragma once' in SequencerKeyActor.h"
#endif
#define SEQUENCER_SequencerKeyActor_generated_h

#define FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASequencerKeyActor(); \
	friend struct Z_Construct_UClass_ASequencerKeyActor_Statics; \
public: \
	DECLARE_CLASS(ASequencerKeyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(ASequencerKeyActor)


#define FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASequencerKeyActor(ASequencerKeyActor&&); \
	ASequencerKeyActor(const ASequencerKeyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASequencerKeyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASequencerKeyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASequencerKeyActor) \
	NO_API virtual ~ASequencerKeyActor();


#define FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_8_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class ASequencerKeyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
