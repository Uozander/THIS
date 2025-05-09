// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserDataSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContentBrowserItemTypeFilter : uint8;
struct FContentBrowserDataFilter;
struct FContentBrowserItem;
#ifdef CONTENTBROWSERDATA_ContentBrowserDataSubsystem_generated_h
#error "ContentBrowserDataSubsystem.generated.h already included, missing '#pragma once' in ContentBrowserDataSubsystem.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserDataSubsystem_generated_h

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserCompiledSubsystemFilter>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserCompiledVirtualFolderFilter>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemAtPath); \
	DECLARE_FUNCTION(execGetItemsAtPath); \
	DECLARE_FUNCTION(execGetItemsUnderPath); \
	DECLARE_FUNCTION(execGetActiveDataSources); \
	DECLARE_FUNCTION(execGetAvailableDataSources); \
	DECLARE_FUNCTION(execDeactivateAllDataSources); \
	DECLARE_FUNCTION(execActivateAllDataSources); \
	DECLARE_FUNCTION(execDeactivateDataSource); \
	DECLARE_FUNCTION(execActivateDataSource);


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserDataSubsystem(); \
	friend struct Z_Construct_UClass_UContentBrowserDataSubsystem_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserDataSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserDataSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentBrowserDataSubsystem(UContentBrowserDataSubsystem&&); \
	UContentBrowserDataSubsystem(const UContentBrowserDataSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContentBrowserDataSubsystem) \
	NO_API virtual ~UContentBrowserDataSubsystem();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_103_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTENTBROWSERDATA_API UClass* StaticClass<class UContentBrowserDataSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h


#define FOREACH_ENUM_ECONTENTBROWSERPATHTYPE(op) \
	op(EContentBrowserPathType::None) \
	op(EContentBrowserPathType::Internal) \
	op(EContentBrowserPathType::Virtual) 

enum class EContentBrowserPathType : uint8;
template<> struct TIsUEnumClass<EContentBrowserPathType> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserPathType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
