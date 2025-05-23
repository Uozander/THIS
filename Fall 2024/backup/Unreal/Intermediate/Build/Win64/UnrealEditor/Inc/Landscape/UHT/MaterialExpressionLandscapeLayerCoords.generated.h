// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeLayerCoords.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h
#error "MaterialExpressionLandscapeLayerCoords.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerCoords.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLandscapeLayerCoords, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerCoords)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeLayerCoords(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerCoords) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeLayerCoords); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerCoords); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeLayerCoords(UMaterialExpressionLandscapeLayerCoords&&); \
	UMaterialExpressionLandscapeLayerCoords(const UMaterialExpressionLandscapeLayerCoords&); \
public: \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeLayerCoords();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class UMaterialExpressionLandscapeLayerCoords>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h


#define FOREACH_ENUM_ETERRAINCOORDMAPPINGTYPE(op) \
	op(TCMT_Auto) \
	op(TCMT_XY) \
	op(TCMT_XZ) \
	op(TCMT_YZ) 

enum ETerrainCoordMappingType : int;
template<> LANDSCAPE_API UEnum* StaticEnum<ETerrainCoordMappingType>();

#define FOREACH_ENUM_ELANDSCAPECUSTOMIZEDCOORDTYPE(op) \
	op(LCCT_None) \
	op(LCCT_CustomUV0) \
	op(LCCT_CustomUV1) \
	op(LCCT_CustomUV2) \
	op(LCCT_WeightMapUV) 

enum ELandscapeCustomizedCoordType : int;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeCustomizedCoordType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
