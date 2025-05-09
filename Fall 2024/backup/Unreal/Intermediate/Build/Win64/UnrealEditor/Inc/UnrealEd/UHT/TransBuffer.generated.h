// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/TransBuffer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_TransBuffer_generated_h
#error "TransBuffer.generated.h already included, missing '#pragma once' in TransBuffer.h"
#endif
#define UNREALED_TransBuffer_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTransBuffer, UNREALED_API)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransBuffer(); \
	friend struct Z_Construct_UClass_UTransBuffer_Statics; \
public: \
	DECLARE_CLASS(UTransBuffer, UTransactor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UTransBuffer) \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UTransBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransBuffer(UTransBuffer&&); \
	UTransBuffer(const UTransBuffer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UTransBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransBuffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransBuffer) \
	UNREALED_API virtual ~UTransBuffer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTransBuffer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
