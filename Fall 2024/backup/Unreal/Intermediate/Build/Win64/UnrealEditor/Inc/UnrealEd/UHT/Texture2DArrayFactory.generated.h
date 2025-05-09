// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/Texture2DArrayFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_Texture2DArrayFactory_generated_h
#error "Texture2DArrayFactory.generated.h already included, missing '#pragma once' in Texture2DArrayFactory.h"
#endif
#define UNREALED_Texture2DArrayFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2DArrayFactory(); \
	friend struct Z_Construct_UClass_UTexture2DArrayFactory_Statics; \
public: \
	DECLARE_CLASS(UTexture2DArrayFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UTexture2DArrayFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTexture2DArrayFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2DArrayFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTexture2DArrayFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2DArrayFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTexture2DArrayFactory(UTexture2DArrayFactory&&); \
	UTexture2DArrayFactory(const UTexture2DArrayFactory&); \
public: \
	UNREALED_API virtual ~UTexture2DArrayFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTexture2DArrayFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
