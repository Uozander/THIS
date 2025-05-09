// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementDetailsInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SMInstanceElementDetailsInterface_generated_h
#error "SMInstanceElementDetailsInterface.generated.h already included, missing '#pragma once' in SMInstanceElementDetailsInterface.h"
#endif
#define UNREALED_SMInstanceElementDetailsInterface_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementDetailsInterface(); \
	friend struct Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics; \
public: \
	DECLARE_CLASS(USMInstanceElementDetailsInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USMInstanceElementDetailsInterface) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstanceElementDetailsInterface*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USMInstanceElementDetailsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USMInstanceElementDetailsInterface(USMInstanceElementDetailsInterface&&); \
	USMInstanceElementDetailsInterface(const USMInstanceElementDetailsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USMInstanceElementDetailsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementDetailsInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementDetailsInterface) \
	UNREALED_API virtual ~USMInstanceElementDetailsInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USMInstanceElementDetailsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
