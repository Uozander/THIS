// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorGizmos/EditorTransformGizmoBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmoBuilder_generated_h
#error "EditorTransformGizmoBuilder.generated.h already included, missing '#pragma once' in EditorTransformGizmoBuilder.h"
#endif
#define EDITORINTERACTIVETOOLSFRAMEWORK_EditorTransformGizmoBuilder_generated_h

#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTransformGizmoBuilder(); \
	friend struct Z_Construct_UClass_UEditorTransformGizmoBuilder_Statics; \
public: \
	DECLARE_CLASS(UEditorTransformGizmoBuilder, UInteractiveGizmoBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorInteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UEditorTransformGizmoBuilder) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorTransformGizmoBuilder*>(this); }


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorTransformGizmoBuilder(UEditorTransformGizmoBuilder&&); \
	UEditorTransformGizmoBuilder(const UEditorTransformGizmoBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTransformGizmoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTransformGizmoBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTransformGizmoBuilder) \
	NO_API virtual ~UEditorTransformGizmoBuilder();


#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_19_PROLOG
#define FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UEditorTransformGizmoBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_EditorTransformGizmoBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
