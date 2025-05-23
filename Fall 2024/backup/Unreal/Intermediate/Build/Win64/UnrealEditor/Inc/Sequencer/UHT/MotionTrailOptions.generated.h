// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/MotionTrailOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_MotionTrailOptions_generated_h
#error "MotionTrailOptions.generated.h already included, missing '#pragma once' in MotionTrailOptions.h"
#endif
#define SEQUENCER_MotionTrailOptions_generated_h

#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrailToolOptions(); \
	friend struct Z_Construct_UClass_UMotionTrailToolOptions_Statics; \
public: \
	DECLARE_CLASS(UMotionTrailToolOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Sequencer"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrailToolOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotionTrailToolOptions(UMotionTrailToolOptions&&); \
	UMotionTrailToolOptions(const UMotionTrailToolOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrailToolOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrailToolOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMotionTrailToolOptions) \
	NO_API virtual ~UMotionTrailToolOptions();


#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_13_PROLOG
#define FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCER_API UClass* StaticClass<class UMotionTrailToolOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
