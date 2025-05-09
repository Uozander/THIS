// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALBAKING_MaterialOptions_generated_h
#error "MaterialOptions.generated.h already included, missing '#pragma once' in MaterialOptions.h"
#endif
#define MATERIALBAKING_MaterialOptions_generated_h

#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyEntry_Statics; \
	MATERIALBAKING_API static class UScriptStruct* StaticStruct();


template<> MATERIALBAKING_API UScriptStruct* StaticStruct<struct FPropertyEntry>();

#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialOptions(); \
	friend struct Z_Construct_UClass_UMaterialOptions_Statics; \
public: \
	DECLARE_CLASS(UMaterialOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialBaking"), NO_API) \
	DECLARE_SERIALIZER(UMaterialOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialOptions(UMaterialOptions&&); \
	UMaterialOptions(const UMaterialOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialOptions) \
	NO_API virtual ~UMaterialOptions();


#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_63_PROLOG
#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALBAKING_API UClass* StaticClass<class UMaterialOptions>();

#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetBakeOptions(); \
	friend struct Z_Construct_UClass_UAssetBakeOptions_Statics; \
public: \
	DECLARE_CLASS(UAssetBakeOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialBaking"), NO_API) \
	DECLARE_SERIALIZER(UAssetBakeOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetBakeOptions(UAssetBakeOptions&&); \
	UAssetBakeOptions(const UAssetBakeOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetBakeOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetBakeOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetBakeOptions) \
	NO_API virtual ~UAssetBakeOptions();


#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_103_PROLOG
#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALBAKING_API UClass* StaticClass<class UAssetBakeOptions>();

#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialMergeOptions(); \
	friend struct Z_Construct_UClass_UMaterialMergeOptions_Statics; \
public: \
	DECLARE_CLASS(UMaterialMergeOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialBaking"), NO_API) \
	DECLARE_SERIALIZER(UMaterialMergeOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_118_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialMergeOptions(UMaterialMergeOptions&&); \
	UMaterialMergeOptions(const UMaterialMergeOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialMergeOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialMergeOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialMergeOptions) \
	NO_API virtual ~UMaterialMergeOptions();


#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_115_PROLOG
#define FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALBAKING_API UClass* StaticClass<class UMaterialMergeOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_MaterialBaking_Public_MaterialOptions_h


#define FOREACH_ENUM_EMATERIALBAKEMETHOD(op) \
	op(EMaterialBakeMethod::IndividualMaterial) \
	op(EMaterialBakeMethod::AtlasMaterial) \
	op(EMaterialBakeMethod::BinnedMaterial) 

enum class EMaterialBakeMethod : uint8;
template<> struct TIsUEnumClass<EMaterialBakeMethod> { enum { Value = true }; };
template<> MATERIALBAKING_API UEnum* StaticEnum<EMaterialBakeMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
