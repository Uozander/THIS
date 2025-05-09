// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetPaletteFavorites.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetPaletteFavorites_generated_h
#error "WidgetPaletteFavorites.generated.h already included, missing '#pragma once' in WidgetPaletteFavorites.h"
#endif
#define UMGEDITOR_WidgetPaletteFavorites_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetPaletteFavorites(); \
	friend struct Z_Construct_UClass_UWidgetPaletteFavorites_Statics; \
public: \
	DECLARE_CLASS(UWidgetPaletteFavorites, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetPaletteFavorites) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetPaletteFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetPaletteFavorites) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetPaletteFavorites); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetPaletteFavorites); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetPaletteFavorites(UWidgetPaletteFavorites&&); \
	UWidgetPaletteFavorites(const UWidgetPaletteFavorites&); \
public: \
	NO_API virtual ~UWidgetPaletteFavorites();


#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_13_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_16_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetPaletteFavorites>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
