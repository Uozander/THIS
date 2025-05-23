// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetActionUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef BLUTILITY_AssetActionUtility_generated_h
#error "AssetActionUtility.generated.h already included, missing '#pragma once' in AssetActionUtility.h"
#endif
#define BLUTILITY_AssetActionUtility_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetActionSupportCondition_Statics; \
	BLUTILITY_API static class UScriptStruct* StaticStruct();


template<> BLUTILITY_API UScriptStruct* StaticStruct<struct FAssetActionSupportCondition>();

#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsActionForBlueprints_Implementation() const; \
	DECLARE_FUNCTION(execGetSupportedClasses); \
	DECLARE_FUNCTION(execIsActionForBlueprints);


#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetActionUtility(); \
	friend struct Z_Construct_UClass_UAssetActionUtility_Statics; \
public: \
	DECLARE_CLASS(UAssetActionUtility, UEditorUtilityObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAssetActionUtility) \
	virtual UObject* _getUObject() const override { return const_cast<UAssetActionUtility*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetActionUtility(UAssetActionUtility&&); \
	UAssetActionUtility(const UAssetActionUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetActionUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetActionUtility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetActionUtility) \
	NO_API virtual ~UAssetActionUtility();


#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_57_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAssetActionUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_AssetActionUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
