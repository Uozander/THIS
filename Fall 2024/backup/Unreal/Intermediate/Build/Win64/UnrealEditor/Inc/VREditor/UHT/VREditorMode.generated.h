// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorMode_generated_h
#error "VREditorMode.generated.h already included, missing '#pragma once' in VREditorMode.h"
#endif
#define VREDITOR_VREditorMode_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldScaleFactor); \
	DECLARE_FUNCTION(execIsInGameView); \
	DECLARE_FUNCTION(execSetGameView);


#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorMode(); \
	friend struct Z_Construct_UClass_UVREditorMode_Statics; \
public: \
	DECLARE_CLASS(UVREditorMode, UVREditorModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorMode)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVREditorMode(UVREditorMode&&); \
	UVREditorMode(const UVREditorMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVREditorMode) \
	NO_API virtual ~UVREditorMode();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_53_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
