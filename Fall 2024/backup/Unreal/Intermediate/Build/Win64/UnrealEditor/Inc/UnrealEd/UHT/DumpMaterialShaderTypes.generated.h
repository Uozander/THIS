// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/DumpMaterialShaderTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_DumpMaterialShaderTypes_generated_h
#error "DumpMaterialShaderTypes.generated.h already included, missing '#pragma once' in DumpMaterialShaderTypes.h"
#endif
#define UNREALED_DumpMaterialShaderTypes_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDumpMaterialShaderTypesCommandlet(); \
	friend struct Z_Construct_UClass_UDumpMaterialShaderTypesCommandlet_Statics; \
public: \
	DECLARE_CLASS(UDumpMaterialShaderTypesCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UDumpMaterialShaderTypesCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDumpMaterialShaderTypesCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDumpMaterialShaderTypesCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDumpMaterialShaderTypesCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDumpMaterialShaderTypesCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDumpMaterialShaderTypesCommandlet(UDumpMaterialShaderTypesCommandlet&&); \
	UDumpMaterialShaderTypesCommandlet(const UDumpMaterialShaderTypesCommandlet&); \
public: \
	NO_API virtual ~UDumpMaterialShaderTypesCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UDumpMaterialShaderTypesCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DumpMaterialShaderTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
