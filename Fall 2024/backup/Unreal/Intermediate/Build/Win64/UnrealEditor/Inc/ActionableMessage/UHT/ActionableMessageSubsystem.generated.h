// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActionableMessageSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONABLEMESSAGE_ActionableMessageSubsystem_generated_h
#error "ActionableMessageSubsystem.generated.h already included, missing '#pragma once' in ActionableMessageSubsystem.h"
#endif
#define ACTIONABLEMESSAGE_ActionableMessageSubsystem_generated_h

#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionableMessageSubsystem(); \
	friend struct Z_Construct_UClass_UActionableMessageSubsystem_Statics; \
public: \
	DECLARE_CLASS(UActionableMessageSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActionableMessage"), NO_API) \
	DECLARE_SERIALIZER(UActionableMessageSubsystem)


#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionableMessageSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActionableMessageSubsystem(UActionableMessageSubsystem&&); \
	UActionableMessageSubsystem(const UActionableMessageSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionableMessageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionableMessageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionableMessageSubsystem) \
	NO_API virtual ~UActionableMessageSubsystem();


#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_38_PROLOG
#define FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONABLEMESSAGE_API UClass* StaticClass<class UActionableMessageSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ActionableMessage_Public_ActionableMessageSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
