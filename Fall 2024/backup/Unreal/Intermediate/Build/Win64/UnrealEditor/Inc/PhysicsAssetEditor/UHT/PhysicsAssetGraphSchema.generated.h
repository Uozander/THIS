// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetGraph/PhysicsAssetGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSASSETEDITOR_PhysicsAssetGraphSchema_generated_h
#error "PhysicsAssetGraphSchema.generated.h already included, missing '#pragma once' in PhysicsAssetGraphSchema.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetGraphSchema_generated_h

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetGraphSchema(); \
	friend struct Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsAssetGraphSchema)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsAssetGraphSchema(UPhysicsAssetGraphSchema&&); \
	UPhysicsAssetGraphSchema(const UPhysicsAssetGraphSchema&); \
public: \
	NO_API virtual ~UPhysicsAssetGraphSchema();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_17_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_20_INCLASS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSASSETEDITOR_API UClass* StaticClass<class UPhysicsAssetGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
