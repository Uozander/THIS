// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Toolkits/AssetEditorToolkitMenuContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UNREALED_AssetEditorToolkitMenuContext_generated_h
#error "AssetEditorToolkitMenuContext.generated.h already included, missing '#pragma once' in AssetEditorToolkitMenuContext.h"
#endif
#define UNREALED_AssetEditorToolkitMenuContext_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEditingObjects);


#define FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditorToolkitMenuContext(); \
	friend struct Z_Construct_UClass_UAssetEditorToolkitMenuContext_Statics; \
public: \
	DECLARE_CLASS(UAssetEditorToolkitMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UAssetEditorToolkitMenuContext)


#define FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UAssetEditorToolkitMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetEditorToolkitMenuContext(UAssetEditorToolkitMenuContext&&); \
	UAssetEditorToolkitMenuContext(const UAssetEditorToolkitMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetEditorToolkitMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorToolkitMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetEditorToolkitMenuContext) \
	UNREALED_API virtual ~UAssetEditorToolkitMenuContext();


#define FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetEditorToolkitMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Toolkits_AssetEditorToolkitMenuContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
