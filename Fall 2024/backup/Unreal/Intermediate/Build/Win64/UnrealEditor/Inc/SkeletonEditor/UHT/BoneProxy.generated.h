// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SKELETONEDITOR_BoneProxy_generated_h
#error "BoneProxy.generated.h already included, missing '#pragma once' in BoneProxy.h"
#endif
#define SKELETONEDITOR_BoneProxy_generated_h

#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneProxy(); \
	friend struct Z_Construct_UClass_UBoneProxy_Statics; \
public: \
	DECLARE_CLASS(UBoneProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletonEditor"), NO_API) \
	DECLARE_SERIALIZER(UBoneProxy)


#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoneProxy(UBoneProxy&&); \
	UBoneProxy(const UBoneProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoneProxy) \
	NO_API virtual ~UBoneProxy();


#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_24_PROLOG
#define FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKELETONEDITOR_API UClass* StaticClass<class UBoneProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SkeletonEditor_Public_BoneProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
