// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISoundfieldEndpoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_ISoundfieldEndpoint_generated_h
#error "ISoundfieldEndpoint.generated.h already included, missing '#pragma once' in ISoundfieldEndpoint.h"
#endif
#define AUDIOEXTENSIONS_ISoundfieldEndpoint_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSettingsBase(); \
	friend struct Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics; \
public: \
	DECLARE_CLASS(USoundfieldEndpointSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), AUDIOEXTENSIONS_API) \
	DECLARE_SERIALIZER(USoundfieldEndpointSettingsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API USoundfieldEndpointSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundfieldEndpointSettingsBase(USoundfieldEndpointSettingsBase&&); \
	USoundfieldEndpointSettingsBase(const USoundfieldEndpointSettingsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, USoundfieldEndpointSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSettingsBase) \
	AUDIOEXTENSIONS_API virtual ~USoundfieldEndpointSettingsBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_50_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class USoundfieldEndpointSettingsBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
