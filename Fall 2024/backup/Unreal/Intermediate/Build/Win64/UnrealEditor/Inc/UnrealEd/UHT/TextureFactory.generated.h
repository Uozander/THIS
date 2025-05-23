// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/TextureFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef UNREALED_TextureFactory_generated_h
#error "TextureFactory.generated.h already included, missing '#pragma once' in TextureFactory.h"
#endif
#define UNREALED_TextureFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUTextureFactory(); \
	friend struct Z_Construct_UClass_UTextureFactory_Statics; \
public: \
	DECLARE_CLASS(UTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UTextureFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_52_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureFactory(UTextureFactory&&); \
	UTextureFactory(const UTextureFactory&); \
public: \
	UNREALED_API virtual ~UTextureFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_49_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_52_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTextureFactory>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeUDIMVirtualTextureFromTexture2Ds);


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_INCLASS \
private: \
	static void StaticRegisterNativesUUDIMTextureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUDIMTextureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUDIMTextureFunctionLibrary)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDIMTextureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDIMTextureFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDIMTextureFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDIMTextureFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUDIMTextureFunctionLibrary(UUDIMTextureFunctionLibrary&&); \
	UUDIMTextureFunctionLibrary(const UUDIMTextureFunctionLibrary&); \
public: \
	NO_API virtual ~UUDIMTextureFunctionLibrary();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_265_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_268_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUDIMTextureFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h


#define FOREACH_ENUM_ETEXTURESOURCECOLORSPACE(op) \
	op(ETextureSourceColorSpace::Auto) \
	op(ETextureSourceColorSpace::Linear) \
	op(ETextureSourceColorSpace::SRGB) 

enum class ETextureSourceColorSpace;
template<> struct TIsUEnumClass<ETextureSourceColorSpace> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ETextureSourceColorSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
