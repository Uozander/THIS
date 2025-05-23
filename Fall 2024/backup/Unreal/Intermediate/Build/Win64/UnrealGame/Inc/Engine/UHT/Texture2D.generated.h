// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSharedImageConstRefBlueprint;
#ifdef ENGINE_Texture2D_generated_h
#error "Texture2D.generated.h already included, missing '#pragma once' in Texture2D.h"
#endif
#define ENGINE_Texture2D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBlueprint_GetSizeY); \
	DECLARE_FUNCTION(execBlueprint_GetSizeX); \
	DECLARE_FUNCTION(execBlueprint_GetCPUCopy);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2D, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2D(); \
	friend struct Z_Construct_UClass_UTexture2D_Statics; \
public: \
	DECLARE_CLASS(UTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTexture2D(UTexture2D&&); \
	UTexture2D(const UTexture2D&); \
public: \
	ENGINE_API virtual ~UTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
