// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DetailsView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTABLEEDITORWIDGETS_DetailsView_generated_h
#error "DetailsView.generated.h already included, missing '#pragma once' in DetailsView.h"
#endif
#define SCRIPTABLEEDITORWIDGETS_DetailsView_generated_h

#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailsView(); \
	friend struct Z_Construct_UClass_UDetailsView_Statics; \
public: \
	DECLARE_CLASS(UDetailsView, UPropertyViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableEditorWidgets"), NO_API) \
	DECLARE_SERIALIZER(UDetailsView)


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailsView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDetailsView(UDetailsView&&); \
	UDetailsView(const UDetailsView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailsView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailsView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailsView) \
	NO_API virtual ~UDetailsView();


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_25_PROLOG
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLEEDITORWIDGETS_API UClass* StaticClass<class UDetailsView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
