// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPartition/ISMPartitionInstanceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ISMPartitionInstanceManager_generated_h
#error "ISMPartitionInstanceManager.generated.h already included, missing '#pragma once' in ISMPartitionInstanceManager.h"
#endif
#define ENGINE_ISMPartitionInstanceManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UISMPartitionInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UISMPartitionInstanceManager(UISMPartitionInstanceManager&&); \
	UISMPartitionInstanceManager(const UISMPartitionInstanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UISMPartitionInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISMPartitionInstanceManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISMPartitionInstanceManager) \
	ENGINE_API virtual ~UISMPartitionInstanceManager();


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISMPartitionInstanceManager(); \
	friend struct Z_Construct_UClass_UISMPartitionInstanceManager_Statics; \
public: \
	DECLARE_CLASS(UISMPartitionInstanceManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UISMPartitionInstanceManager)


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISMPartitionInstanceManager() {} \
public: \
	typedef UISMPartitionInstanceManager UClassType; \
	typedef IISMPartitionInstanceManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UISMPartitionInstanceManager>();

#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UISMPartitionInstanceManagerProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UISMPartitionInstanceManagerProvider(UISMPartitionInstanceManagerProvider&&); \
	UISMPartitionInstanceManagerProvider(const UISMPartitionInstanceManagerProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UISMPartitionInstanceManagerProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISMPartitionInstanceManagerProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISMPartitionInstanceManagerProvider) \
	ENGINE_API virtual ~UISMPartitionInstanceManagerProvider();


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISMPartitionInstanceManagerProvider(); \
	friend struct Z_Construct_UClass_UISMPartitionInstanceManagerProvider_Statics; \
public: \
	DECLARE_CLASS(UISMPartitionInstanceManagerProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UISMPartitionInstanceManagerProvider)


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISMPartitionInstanceManagerProvider() {} \
public: \
	typedef UISMPartitionInstanceManagerProvider UClassType; \
	typedef IISMPartitionInstanceManagerProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_129_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_132_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UISMPartitionInstanceManagerProvider>();

#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FISMClientInstanceManagerData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FISMClientInstanceManagerData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionInstanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
