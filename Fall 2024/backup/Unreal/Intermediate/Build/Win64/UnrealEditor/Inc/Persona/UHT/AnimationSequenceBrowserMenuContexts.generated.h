// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSequenceBrowserMenuContexts.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef PERSONA_AnimationSequenceBrowserMenuContexts_generated_h
#error "AnimationSequenceBrowserMenuContexts.generated.h already included, missing '#pragma once' in AnimationSequenceBrowserMenuContexts.h"
#endif
#define PERSONA_AnimationSequenceBrowserMenuContexts_generated_h

#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedObjects);


#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSequenceBrowserContextMenuContext(); \
	friend struct Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UAnimationSequenceBrowserContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSequenceBrowserContextMenuContext)


#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSequenceBrowserContextMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationSequenceBrowserContextMenuContext(UAnimationSequenceBrowserContextMenuContext&&); \
	UAnimationSequenceBrowserContextMenuContext(const UAnimationSequenceBrowserContextMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSequenceBrowserContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSequenceBrowserContextMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSequenceBrowserContextMenuContext) \
	NO_API virtual ~UAnimationSequenceBrowserContextMenuContext();


#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_13_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONA_API UClass* StaticClass<class UAnimationSequenceBrowserContextMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
