// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditorContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALEDITOR_MaterialEditorContext_generated_h
#error "MaterialEditorContext.generated.h already included, missing '#pragma once' in MaterialEditorContext.h"
#endif
#define MATERIALEDITOR_MaterialEditorContext_generated_h

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorMenuContext(); \
	friend struct Z_Construct_UClass_UMaterialEditorMenuContext_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorMenuContext)


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialEditorMenuContext(UMaterialEditorMenuContext&&); \
	UMaterialEditorMenuContext(const UMaterialEditorMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorMenuContext) \
	NO_API virtual ~UMaterialEditorMenuContext();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_11_PROLOG
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALEDITOR_API UClass* StaticClass<class UMaterialEditorMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
