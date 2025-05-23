// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_TunnelBoundary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_TunnelBoundary_generated_h
#error "K2Node_TunnelBoundary.generated.h already included, missing '#pragma once' in K2Node_TunnelBoundary.h"
#endif
#define BLUEPRINTGRAPH_K2Node_TunnelBoundary_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_TunnelBoundary(); \
	friend struct Z_Construct_UClass_UK2Node_TunnelBoundary_Statics; \
public: \
	DECLARE_CLASS(UK2Node_TunnelBoundary, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_TunnelBoundary)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_TunnelBoundary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_TunnelBoundary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_TunnelBoundary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_TunnelBoundary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UK2Node_TunnelBoundary(UK2Node_TunnelBoundary&&); \
	UK2Node_TunnelBoundary(const UK2Node_TunnelBoundary&); \
public: \
	NO_API virtual ~UK2Node_TunnelBoundary();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_30_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_33_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_TunnelBoundary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_TunnelBoundary_h


#define FOREACH_ENUM_ETUNNELBOUNDARYTYPE(op) \
	op(ETunnelBoundaryType::Unknown) \
	op(ETunnelBoundaryType::EntrySite) \
	op(ETunnelBoundaryType::InputSite) \
	op(ETunnelBoundaryType::OutputSite) 

enum class ETunnelBoundaryType : uint8;
template<> struct TIsUEnumClass<ETunnelBoundaryType> { enum { Value = true }; };
template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ETunnelBoundaryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
