// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AISubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISubsystem_generated_h
#error "AISubsystem.generated.h already included, missing '#pragma once' in AISubsystem.h"
#endif
#define AIMODULE_AISubsystem_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISubsystem(); \
	friend struct Z_Construct_UClass_UAISubsystem_Statics; \
public: \
	DECLARE_CLASS(UAISubsystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAISubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAISubsystem(UAISubsystem&&); \
	UAISubsystem(const UAISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISubsystem) \
	AIMODULE_API virtual ~UAISubsystem();


#define FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
