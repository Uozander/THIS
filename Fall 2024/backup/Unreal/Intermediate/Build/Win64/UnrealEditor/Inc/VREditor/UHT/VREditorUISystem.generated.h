// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorUISystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorUISystem_generated_h
#error "VREditorUISystem.generated.h already included, missing '#pragma once' in VREditorUISystem.h"
#endif
#define VREDITOR_VREditorUISystem_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRButton_Statics; \
	VREDITOR_API static class UScriptStruct* StaticStruct();


template<> VREDITOR_API UScriptStruct* StaticStruct<struct FVRButton>();

#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorUISystem(); \
	friend struct Z_Construct_UClass_UVREditorUISystem_Statics; \
public: \
	DECLARE_CLASS(UVREditorUISystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorUISystem)


#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVREditorUISystem(UVREditorUISystem&&); \
	UVREditorUISystem(const UVREditorUISystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorUISystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorUISystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorUISystem) \
	NO_API virtual ~UVREditorUISystem();


#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_100_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorUISystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
