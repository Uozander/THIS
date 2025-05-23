// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ReflectionCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReflectionCapture_generated_h
#error "ReflectionCapture.generated.h already included, missing '#pragma once' in ReflectionCapture.h"
#endif
#define ENGINE_ReflectionCapture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAReflectionCapture(); \
	friend struct Z_Construct_UClass_AReflectionCapture_Statics; \
public: \
	DECLARE_CLASS(AReflectionCapture, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AReflectionCapture)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AReflectionCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReflectionCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AReflectionCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReflectionCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AReflectionCapture(AReflectionCapture&&); \
	AReflectionCapture(const AReflectionCapture&); \
public: \
	ENGINE_API virtual ~AReflectionCapture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AReflectionCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
