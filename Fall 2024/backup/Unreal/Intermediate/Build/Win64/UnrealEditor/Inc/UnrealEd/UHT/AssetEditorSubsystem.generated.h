// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/AssetEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAssetTypeActivationOpenedMethod : uint8;
#ifdef UNREALED_AssetEditorSubsystem_generated_h
#error "AssetEditorSubsystem.generated.h already included, missing '#pragma once' in AssetEditorSubsystem.h"
#endif
#define UNREALED_AssetEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseAllEditorsForAsset); \
	DECLARE_FUNCTION(execOpenEditorForAssets);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditorSubsystem(); \
	friend struct Z_Construct_UClass_UAssetEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAssetEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAssetEditorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetEditorSubsystem(UAssetEditorSubsystem&&); \
	UAssetEditorSubsystem(const UAssetEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetEditorSubsystem) \
	UNREALED_API virtual ~UAssetEditorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_104_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
