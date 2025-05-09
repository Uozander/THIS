// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Preferences/PhysicsAssetEditorOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PhysicsAssetEditorOptions_generated_h
#error "PhysicsAssetEditorOptions.generated.h already included, missing '#pragma once' in PhysicsAssetEditorOptions.h"
#endif
#define UNREALED_PhysicsAssetEditorOptions_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetEditorOptions(); \
	friend struct Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UPhysicsAssetEditorOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UPhysicsAssetEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UPhysicsAssetEditorOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetEditorOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsAssetEditorOptions(UPhysicsAssetEditorOptions&&); \
	UPhysicsAssetEditorOptions(const UPhysicsAssetEditorOptions&); \
public: \
	UNREALED_API virtual ~UPhysicsAssetEditorOptions();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_37_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_40_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPhysicsAssetEditorOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h


#define FOREACH_ENUM_EPHYSICSASSETEDITORCOLLISIONVIEWMODE(op) \
	op(EPhysicsAssetEditorCollisionViewMode::Solid) \
	op(EPhysicsAssetEditorCollisionViewMode::Wireframe) \
	op(EPhysicsAssetEditorCollisionViewMode::SolidWireframe) \
	op(EPhysicsAssetEditorCollisionViewMode::None) 

enum class EPhysicsAssetEditorCollisionViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorCollisionViewMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorCollisionViewMode>();

#define FOREACH_ENUM_EPHYSICSASSETEDITORMESHVIEWMODE(op) \
	op(EPhysicsAssetEditorMeshViewMode::Solid) \
	op(EPhysicsAssetEditorMeshViewMode::Wireframe) \
	op(EPhysicsAssetEditorMeshViewMode::None) 

enum class EPhysicsAssetEditorMeshViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorMeshViewMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorMeshViewMode>();

#define FOREACH_ENUM_EPHYSICSASSETEDITORCONSTRAINTVIEWMODE(op) \
	op(EPhysicsAssetEditorConstraintViewMode::None) \
	op(EPhysicsAssetEditorConstraintViewMode::AllPositions) \
	op(EPhysicsAssetEditorConstraintViewMode::AllLimits) 

enum class EPhysicsAssetEditorConstraintViewMode : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetEditorConstraintViewMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorConstraintViewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
