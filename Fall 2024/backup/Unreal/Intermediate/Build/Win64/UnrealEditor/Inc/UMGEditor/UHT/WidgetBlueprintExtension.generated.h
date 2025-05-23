// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetBlueprintExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetBlueprintExtension_generated_h
#error "WidgetBlueprintExtension.generated.h already included, missing '#pragma once' in WidgetBlueprintExtension.h"
#endif
#define UMGEDITOR_WidgetBlueprintExtension_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintExtension(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintExtension_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintExtension, UBlueprintExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintExtension) \
	DECLARE_WITHIN(UWidgetBlueprint)


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetBlueprintExtension(UWidgetBlueprintExtension&&); \
	UWidgetBlueprintExtension(const UWidgetBlueprintExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintExtension) \
	NO_API virtual ~UWidgetBlueprintExtension();


#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_17_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetBlueprintExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
