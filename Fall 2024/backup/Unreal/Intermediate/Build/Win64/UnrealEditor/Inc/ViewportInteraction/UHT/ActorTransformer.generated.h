// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTransformer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_ActorTransformer_generated_h
#error "ActorTransformer.generated.h already included, missing '#pragma once' in ActorTransformer.h"
#endif
#define VIEWPORTINTERACTION_ActorTransformer_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTransformer(); \
	friend struct Z_Construct_UClass_UActorTransformer_Statics; \
public: \
	DECLARE_CLASS(UActorTransformer, UViewportTransformer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UActorTransformer)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorTransformer(UActorTransformer&&); \
	UActorTransformer(const UActorTransformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTransformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTransformer) \
	NO_API virtual ~UActorTransformer();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_9_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UActorTransformer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ActorTransformer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
