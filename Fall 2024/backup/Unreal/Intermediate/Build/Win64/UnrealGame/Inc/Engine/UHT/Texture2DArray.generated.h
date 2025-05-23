// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture2DArray.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Texture2DArray_generated_h
#error "Texture2DArray.generated.h already included, missing '#pragma once' in Texture2DArray.h"
#endif
#define ENGINE_Texture2DArray_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2DArray, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2DArray(); \
	friend struct Z_Construct_UClass_UTexture2DArray_Statics; \
public: \
	DECLARE_CLASS(UTexture2DArray, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2DArray) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2DArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2DArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2DArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2DArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTexture2DArray(UTexture2DArray&&); \
	UTexture2DArray(const UTexture2DArray&); \
public: \
	ENGINE_API virtual ~UTexture2DArray();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture2DArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2DArray_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
