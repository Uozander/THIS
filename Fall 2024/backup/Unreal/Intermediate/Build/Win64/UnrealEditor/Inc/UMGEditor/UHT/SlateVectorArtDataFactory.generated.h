// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateVectorArtDataFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_SlateVectorArtDataFactory_generated_h
#error "SlateVectorArtDataFactory.generated.h already included, missing '#pragma once' in SlateVectorArtDataFactory.h"
#endif
#define UMGEDITOR_SlateVectorArtDataFactory_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSlateVectorArtDataFactory(); \
	friend struct Z_Construct_UClass_USlateVectorArtDataFactory_Statics; \
public: \
	DECLARE_CLASS(USlateVectorArtDataFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGEditor"), UMGEDITOR_API) \
	DECLARE_SERIALIZER(USlateVectorArtDataFactory)


#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMGEDITOR_API USlateVectorArtDataFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateVectorArtDataFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGEDITOR_API, USlateVectorArtDataFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateVectorArtDataFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateVectorArtDataFactory(USlateVectorArtDataFactory&&); \
	USlateVectorArtDataFactory(const USlateVectorArtDataFactory&); \
public: \
	UMGEDITOR_API virtual ~USlateVectorArtDataFactory();


#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class USlateVectorArtDataFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_SlateVectorArtDataFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
