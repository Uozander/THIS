// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetTools.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETTOOLS_AssetTools_generated_h
#error "AssetTools.generated.h already included, missing '#pragma once' in AssetTools.h"
#endif
#define ASSETTOOLS_AssetTools_generated_h

#define FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsImpl(); \
	friend struct Z_Construct_UClass_UAssetToolsImpl_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsImpl, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UAssetToolsImpl*>(this); }


#define FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetToolsImpl(UAssetToolsImpl&&); \
	UAssetToolsImpl(const UAssetToolsImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsImpl) \
	NO_API virtual ~UAssetToolsImpl();


#define FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h_60_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetToolsImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AssetTools_Private_AssetTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
