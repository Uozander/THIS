// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPartition/PartitionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PartitionActor_generated_h
#error "PartitionActor.generated.h already included, missing '#pragma once' in PartitionActor.h"
#endif
#define ENGINE_PartitionActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartitionActor(); \
	friend struct Z_Construct_UClass_APartitionActor_Statics; \
public: \
	DECLARE_CLASS(APartitionActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APartitionActor)


#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APartitionActor(APartitionActor&&); \
	APartitionActor(const APartitionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartitionActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartitionActor) \
	ENGINE_API virtual ~APartitionActor();


#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APartitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActorPartition_PartitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
