// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorModeBase_generated_h
#error "VREditorModeBase.generated.h already included, missing '#pragma once' in VREditorModeBase.h"
#endif
#define VREDITOR_VREditorModeBase_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorModeBase(); \
	friend struct Z_Construct_UClass_UVREditorModeBase_Statics; \
public: \
	DECLARE_CLASS(UVREditorModeBase, UEditorWorldExtension, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorModeBase)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorModeBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVREditorModeBase(UVREditorModeBase&&); \
	UVREditorModeBase(const UVREditorModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorModeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVREditorModeBase) \
	NO_API virtual ~UVREditorModeBase();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_17_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
