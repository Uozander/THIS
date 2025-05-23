// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetGraphSchema_generated_h
#error "WidgetGraphSchema.generated.h already included, missing '#pragma once' in WidgetGraphSchema.h"
#endif
#define UMGEDITOR_WidgetGraphSchema_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetGraphSchema(); \
	friend struct Z_Construct_UClass_UWidgetGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UWidgetGraphSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), UMGEDITOR_API) \
	DECLARE_SERIALIZER(UWidgetGraphSchema)


#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API UWidgetGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, UWidgetGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetGraphSchema(UWidgetGraphSchema&&); \
	UWidgetGraphSchema(const UWidgetGraphSchema&); \
public: \
	UMGEDITOR_API virtual ~UWidgetGraphSchema();


#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_13_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_16_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
