// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/CompositeFont.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_CompositeFont_generated_h
#error "CompositeFont.generated.h already included, missing '#pragma once' in CompositeFont.h"
#endif
#define SLATECORE_CompositeFont_generated_h

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontData_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FFontData>();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_308_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypefaceEntry_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FTypefaceEntry>();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_341_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypeface_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FTypeface>();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_369_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FCompositeFallbackFont>();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_390_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeSubFont_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FCompositeFallbackFont Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FCompositeSubFont>();

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_415_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeFont_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FCompositeFont>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h


#define FOREACH_ENUM_EFONTHINTING(op) \
	op(EFontHinting::Default) \
	op(EFontHinting::Auto) \
	op(EFontHinting::AutoLight) \
	op(EFontHinting::Monochrome) \
	op(EFontHinting::None) 

enum class EFontHinting : uint8;
template<> struct TIsUEnumClass<EFontHinting> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EFontHinting>();

#define FOREACH_ENUM_EFONTLOADINGPOLICY(op) \
	op(EFontLoadingPolicy::LazyLoad) \
	op(EFontLoadingPolicy::Stream) \
	op(EFontLoadingPolicy::Inline) 

enum class EFontLoadingPolicy : uint8;
template<> struct TIsUEnumClass<EFontLoadingPolicy> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EFontLoadingPolicy>();

#define FOREACH_ENUM_EFONTLAYOUTMETHOD(op) \
	op(EFontLayoutMethod::Metrics) \
	op(EFontLayoutMethod::BoundingBox) 

enum class EFontLayoutMethod : uint8;
template<> struct TIsUEnumClass<EFontLayoutMethod> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EFontLayoutMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
