// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebBrowserTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBBROWSERTEXTURE_WebBrowserTexture_generated_h
#error "WebBrowserTexture.generated.h already included, missing '#pragma once' in WebBrowserTexture.h"
#endif
#define WEBBROWSERTEXTURE_WebBrowserTexture_generated_h

#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUWebBrowserTexture(); \
	friend struct Z_Construct_UClass_UWebBrowserTexture_Statics; \
public: \
	DECLARE_CLASS(UWebBrowserTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebBrowserTexture"), NO_API) \
	DECLARE_SERIALIZER(UWebBrowserTexture)


#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebBrowserTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebBrowserTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebBrowserTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebBrowserTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWebBrowserTexture(UWebBrowserTexture&&); \
	UWebBrowserTexture(const UWebBrowserTexture&); \
public: \
	NO_API virtual ~UWebBrowserTexture();


#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_23_PROLOG
#define FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_INCLASS \
	FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBBROWSERTEXTURE_API UClass* StaticClass<class UWebBrowserTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
