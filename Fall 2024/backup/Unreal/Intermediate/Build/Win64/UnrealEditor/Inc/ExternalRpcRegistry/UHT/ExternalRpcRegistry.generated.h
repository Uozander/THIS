// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExternalRpcRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXTERNALRPCREGISTRY_ExternalRpcRegistry_generated_h
#error "ExternalRpcRegistry.generated.h already included, missing '#pragma once' in ExternalRpcRegistry.h"
#endif
#define EXTERNALRPCREGISTRY_ExternalRpcRegistry_generated_h

#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExternalRpcArgumentDesc_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


template<> EXTERNALRPCREGISTRY_API UScriptStruct* StaticStruct<struct FExternalRpcArgumentDesc>();

#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExternalRouteInfo_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


template<> EXTERNALRPCREGISTRY_API UScriptStruct* StaticStruct<struct FExternalRouteInfo>();

#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExternalRouteDesc_Statics; \
	EXTERNALRPCREGISTRY_API static class UScriptStruct* StaticStruct();


template<> EXTERNALRPCREGISTRY_API UScriptStruct* StaticStruct<struct FExternalRouteDesc>();

#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalRpcRegistry(); \
	friend struct Z_Construct_UClass_UExternalRpcRegistry_Statics; \
public: \
	DECLARE_CLASS(UExternalRpcRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ExternalRpcRegistry"), EXTERNALRPCREGISTRY_API) \
	DECLARE_SERIALIZER(UExternalRpcRegistry)


#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXTERNALRPCREGISTRY_API UExternalRpcRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExternalRpcRegistry(UExternalRpcRegistry&&); \
	UExternalRpcRegistry(const UExternalRpcRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXTERNALRPCREGISTRY_API, UExternalRpcRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalRpcRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalRpcRegistry)


#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_123_PROLOG
#define FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXTERNALRPCREGISTRY_API UClass* StaticClass<class UExternalRpcRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ExternalRPCRegistry_Public_ExternalRpcRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
