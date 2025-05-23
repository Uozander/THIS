// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VIGizmoHandle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_VIGizmoHandle_generated_h
#error "VIGizmoHandle.generated.h already included, missing '#pragma once' in VIGizmoHandle.h"
#endif
#define VIEWPORTINTERACTION_VIGizmoHandle_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGizmoHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FGizmoHandle>();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UGizmoHandleGroup, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGizmoHandleGroup)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGizmoHandleGroup(UGizmoHandleGroup&&); \
	UGizmoHandleGroup(const UGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoHandleGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoHandleGroup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGizmoHandleGroup) \
	NO_API virtual ~UGizmoHandleGroup();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_33_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UGizmoHandleGroup>();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxisGizmoHandleGroup(); \
	friend struct Z_Construct_UClass_UAxisGizmoHandleGroup_Statics; \
public: \
	DECLARE_CLASS(UAxisGizmoHandleGroup, UGizmoHandleGroup, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UAxisGizmoHandleGroup)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxisGizmoHandleGroup(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAxisGizmoHandleGroup(UAxisGizmoHandleGroup&&); \
	UAxisGizmoHandleGroup(const UAxisGizmoHandleGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxisGizmoHandleGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxisGizmoHandleGroup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAxisGizmoHandleGroup) \
	NO_API virtual ~UAxisGizmoHandleGroup();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_141_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UAxisGizmoHandleGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
