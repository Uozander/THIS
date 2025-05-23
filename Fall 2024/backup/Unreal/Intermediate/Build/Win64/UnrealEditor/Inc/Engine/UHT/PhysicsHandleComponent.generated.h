// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsHandleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef ENGINE_PhysicsHandleComponent_generated_h
#error "PhysicsHandleComponent.generated.h already included, missing '#pragma once' in PhysicsHandleComponent.h"
#endif
#define ENGINE_PhysicsHandleComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetInterpolationSpeed); \
	DECLARE_FUNCTION(execSetAngularStiffness); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execSetLinearStiffness); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetTargetLocationAndRotation); \
	DECLARE_FUNCTION(execSetTargetLocationAndRotation); \
	DECLARE_FUNCTION(execSetTargetRotation); \
	DECLARE_FUNCTION(execSetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabbedComponent); \
	DECLARE_FUNCTION(execReleaseComponent); \
	DECLARE_FUNCTION(execGrabComponentAtLocationWithRotation); \
	DECLARE_FUNCTION(execGrabComponentAtLocation); \
	DECLARE_FUNCTION(execGrabComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsHandleComponent(); \
	friend struct Z_Construct_UClass_UPhysicsHandleComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsHandleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsHandleComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsHandleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsHandleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsHandleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsHandleComponent(UPhysicsHandleComponent&&); \
	UPhysicsHandleComponent(const UPhysicsHandleComponent&); \
public: \
	ENGINE_API virtual ~UPhysicsHandleComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsHandleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsHandleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
