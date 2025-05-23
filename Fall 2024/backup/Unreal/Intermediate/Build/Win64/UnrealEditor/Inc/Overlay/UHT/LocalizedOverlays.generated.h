// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalizedOverlays.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVERLAY_LocalizedOverlays_generated_h
#error "LocalizedOverlays.generated.h already included, missing '#pragma once' in LocalizedOverlays.h"
#endif
#define OVERLAY_LocalizedOverlays_generated_h

#define FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalizedOverlays(); \
	friend struct Z_Construct_UClass_ULocalizedOverlays_Statics; \
public: \
	DECLARE_CLASS(ULocalizedOverlays, UOverlays, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Overlay"), OVERLAY_API) \
	DECLARE_SERIALIZER(ULocalizedOverlays)


#define FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OVERLAY_API ULocalizedOverlays(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalizedOverlays(ULocalizedOverlays&&); \
	ULocalizedOverlays(const ULocalizedOverlays&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OVERLAY_API, ULocalizedOverlays); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizedOverlays); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizedOverlays) \
	OVERLAY_API virtual ~ULocalizedOverlays();


#define FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_28_PROLOG
#define FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OVERLAY_API UClass* StaticClass<class ULocalizedOverlays>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
