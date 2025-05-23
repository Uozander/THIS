// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CurveSourceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedCurveValue;
#ifdef ENGINE_CurveSourceInterface_generated_h
#error "CurveSourceInterface.generated.h already included, missing '#pragma once' in CurveSourceInterface.h"
#endif
#define ENGINE_CurveSourceInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedCurveValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNamedCurveValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS \
	ENGINE_API virtual void GetCurves_Implementation(TArray<FNamedCurveValue>& OutValues) const {}; \
	ENGINE_API virtual float GetCurveValue_Implementation(FName CurveName) const { return 0; }; \
	ENGINE_API virtual FName GetBindingName_Implementation() const { return NAME_None; }; \
	DECLARE_FUNCTION(execGetCurves); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execGetBindingName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveSourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveSourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveSourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveSourceInterface(UCurveSourceInterface&&); \
	UCurveSourceInterface(const UCurveSourceInterface&); \
public: \
	ENGINE_API virtual ~UCurveSourceInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCurveSourceInterface(); \
	friend struct Z_Construct_UClass_UCurveSourceInterface_Statics; \
public: \
	DECLARE_CLASS(UCurveSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveSourceInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ICurveSourceInterface() {} \
public: \
	typedef UCurveSourceInterface UClassType; \
	typedef ICurveSourceInterface ThisClass; \
	ENGINE_API static FName Execute_GetBindingName(const UObject* O); \
	ENGINE_API static void Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues); \
	ENGINE_API static float Execute_GetCurveValue(const UObject* O, FName CurveName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveSourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
