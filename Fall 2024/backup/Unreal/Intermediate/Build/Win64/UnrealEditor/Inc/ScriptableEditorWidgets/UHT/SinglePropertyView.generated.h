// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SinglePropertyView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTABLEEDITORWIDGETS_SinglePropertyView_generated_h
#error "SinglePropertyView.generated.h already included, missing '#pragma once' in SinglePropertyView.h"
#endif
#define SCRIPTABLEEDITORWIDGETS_SinglePropertyView_generated_h

#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNameOverride); \
	DECLARE_FUNCTION(execGetNameOverride); \
	DECLARE_FUNCTION(execSetPropertyName); \
	DECLARE_FUNCTION(execGetPropertyName);


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSinglePropertyView(); \
	friend struct Z_Construct_UClass_USinglePropertyView_Statics; \
public: \
	DECLARE_CLASS(USinglePropertyView, UPropertyViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableEditorWidgets"), NO_API) \
	DECLARE_SERIALIZER(USinglePropertyView)


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USinglePropertyView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USinglePropertyView(USinglePropertyView&&); \
	USinglePropertyView(const USinglePropertyView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USinglePropertyView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USinglePropertyView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USinglePropertyView) \
	NO_API virtual ~USinglePropertyView();


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_21_PROLOG
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLEEDITORWIDGETS_API UClass* StaticClass<class USinglePropertyView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_SinglePropertyView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
