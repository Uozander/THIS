// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetEditorAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSASSETEDITOR_PhysicsAssetEditorAnimInstance_generated_h
#error "PhysicsAssetEditorAnimInstance.generated.h already included, missing '#pragma once' in PhysicsAssetEditorAnimInstance.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetEditorAnimInstance_generated_h

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorAnimInstance(); \
	friend struct Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetEditorAnimInstance, UAnimPreviewInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorAnimInstance)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetEditorAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetEditorAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorAnimInstance(UPhysicsAssetEditorAnimInstance&&); \
	UPhysicsAssetEditorAnimInstance(const UPhysicsAssetEditorAnimInstance&); \
public: \
	NO_API virtual ~UPhysicsAssetEditorAnimInstance();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_14_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_INCLASS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSASSETEDITOR_API UClass* StaticClass<class UPhysicsAssetEditorAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
