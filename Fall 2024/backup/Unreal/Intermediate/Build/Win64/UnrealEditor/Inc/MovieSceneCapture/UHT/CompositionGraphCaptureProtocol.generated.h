// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/CompositionGraphCaptureProtocol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h
#error "CompositionGraphCaptureProtocol.generated.h already included, missing '#pragma once' in CompositionGraphCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<struct FCompositionGraphCapturePasses>();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositionGraphCaptureProtocol(); \
	friend struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UCompositionGraphCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UCompositionGraphCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositionGraphCaptureProtocol(UCompositionGraphCaptureProtocol&&); \
	UCompositionGraphCaptureProtocol(const UCompositionGraphCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UCompositionGraphCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositionGraphCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositionGraphCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UCompositionGraphCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_49_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UCompositionGraphCaptureProtocol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h


#define FOREACH_ENUM_EHDRCAPTUREGAMUT(op) \
	op(HCGM_Rec709) \
	op(HCGM_P3DCI) \
	op(HCGM_Rec2020) \
	op(HCGM_ACES) \
	op(HCGM_ACEScg) \
	op(HCGM_Linear) 

enum EHDRCaptureGamut : int;
template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EHDRCaptureGamut>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
