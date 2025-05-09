// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingAssetFactoryInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMEDITORINTERFACE_ClothingAssetFactoryInterface_generated_h
#error "ClothingAssetFactoryInterface.generated.h already included, missing '#pragma once' in ClothingAssetFactoryInterface.h"
#endif
#define CLOTHINGSYSTEMEDITORINTERFACE_ClothingAssetFactoryInterface_generated_h

#define FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetFactoryBase(); \
	friend struct Z_Construct_UClass_UClothingAssetFactoryBase_Statics; \
public: \
	DECLARE_CLASS(UClothingAssetFactoryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemEditorInterface"), NO_API) \
	DECLARE_SERIALIZER(UClothingAssetFactoryBase)


#define FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothingAssetFactoryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClothingAssetFactoryBase(UClothingAssetFactoryBase&&); \
	UClothingAssetFactoryBase(const UClothingAssetFactoryBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothingAssetFactoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetFactoryBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetFactoryBase) \
	NO_API virtual ~UClothingAssetFactoryBase();


#define FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_31_PROLOG
#define FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMEDITORINTERFACE_API UClass* StaticClass<class UClothingAssetFactoryBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
