// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ILandscapeSplineInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_ILandscapeSplineInterface_generated_h
#error "ILandscapeSplineInterface.generated.h already included, missing '#pragma once' in ILandscapeSplineInterface.h"
#endif
#define LANDSCAPE_ILandscapeSplineInterface_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeSplineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeSplineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeSplineInterface(ULandscapeSplineInterface&&); \
	ULandscapeSplineInterface(const ULandscapeSplineInterface&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeSplineInterface();


#define FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULandscapeSplineInterface(); \
	friend struct Z_Construct_UClass_ULandscapeSplineInterface_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSplineInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeSplineInterface)


#define FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ILandscapeSplineInterface() {} \
public: \
	typedef ULandscapeSplineInterface UClassType; \
	typedef ILandscapeSplineInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSplineInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_ILandscapeSplineInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
