// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Widget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UGameInstance;
class ULocalPlayer;
class UObject;
class UPanelWidget;
class UWidget;
enum class ECheckBoxState : uint8;
enum class ESlateVisibility : uint8;
enum class EUINavigation : uint8;
enum class EUINavigationRule : uint8;
enum class EWidgetClipping : uint8;
struct FEventReply;
struct FFieldNotificationId;
struct FGeometry;
struct FLinearColor;
struct FPointerEvent;
struct FSlateBrush;
struct FSlateColor;
struct FWidgetTransform;
#ifdef UMG_Widget_generated_h
#error "Widget.generated.h already included, missing '#pragma once' in Widget.h"
#endif
#define UMG_Widget_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_235_DELEGATE \
static UMG_API bool FGetBool_DelegateWrapper(const FScriptDelegate& GetBool);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_236_DELEGATE \
static UMG_API float FGetFloat_DelegateWrapper(const FScriptDelegate& GetFloat);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_237_DELEGATE \
static UMG_API int32 FGetInt32_DelegateWrapper(const FScriptDelegate& GetInt32);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_238_DELEGATE \
static UMG_API FText FGetText_DelegateWrapper(const FScriptDelegate& GetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_239_DELEGATE \
static UMG_API FSlateColor FGetSlateColor_DelegateWrapper(const FScriptDelegate& GetSlateColor);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_240_DELEGATE \
static UMG_API FLinearColor FGetLinearColor_DelegateWrapper(const FScriptDelegate& GetLinearColor);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_241_DELEGATE \
static UMG_API FSlateBrush FGetSlateBrush_DelegateWrapper(const FScriptDelegate& GetSlateBrush);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_242_DELEGATE \
static UMG_API ESlateVisibility FGetSlateVisibility_DelegateWrapper(const FScriptDelegate& GetSlateVisibility);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_243_DELEGATE \
static UMG_API EMouseCursor::Type FGetMouseCursor_DelegateWrapper(const FScriptDelegate& GetMouseCursor);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_244_DELEGATE \
static UMG_API ECheckBoxState FGetCheckBoxState_DelegateWrapper(const FScriptDelegate& GetCheckBoxState);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_245_DELEGATE \
static UMG_API UWidget* FGetWidget_DelegateWrapper(const FScriptDelegate& GetWidget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_248_DELEGATE \
static UMG_API UWidget* FGenerateWidgetForString_DelegateWrapper(const FScriptDelegate& GenerateWidgetForString, const FString& Item);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_249_DELEGATE \
static UMG_API UWidget* FGenerateWidgetForObject_DelegateWrapper(const FScriptDelegate& GenerateWidgetForObject, UObject* Item);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_252_DELEGATE \
static UMG_API FEventReply FOnReply_DelegateWrapper(const FScriptDelegate& OnReply);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_253_DELEGATE \
static UMG_API FEventReply FOnPointerEvent_DelegateWrapper(const FScriptDelegate& OnPointerEvent, FGeometry MyGeometry, FPointerEvent const& MouseEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAccessibleSummaryText); \
	DECLARE_FUNCTION(execGetAccessibleText); \
	DECLARE_FUNCTION(execGetOwningLocalPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execK2_BroadcastFieldValueChanged); \
	DECLARE_FUNCTION(execK2_RemoveFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execK2_AddFieldValueChangedDelegate); \
	DECLARE_FUNCTION(execGetPaintSpaceGeometry); \
	DECLARE_FUNCTION(execGetTickSpaceGeometry); \
	DECLARE_FUNCTION(execGetCachedGeometry); \
	DECLARE_FUNCTION(execRemoveFromParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execSetNavigationRuleCustomBoundary); \
	DECLARE_FUNCTION(execSetNavigationRuleCustom); \
	DECLARE_FUNCTION(execSetNavigationRuleExplicit); \
	DECLARE_FUNCTION(execSetNavigationRuleBase); \
	DECLARE_FUNCTION(execSetNavigationRule); \
	DECLARE_FUNCTION(execSetAllNavigationRules); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility); \
	DECLARE_FUNCTION(execForceLayoutPrepass); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execHasUserFocusedDescendants); \
	DECLARE_FUNCTION(execHasFocusedDescendants); \
	DECLARE_FUNCTION(execHasAnyUserFocus); \
	DECLARE_FUNCTION(execHasUserFocus); \
	DECLARE_FUNCTION(execSetKeyboardFocus); \
	DECLARE_FUNCTION(execHasMouseCaptureByUser); \
	DECLARE_FUNCTION(execHasMouseCapture); \
	DECLARE_FUNCTION(execHasKeyboardFocus); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execForceVolatile); \
	DECLARE_FUNCTION(execSetClipping); \
	DECLARE_FUNCTION(execGetClipping); \
	DECLARE_FUNCTION(execSetRenderOpacity); \
	DECLARE_FUNCTION(execGetRenderOpacity); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsRendered); \
	DECLARE_FUNCTION(execResetCursor); \
	DECLARE_FUNCTION(execSetCursor); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execSetToolTipText); \
	DECLARE_FUNCTION(execIsInViewport); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetRenderTransformPivot); \
	DECLARE_FUNCTION(execSetRenderTranslation); \
	DECLARE_FUNCTION(execGetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderShear); \
	DECLARE_FUNCTION(execSetRenderScale); \
	DECLARE_FUNCTION(execSetRenderTransform);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_ACCESSORS \
static void GetToolTipText_WrapperImpl(const void* Object, void* OutValue); \
static void SetToolTipText_WrapperImpl(void* Object, const void* InValue); \
static void GetToolTipWidget_WrapperImpl(const void* Object, void* OutValue); \
static void SetToolTipWidget_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderTransform_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderTransform_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderTransformPivot_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderTransformPivot_WrapperImpl(void* Object, const void* InValue); \
static void GetFlowDirectionPreference_WrapperImpl(const void* Object, void* OutValue); \
static void SetFlowDirectionPreference_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetCursor_WrapperImpl(const void* Object, void* OutValue); \
static void SetCursor_WrapperImpl(void* Object, const void* InValue); \
static void GetClipping_WrapperImpl(const void* Object, void* OutValue); \
static void SetClipping_WrapperImpl(void* Object, const void* InValue); \
static void GetVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetVisibility_WrapperImpl(void* Object, const void* InValue); \
static void GetRenderOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetRenderOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetPixelSnapping_WrapperImpl(const void* Object, void* OutValue); \
static void SetPixelSnapping_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_INCLASS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UWidget*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidget(UWidget&&); \
	UWidget(const UWidget&); \
public: \
	UMG_API virtual ~UWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_214_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h


#define FOREACH_ENUM_EWIDGETDESIGNFLAGS(op) \
	op(EWidgetDesignFlags::None) \
	op(EWidgetDesignFlags::Designing) \
	op(EWidgetDesignFlags::ShowOutline) \
	op(EWidgetDesignFlags::ExecutePreConstruct) \
	op(EWidgetDesignFlags::Previewing) 

enum class EWidgetDesignFlags : uint8;
template<> struct TIsUEnumClass<EWidgetDesignFlags> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EWidgetDesignFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
