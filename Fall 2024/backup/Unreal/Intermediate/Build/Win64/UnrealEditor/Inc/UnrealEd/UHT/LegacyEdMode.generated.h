// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/LegacyEdMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LegacyEdMode_generated_h
#error "LegacyEdMode.generated.h already included, missing '#pragma once' in LegacyEdMode.h"
#endif
#define UNREALED_LegacyEdMode_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyEdModeWrapper(); \
	friend struct Z_Construct_UClass_ULegacyEdModeWrapper_Statics; \
public: \
	DECLARE_CLASS(ULegacyEdModeWrapper, UEdMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(ULegacyEdModeWrapper) \
	virtual UObject* _getUObject() const override { return const_cast<ULegacyEdModeWrapper*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULegacyEdModeWrapper(ULegacyEdModeWrapper&&); \
	ULegacyEdModeWrapper(const ULegacyEdModeWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, ULegacyEdModeWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyEdModeWrapper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULegacyEdModeWrapper) \
	UNREALED_API virtual ~ULegacyEdModeWrapper();


#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_22_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULegacyEdModeWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
