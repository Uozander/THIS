// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSequenceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSequenceBase_generated_h
#error "AnimSequenceBase.generated.h already included, missing '#pragma once' in AnimSequenceBase.h"
#endif
#define ENGINE_AnimSequenceBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequenceBase, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceBase(); \
	friend struct Z_Construct_UClass_UAnimSequenceBase_Statics; \
public: \
	DECLARE_CLASS(UAnimSequenceBase, UAnimationAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSequenceBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSequenceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSequenceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimSequenceBase(UAnimSequenceBase&&); \
	UAnimSequenceBase(const UAnimSequenceBase&); \
public: \
	ENGINE_API virtual ~UAnimSequenceBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_35_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSequenceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequenceBase_h


#define FOREACH_ENUM_ETYPEADVANCEANIM(op) \
	op(ETAA_Default) \
	op(ETAA_Finished) \
	op(ETAA_Looped) 

enum ETypeAdvanceAnim : int;
template<> ENGINE_API UEnum* StaticEnum<ETypeAdvanceAnim>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
