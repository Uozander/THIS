// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/TransformGizmo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmo_generated_h
#error "TransformGizmo.generated.h already included, missing '#pragma once' in TransformGizmo.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_TransformGizmo_generated_h

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGizmosParameters_Statics; \
	EDITORINTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FGizmosParameters>();

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformGizmo(); \
	friend struct Z_Construct_UClass_UTransformGizmo_Statics; \
public: \
	DECLARE_CLASS(UTransformGizmo, UInteractiveGizmo, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UTransformGizmo)


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransformGizmo(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformGizmo(UTransformGizmo&&); \
	UTransformGizmo(const UTransformGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransformGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransformGizmo) \
	NO_API virtual ~UTransformGizmo();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_125_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UTransformGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h


#define FOREACH_ENUM_ETRANSFORMGIZMOPARTIDENTIFIER(op) \
	op(ETransformGizmoPartIdentifier::Default) \
	op(ETransformGizmoPartIdentifier::TranslateAll) \
	op(ETransformGizmoPartIdentifier::TranslateXAxis) \
	op(ETransformGizmoPartIdentifier::TranslateYAxis) \
	op(ETransformGizmoPartIdentifier::TranslateZAxis) \
	op(ETransformGizmoPartIdentifier::TranslateXYPlanar) \
	op(ETransformGizmoPartIdentifier::TranslateYZPlanar) \
	op(ETransformGizmoPartIdentifier::TranslateXZPlanar) \
	op(ETransformGizmoPartIdentifier::TranslateScreenSpace) \
	op(ETransformGizmoPartIdentifier::RotateAll) \
	op(ETransformGizmoPartIdentifier::RotateXAxis) \
	op(ETransformGizmoPartIdentifier::RotateYAxis) \
	op(ETransformGizmoPartIdentifier::RotateZAxis) \
	op(ETransformGizmoPartIdentifier::RotateScreenSpace) \
	op(ETransformGizmoPartIdentifier::RotateArcball) \
	op(ETransformGizmoPartIdentifier::ScaleAll) \
	op(ETransformGizmoPartIdentifier::ScaleXAxis) \
	op(ETransformGizmoPartIdentifier::ScaleYAxis) \
	op(ETransformGizmoPartIdentifier::ScaleZAxis) \
	op(ETransformGizmoPartIdentifier::ScaleXYPlanar) \
	op(ETransformGizmoPartIdentifier::ScaleYZPlanar) \
	op(ETransformGizmoPartIdentifier::ScaleXZPlanar) \
	op(ETransformGizmoPartIdentifier::ScaleUniform) \
	op(ETransformGizmoPartIdentifier::Max) 

enum class ETransformGizmoPartIdentifier;
template<> struct TIsUEnumClass<ETransformGizmoPartIdentifier> { enum { Value = true }; };
template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ETransformGizmoPartIdentifier>();

#define FOREACH_ENUM_EAXISROTATEMODE(op) \
	op(EAxisRotateMode::Pull) \
	op(EAxisRotateMode::Arc) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
