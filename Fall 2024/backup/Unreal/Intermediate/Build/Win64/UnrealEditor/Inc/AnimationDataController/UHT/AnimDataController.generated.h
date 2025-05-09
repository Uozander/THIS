// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimDataController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONDATACONTROLLER_AnimDataController_generated_h
#error "AnimDataController.generated.h already included, missing '#pragma once' in AnimDataController.h"
#endif
#define ANIMATIONDATACONTROLLER_AnimDataController_generated_h

#define FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDataController(); \
	friend struct Z_Construct_UClass_UAnimDataController_Statics; \
public: \
	DECLARE_CLASS(UAnimDataController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationDataController"), NO_API) \
	DECLARE_SERIALIZER(UAnimDataController) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimDataController*>(this); }


#define FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimDataController(UAnimDataController&&); \
	UAnimDataController(const UAnimDataController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDataController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDataController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimDataController) \
	NO_API virtual ~UAnimDataController();


#define FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_18_PROLOG
#define FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONDATACONTROLLER_API UClass* StaticClass<class UAnimDataController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
