// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientPilotBlackboardManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLIENTPILOT_ClientPilotBlackboardManager_generated_h
#error "ClientPilotBlackboardManager.generated.h already included, missing '#pragma once' in ClientPilotBlackboardManager.h"
#endif
#define CLIENTPILOT_ClientPilotBlackboardManager_generated_h

#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientPilotBlackboardManager(); \
	friend struct Z_Construct_UClass_UClientPilotBlackboardManager_Statics; \
public: \
	DECLARE_CLASS(UClientPilotBlackboardManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPilot"), CLIENTPILOT_API) \
	DECLARE_SERIALIZER(UClientPilotBlackboardManager)


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPILOT_API UClientPilotBlackboardManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClientPilotBlackboardManager(UClientPilotBlackboardManager&&); \
	UClientPilotBlackboardManager(const UClientPilotBlackboardManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPILOT_API, UClientPilotBlackboardManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientPilotBlackboardManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientPilotBlackboardManager) \
	CLIENTPILOT_API virtual ~UClientPilotBlackboardManager();


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_15_PROLOG
#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLIENTPILOT_API UClass* StaticClass<class UClientPilotBlackboardManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
