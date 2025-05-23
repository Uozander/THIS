// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/DialogueSoundWaveProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DialogueSoundWaveProxy_generated_h
#error "DialogueSoundWaveProxy.generated.h already included, missing '#pragma once' in DialogueSoundWaveProxy.h"
#endif
#define ENGINE_DialogueSoundWaveProxy_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueSoundWaveProxy(); \
	friend struct Z_Construct_UClass_UDialogueSoundWaveProxy_Statics; \
public: \
	DECLARE_CLASS(UDialogueSoundWaveProxy, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDialogueSoundWaveProxy)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueSoundWaveProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueSoundWaveProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueSoundWaveProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueSoundWaveProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueSoundWaveProxy(UDialogueSoundWaveProxy&&); \
	UDialogueSoundWaveProxy(const UDialogueSoundWaveProxy&); \
public: \
	NO_API virtual ~UDialogueSoundWaveProxy();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDialogueSoundWaveProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueSoundWaveProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
