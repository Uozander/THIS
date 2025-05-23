// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractionAssetContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_ViewportInteractionAssetContainer_generated_h
#error "ViewportInteractionAssetContainer.generated.h already included, missing '#pragma once' in ViewportInteractionAssetContainer.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractionAssetContainer_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportInteractionAssetContainer(); \
	friend struct Z_Construct_UClass_UViewportInteractionAssetContainer_Statics; \
public: \
	DECLARE_CLASS(UViewportInteractionAssetContainer, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportInteractionAssetContainer)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportInteractionAssetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewportInteractionAssetContainer(UViewportInteractionAssetContainer&&); \
	UViewportInteractionAssetContainer(const UViewportInteractionAssetContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportInteractionAssetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractionAssetContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractionAssetContainer) \
	NO_API virtual ~UViewportInteractionAssetContainer();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h_16_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportInteractionAssetContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionAssetContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
