// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/CurveEditorBakeFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITOR_CurveEditorBakeFilter_generated_h
#error "CurveEditorBakeFilter.generated.h already included, missing '#pragma once' in CurveEditorBakeFilter.h"
#endif
#define CURVEEDITOR_CurveEditorBakeFilter_generated_h

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveEditorBakeFilterRange_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


template<> CURVEEDITOR_API UScriptStruct* StaticStruct<struct FCurveEditorBakeFilterRange>();

#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorBakeFilter(); \
	friend struct Z_Construct_UClass_UCurveEditorBakeFilter_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorBakeFilter, UCurveEditorFilterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurveEditor"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorBakeFilter)


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveEditorBakeFilter(UCurveEditorBakeFilter&&); \
	UCurveEditorBakeFilter(const UCurveEditorBakeFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorBakeFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorBakeFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorBakeFilter) \
	NO_API virtual ~UCurveEditorBakeFilter();


#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_33_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURVEEDITOR_API UClass* StaticClass<class UCurveEditorBakeFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorBakeFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
