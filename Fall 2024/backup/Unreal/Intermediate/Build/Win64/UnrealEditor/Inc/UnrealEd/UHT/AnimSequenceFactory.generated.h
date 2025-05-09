// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AnimSequenceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AnimSequenceFactory_generated_h
#error "AnimSequenceFactory.generated.h already included, missing '#pragma once' in AnimSequenceFactory.h"
#endif
#define UNREALED_AnimSequenceFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceFactory(); \
	friend struct Z_Construct_UClass_UAnimSequenceFactory_Statics; \
public: \
	DECLARE_CLASS(UAnimSequenceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAnimSequenceFactory)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAnimSequenceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAnimSequenceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimSequenceFactory(UAnimSequenceFactory&&); \
	UAnimSequenceFactory(const UAnimSequenceFactory&); \
public: \
	UNREALED_API virtual ~UAnimSequenceFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAnimSequenceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimSequenceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
