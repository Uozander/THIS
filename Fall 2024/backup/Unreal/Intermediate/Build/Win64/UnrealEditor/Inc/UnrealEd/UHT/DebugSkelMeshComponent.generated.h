// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/DebugSkelMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DebugSkelMeshComponent_generated_h
#error "DebugSkelMeshComponent.generated.h already included, missing '#pragma once' in DebugSkelMeshComponent.h"
#endif
#define UNREALED_DebugSkelMeshComponent_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FSelectedSocketInfo>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_167_INCLASS \
private: \
	static void StaticRegisterNativesUDebugSkelMeshComponent(); \
	friend struct Z_Construct_UClass_UDebugSkelMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDebugSkelMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UDebugSkelMeshComponent)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UDebugSkelMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugSkelMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UDebugSkelMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugSkelMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDebugSkelMeshComponent(UDebugSkelMeshComponent&&); \
	UDebugSkelMeshComponent(const UDebugSkelMeshComponent&); \
public: \
	UNREALED_API virtual ~UDebugSkelMeshComponent();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_164_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_167_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDebugSkelMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h


#define FOREACH_ENUM_EPROCESSROOTMOTIONMODE(op) \
	op(EProcessRootMotionMode::Ignore) \
	op(EProcessRootMotionMode::Loop) \
	op(EProcessRootMotionMode::LoopAndReset) 

enum class EProcessRootMotionMode : uint8;
template<> struct TIsUEnumClass<EProcessRootMotionMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EProcessRootMotionMode>();

#define FOREACH_ENUM_ESKELETONDRAWMODE(op) \
	op(ESkeletonDrawMode::Default) \
	op(ESkeletonDrawMode::Hidden) \
	op(ESkeletonDrawMode::GreyedOut) 

enum class ESkeletonDrawMode : uint8;
template<> struct TIsUEnumClass<ESkeletonDrawMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ESkeletonDrawMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
