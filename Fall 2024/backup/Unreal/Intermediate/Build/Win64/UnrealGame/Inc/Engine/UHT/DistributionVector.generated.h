// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DistributionVector_generated_h
#error "DistributionVector.generated.h already included, missing '#pragma once' in DistributionVector.h"
#endif
#define ENGINE_DistributionVector_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawDistributionVector_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FRawDistribution Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawDistributionVector>();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDistributionVector, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVector(); \
	friend struct Z_Construct_UClass_UDistributionVector_Statics; \
public: \
	DECLARE_CLASS(UDistributionVector, UDistribution, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDistributionVector) \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_STANDARD_CONSTRUCTORS \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDistributionVector(UDistributionVector&&); \
	UDistributionVector(const UDistributionVector&); \
public: \
	ENGINE_API virtual ~UDistributionVector();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_146_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDistributionVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h


#define FOREACH_ENUM_EDISTRIBUTIONVECTORLOCKFLAGS(op) \
	op(EDVLF_None) \
	op(EDVLF_XY) \
	op(EDVLF_XZ) \
	op(EDVLF_YZ) \
	op(EDVLF_XYZ) 

enum EDistributionVectorLockFlags : int;
template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorLockFlags>();

#define FOREACH_ENUM_EDISTRIBUTIONVECTORMIRRORFLAGS(op) \
	op(EDVMF_Same) \
	op(EDVMF_Different) \
	op(EDVMF_Mirror) 

enum EDistributionVectorMirrorFlags : int;
template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorMirrorFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
