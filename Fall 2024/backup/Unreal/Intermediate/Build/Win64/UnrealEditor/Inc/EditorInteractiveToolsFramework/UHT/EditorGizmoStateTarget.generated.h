// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/EditorGizmoStateTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorGizmoStateTarget_generated_h
#error "EditorGizmoStateTarget.generated.h already included, missing '#pragma once' in EditorGizmoStateTarget.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorGizmoStateTarget_generated_h

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorGizmoStateTarget(); \
	friend struct Z_Construct_UClass_UEditorGizmoStateTarget_Statics; \
public: \
	DECLARE_CLASS(UEditorGizmoStateTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), EDITORINTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UEditorGizmoStateTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorGizmoStateTarget*>(this); }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEditorGizmoStateTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorGizmoStateTarget(UEditorGizmoStateTarget&&); \
	UEditorGizmoStateTarget(const UEditorGizmoStateTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORINTERACTIVETOOLSFRAMEWORK_API, UEditorGizmoStateTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorGizmoStateTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorGizmoStateTarget) \
	EDITORINTERACTIVETOOLSFRAMEWORK_API virtual ~UEditorGizmoStateTarget();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h_25_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UEditorGizmoStateTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorGizmoStateTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
