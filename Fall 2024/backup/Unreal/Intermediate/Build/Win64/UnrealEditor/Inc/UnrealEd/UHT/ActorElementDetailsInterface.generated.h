// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementDetailsInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorElementDetailsInterface_generated_h
#error "ActorElementDetailsInterface.generated.h already included, missing '#pragma once' in ActorElementDetailsInterface.h"
#endif
#define UNREALED_ActorElementDetailsInterface_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementDetailsInterface(); \
	friend struct Z_Construct_UClass_UActorElementDetailsInterface_Statics; \
public: \
	DECLARE_CLASS(UActorElementDetailsInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UActorElementDetailsInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementDetailsInterface*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorElementDetailsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorElementDetailsInterface(UActorElementDetailsInterface&&); \
	UActorElementDetailsInterface(const UActorElementDetailsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorElementDetailsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementDetailsInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementDetailsInterface) \
	UNREALED_API virtual ~UActorElementDetailsInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorElementDetailsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
