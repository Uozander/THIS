// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookOnTheSide/CookOnTheFlyServer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookOnTheFlyServer_generated_h
#error "CookOnTheFlyServer.generated.h already included, missing '#pragma once' in CookOnTheFlyServer.h"
#endif
#define UNREALED_CookOnTheFlyServer_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookOnTheFlyServer(); \
	friend struct Z_Construct_UClass_UCookOnTheFlyServer_Statics; \
public: \
	DECLARE_CLASS(UCookOnTheFlyServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UCookOnTheFlyServer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_226_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCookOnTheFlyServer(UCookOnTheFlyServer&&); \
	UCookOnTheFlyServer(const UCookOnTheFlyServer&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookOnTheFlyServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookOnTheFlyServer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_223_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCookOnTheFlyServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_CookOnTheSide_CookOnTheFlyServer_h


#define FOREACH_ENUM_ECOOKMODE(op) \
	op(ECookMode::CookOnTheFly) \
	op(ECookMode::CookOnTheFlyFromTheEditor) \
	op(ECookMode::CookByTheBookFromTheEditor) \
	op(ECookMode::CookByTheBook) \
	op(ECookMode::CookWorker) 

namespace ECookMode { enum Type : int; }
template<> UNREALED_API UEnum* StaticEnum<ECookMode::Type>();

#define FOREACH_ENUM_ECOOKTICKFLAGS(op) \
	op(ECookTickFlags::None) \
	op(ECookTickFlags::MarkupInUsePackages) \
	op(ECookTickFlags::HideProgressDisplay) 

enum class ECookTickFlags : uint8;
template<> struct TIsUEnumClass<ECookTickFlags> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ECookTickFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
