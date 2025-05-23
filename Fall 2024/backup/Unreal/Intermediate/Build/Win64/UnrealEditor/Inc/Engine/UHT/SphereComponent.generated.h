// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SphereComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SphereComponent_generated_h
#error "SphereComponent.generated.h already included, missing '#pragma once' in SphereComponent.h"
#endif
#define ENGINE_SphereComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetShapeScale); \
	DECLARE_FUNCTION(execGetUnscaledSphereRadius); \
	DECLARE_FUNCTION(execGetScaledSphereRadius); \
	DECLARE_FUNCTION(execSetSphereRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSphereComponent(); \
	friend struct Z_Construct_UClass_USphereComponent_Statics; \
public: \
	DECLARE_CLASS(USphereComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USphereComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USphereComponent(USphereComponent&&); \
	USphereComponent(const USphereComponent&); \
public: \
	ENGINE_API virtual ~USphereComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USphereComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
