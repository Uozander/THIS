// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BasicOverlaysFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVERLAYEDITOR_BasicOverlaysFactory_generated_h
#error "BasicOverlaysFactory.generated.h already included, missing '#pragma once' in BasicOverlaysFactory.h"
#endif
#define OVERLAYEDITOR_BasicOverlaysFactory_generated_h

#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBasicOverlaysFactory(); \
	friend struct Z_Construct_UClass_UBasicOverlaysFactory_Statics; \
public: \
	DECLARE_CLASS(UBasicOverlaysFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OverlayEditor"), NO_API) \
	DECLARE_SERIALIZER(UBasicOverlaysFactory)


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicOverlaysFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicOverlaysFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicOverlaysFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicOverlaysFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicOverlaysFactory(UBasicOverlaysFactory&&); \
	UBasicOverlaysFactory(const UBasicOverlaysFactory&); \
public: \
	NO_API virtual ~UBasicOverlaysFactory();


#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_INCLASS \
	FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVERLAYEDITOR_API UClass* StaticClass<class UBasicOverlaysFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
