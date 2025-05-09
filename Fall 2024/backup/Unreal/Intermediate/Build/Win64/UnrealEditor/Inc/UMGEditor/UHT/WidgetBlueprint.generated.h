// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetBlueprint_generated_h
#error "WidgetBlueprint.generated.h already included, missing '#pragma once' in WidgetBlueprint.h"
#endif
#define UMGEDITOR_WidgetBlueprint_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FEditorPropertyPathSegment>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorPropertyPath_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FEditorPropertyPath>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FDelegateEditorBinding>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FWidgetAnimation_DEPRECATED>();

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprint, NO_API)


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprint(); \
	friend struct Z_Construct_UClass_UWidgetBlueprint_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprint, UBaseWidgetBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprint) \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetBlueprint(UWidgetBlueprint&&); \
	UWidgetBlueprint(const UWidgetBlueprint&); \
public: \
	NO_API virtual ~UWidgetBlueprint();


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_243_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h


#define FOREACH_ENUM_EWIDGETSUPPORTSDYNAMICCREATION(op) \
	op(EWidgetSupportsDynamicCreation::Default) \
	op(EWidgetSupportsDynamicCreation::Yes) \
	op(EWidgetSupportsDynamicCreation::No) 

enum class EWidgetSupportsDynamicCreation : uint8;
template<> struct TIsUEnumClass<EWidgetSupportsDynamicCreation> { enum { Value = true }; };
template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetSupportsDynamicCreation>();

#define FOREACH_ENUM_ETHUMBNAILPREVIEWSIZEMODE(op) \
	op(EThumbnailPreviewSizeMode::MatchDesignerMode) \
	op(EThumbnailPreviewSizeMode::FillScreen) \
	op(EThumbnailPreviewSizeMode::Custom) \
	op(EThumbnailPreviewSizeMode::Desired) 

enum class EThumbnailPreviewSizeMode : uint8;
template<> struct TIsUEnumClass<EThumbnailPreviewSizeMode> { enum { Value = true }; };
template<> UMGEDITOR_API UEnum* StaticEnum<EThumbnailPreviewSizeMode>();

#define FOREACH_ENUM_EWIDGETCOMPILETIMETICKPREDICTION(op) \
	op(EWidgetCompileTimeTickPrediction::WontTick) \
	op(EWidgetCompileTimeTickPrediction::OnDemand) \
	op(EWidgetCompileTimeTickPrediction::WillTick) 

enum class EWidgetCompileTimeTickPrediction : uint8;
template<> struct TIsUEnumClass<EWidgetCompileTimeTickPrediction> { enum { Value = true }; };
template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetCompileTimeTickPrediction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
