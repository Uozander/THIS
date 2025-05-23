// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeVirtualTextureFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALTEXTURINGEDITOR_RuntimeVirtualTextureFactory_generated_h
#error "RuntimeVirtualTextureFactory.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureFactory.h"
#endif
#define VIRTUALTEXTURINGEDITOR_RuntimeVirtualTextureFactory_generated_h

#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureFactory(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTextureFactory_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTextureFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualTexturingEditor"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureFactory)


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTextureFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTextureFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureFactory(URuntimeVirtualTextureFactory&&); \
	URuntimeVirtualTextureFactory(const URuntimeVirtualTextureFactory&); \
public: \
	NO_API virtual ~URuntimeVirtualTextureFactory();


#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_16_PROLOG
#define FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_INCLASS \
	FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALTEXTURINGEDITOR_API UClass* StaticClass<class URuntimeVirtualTextureFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VirtualTexturingEditor_Classes_RuntimeVirtualTextureFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
