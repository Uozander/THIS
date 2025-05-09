// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorBaseActor_generated_h
#error "VREditorBaseActor.generated.h already included, missing '#pragma once' in VREditorBaseActor.h"
#endif
#define VREDITOR_VREditorBaseActor_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorBaseActor(); \
	friend struct Z_Construct_UClass_AVREditorBaseActor_Statics; \
public: \
	DECLARE_CLASS(AVREditorBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(AVREditorBaseActor)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVREditorBaseActor(AVREditorBaseActor&&); \
	AVREditorBaseActor(const AVREditorBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorBaseActor) \
	NO_API virtual ~AVREditorBaseActor();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h_13_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class AVREditorBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
