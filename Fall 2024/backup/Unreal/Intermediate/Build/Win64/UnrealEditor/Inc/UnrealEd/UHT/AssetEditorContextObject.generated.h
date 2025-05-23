// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AssetEditorContextObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_AssetEditorContextObject_generated_h
#error "AssetEditorContextObject.generated.h already included, missing '#pragma once' in AssetEditorContextObject.h"
#endif
#define UNREALED_AssetEditorContextObject_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditorContextObject(); \
	friend struct Z_Construct_UClass_UAssetEditorContextObject_Statics; \
public: \
	DECLARE_CLASS(UAssetEditorContextObject, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetEditorContextObject) \
	virtual UObject* _getUObject() const override { return const_cast<UAssetEditorContextObject*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetEditorContextObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetEditorContextObject(UAssetEditorContextObject&&); \
	UAssetEditorContextObject(const UAssetEditorContextObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetEditorContextObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorContextObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetEditorContextObject) \
	NO_API virtual ~UAssetEditorContextObject();


#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetEditorContextObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_Tools_AssetEditorContextObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
