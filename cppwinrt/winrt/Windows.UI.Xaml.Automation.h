// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Automation_H
#define WINRT_Windows_UI_Xaml_Automation_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200213.5"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::AnnotationTypeIdProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_AnnotationTypeIdProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::AnnotationTypeNameProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_AnnotationTypeNameProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::AuthorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_AuthorProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::DateTimeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_DateTimeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics<D>::TargetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics)->get_TargetProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AnnotationType) consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Type() const
    {
        Windows::UI::Xaml::Automation::AnnotationType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->get_Type(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Type(Windows::UI::Xaml::Automation::AnnotationType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->put_Type(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Element() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->get_Element(&value));
        return Windows::UI::Xaml::UIElement{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationAnnotation<D>::Element(Windows::UI::Xaml::UIElement const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotation)->put_Element(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationAnnotation) consume_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory<D>::CreateInstance(Windows::UI::Xaml::Automation::AnnotationType const& type) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationFactory)->CreateInstance(static_cast<int32_t>(type), &value));
        return Windows::UI::Xaml::Automation::AutomationAnnotation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationAnnotation) consume_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory<D>::CreateWithElementParameter(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::UIElement const& element) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationFactory)->CreateWithElementParameter(static_cast<int32_t>(type), *(void**)(&element), &value));
        return Windows::UI::Xaml::Automation::AutomationAnnotation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics<D>::TypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationStatics)->get_TypeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics<D>::ElementProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationAnnotationStatics)->get_ElementProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::AcceleratorKeyProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_AcceleratorKeyProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::AccessKeyProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_AccessKeyProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::AutomationIdProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_AutomationIdProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::BoundingRectangleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_BoundingRectangleProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ClassNameProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ClassNameProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ClickablePointProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ClickablePointProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ControlTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ControlTypeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::HasKeyboardFocusProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_HasKeyboardFocusProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::HelpTextProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_HelpTextProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsContentElementProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsContentElementProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsControlElementProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsControlElementProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsEnabledProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsEnabledProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsKeyboardFocusableProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsKeyboardFocusableProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsOffscreenProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsOffscreenProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsPasswordProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsPasswordProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::IsRequiredForFormProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_IsRequiredForFormProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ItemStatusProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ItemStatusProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::ItemTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_ItemTypeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::LabeledByProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_LabeledByProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::LocalizedControlTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_LocalizedControlTypeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::NameProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_NameProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::OrientationProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_OrientationProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics<D>::LiveSettingProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics)->get_LiveSettingProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2<D>::ControlledPeersProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2)->get_ControlledPeersProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::PositionInSetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_PositionInSetProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::SizeOfSetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_SizeOfSetProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::LevelProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_LevelProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3<D>::AnnotationsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3)->get_AnnotationsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4<D>::LandmarkTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4)->get_LandmarkTypeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4<D>::LocalizedLandmarkTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4)->get_LocalizedLandmarkTypeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::IsPeripheralProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_IsPeripheralProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::IsDataValidForFormProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_IsDataValidForFormProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::FullDescriptionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_FullDescriptionProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::DescribedByProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_DescribedByProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::FlowsToProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_FlowsToProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5<D>::FlowsFromProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5)->get_FlowsFromProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6<D>::CultureProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6)->get_CultureProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics7<D>::HeadingLevelProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics7)->get_HeadingLevelProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics8<D>::IsDialogProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics8)->get_IsDialogProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::AcceleratorKeyProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_AcceleratorKeyProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetAcceleratorKey(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetAcceleratorKey(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::AccessKeyProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_AccessKeyProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetAccessKey(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetAccessKey(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetAccessKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetAccessKey(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::AutomationIdProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_AutomationIdProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetAutomationId(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetAutomationId(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetAutomationId(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetAutomationId(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::HelpTextProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_HelpTextProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetHelpText(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetHelpText(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetHelpText(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetHelpText(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::IsRequiredForFormProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_IsRequiredForFormProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetIsRequiredForForm(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element, bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetIsRequiredForForm(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::ItemStatusProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_ItemStatusProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetItemStatus(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetItemStatus(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetItemStatus(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetItemStatus(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::ItemTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_ItemTypeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetItemType(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetItemType(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetItemType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetItemType(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::LabeledByProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_LabeledByProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetLabeledBy(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetLabeledBy(*(void**)(&element), &result));
        return Windows::UI::Xaml::UIElement{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetLabeledBy(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetLabeledBy(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::NameProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_NameProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetName(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetName(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetName(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetName(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::LiveSettingProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->get_LiveSettingProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::GetLiveSetting(Windows::UI::Xaml::DependencyObject const& element) const
    {
        Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->GetLiveSetting(*(void**)(&element), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics<D>::SetLiveSetting(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics)->SetLiveSetting(*(void**)(&element), static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::AccessibilityViewProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->get_AccessibilityViewProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AccessibilityView) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::GetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element) const
    {
        Windows::UI::Xaml::Automation::Peers::AccessibilityView result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->GetAccessibilityView(*(void**)(&element), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::SetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->SetAccessibilityView(*(void**)(&element), static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::ControlledPeersProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->get_ControlledPeersProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement>) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2<D>::GetControlledPeers(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2)->GetControlledPeers(*(void**)(&element), &result));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::PositionInSetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_PositionInSetProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetPositionInSet(Windows::UI::Xaml::DependencyObject const& element) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetPositionInSet(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SetPositionInSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->SetPositionInSet(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SizeOfSetProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_SizeOfSetProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetSizeOfSet(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->SetSizeOfSet(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::LevelProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_LevelProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetLevel(Windows::UI::Xaml::DependencyObject const& element) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetLevel(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::SetLevel(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->SetLevel(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::AnnotationsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->get_AnnotationsProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation>) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3<D>::GetAnnotations(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3)->GetAnnotations(*(void**)(&element), &result));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::LandmarkTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->get_LandmarkTypeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::GetLandmarkType(Windows::UI::Xaml::DependencyObject const& element) const
    {
        Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->GetLandmarkType(*(void**)(&element), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::SetLandmarkType(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->SetLandmarkType(*(void**)(&element), static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::LocalizedLandmarkTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->get_LocalizedLandmarkTypeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::GetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->GetLocalizedLandmarkType(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4<D>::SetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4)->SetLocalizedLandmarkType(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::IsPeripheralProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_IsPeripheralProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetIsPeripheral(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element, bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetIsPeripheral(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::IsDataValidForFormProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_IsDataValidForFormProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetIsDataValidForForm(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element, bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetIsDataValidForForm(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::FullDescriptionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_FullDescriptionProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetFullDescription(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetFullDescription(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetFullDescription(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetFullDescription(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::LocalizedControlTypeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_LocalizedControlTypeProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetLocalizedControlType(*(void**)(&element), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::SetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->SetLocalizedControlType(*(void**)(&element), *(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::DescribedByProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_DescribedByProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetDescribedBy(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetDescribedBy(*(void**)(&element), &result));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::FlowsToProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_FlowsToProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetFlowsTo(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetFlowsTo(*(void**)(&element), &result));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::FlowsFromProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->get_FlowsFromProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5<D>::GetFlowsFrom(Windows::UI::Xaml::DependencyObject const& element) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5)->GetFlowsFrom(*(void**)(&element), &result));
        return Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>::CultureProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6)->get_CultureProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>::GetCulture(Windows::UI::Xaml::DependencyObject const& element) const
    {
        int32_t result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6)->GetCulture(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6<D>::SetCulture(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6)->SetCulture(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics7<D>::HeadingLevelProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics7)->get_HeadingLevelProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics7<D>::GetHeadingLevel(Windows::UI::Xaml::DependencyObject const& element) const
    {
        Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics7)->GetHeadingLevel(*(void**)(&element), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics7<D>::SetHeadingLevel(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics7)->SetHeadingLevel(*(void**)(&element), static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics8<D>::IsDialogProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics8)->get_IsDialogProperty(&value));
        return Windows::UI::Xaml::DependencyProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics8<D>::GetIsDialog(Windows::UI::Xaml::DependencyObject const& element) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics8)->GetIsDialog(*(void**)(&element), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics8<D>::SetIsDialog(Windows::UI::Xaml::DependencyObject const& element, bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IAutomationPropertiesStatics8)->SetIsDialog(*(void**)(&element), value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics<D>::DockPositionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics)->get_DockPositionProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::DropEffectProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_DropEffectProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::DropEffectsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_DropEffectsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::GrabbedItemsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_GrabbedItemsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics<D>::IsGrabbedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics)->get_IsGrabbedProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics<D>::DropTargetEffectProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics)->get_DropTargetEffectProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics<D>::DropTargetEffectsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics)->get_DropTargetEffectsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics<D>::ExpandCollapseStateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics)->get_ExpandCollapseStateProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::ColumnProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_ColumnProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::ColumnSpanProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_ColumnSpanProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::ContainingGridProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_ContainingGridProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::RowProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_RowProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics<D>::RowSpanProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics)->get_RowSpanProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics<D>::ColumnCountProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics)->get_ColumnCountProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics<D>::RowCountProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics)->get_RowCountProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics<D>::CurrentViewProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics)->get_CurrentViewProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics<D>::SupportedViewsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics)->get_SupportedViewsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::IsReadOnlyProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_IsReadOnlyProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::LargeChangeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_LargeChangeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::MaximumProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_MaximumProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::MinimumProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_MinimumProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::SmallChangeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_SmallChangeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics<D>::ValueProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics)->get_ValueProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::HorizontallyScrollableProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_HorizontallyScrollableProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::HorizontalScrollPercentProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_HorizontalScrollPercentProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::HorizontalViewSizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_HorizontalViewSizeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::NoScroll() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_NoScroll(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::VerticallyScrollableProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_VerticallyScrollableProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::VerticalScrollPercentProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_VerticalScrollPercentProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics<D>::VerticalViewSizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics)->get_VerticalViewSizeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics<D>::IsSelectedProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics)->get_IsSelectedProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics<D>::SelectionContainerProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics)->get_SelectionContainerProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>::CanSelectMultipleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics)->get_CanSelectMultipleProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>::IsSelectionRequiredProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics)->get_IsSelectionRequiredProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics<D>::SelectionProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics)->get_SelectionProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics<D>::FormulaProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics)->get_FormulaProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::ExtendedPropertiesProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_ExtendedPropertiesProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::FillColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_FillColorProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::FillPatternColorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_FillPatternColorProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::FillPatternStyleProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_FillPatternStyleProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::ShapeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_ShapeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::StyleIdProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_StyleIdProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics<D>::StyleNameProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics)->get_StyleNameProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics<D>::ColumnHeaderItemsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics)->get_ColumnHeaderItemsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics<D>::RowHeaderItemsProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics)->get_RowHeaderItemsProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>::ColumnHeadersProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics)->get_ColumnHeadersProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>::RowHeadersProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics)->get_RowHeadersProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics<D>::RowOrColumnMajorProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics)->get_RowOrColumnMajorProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics<D>::ToggleStateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics)->get_ToggleStateProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::CanZoomProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_CanZoomProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::ZoomLevelProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_ZoomLevelProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::MaxZoomProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_MaxZoomProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics<D>::MinZoomProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics)->get_MinZoomProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>::CanMoveProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics)->get_CanMoveProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>::CanResizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics)->get_CanResizeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics<D>::CanRotateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics)->get_CanRotateProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics<D>::IsReadOnlyProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics)->get_IsReadOnlyProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics<D>::ValueProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics)->get_ValueProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::CanMaximizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_CanMaximizeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::CanMinimizeProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_CanMinimizeProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::IsModalProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_IsModalProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::IsTopmostProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_IsTopmostProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::WindowInteractionStateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_WindowInteractionStateProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::UI::Xaml::Automation::AutomationProperty) consume_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics<D>::WindowVisualStateProperty() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics)->get_WindowVisualStateProperty(&value));
        return Windows::UI::Xaml::Automation::AutomationProperty{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics>
    {
        int32_t __stdcall get_AnnotationTypeIdProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AnnotationTypeIdProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AnnotationTypeNameProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AnnotationTypeNameProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AuthorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DateTimeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DateTimeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().TargetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotation> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotation>
    {
        int32_t __stdcall get_Type(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AnnotationType>(this->shim().Type());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Type(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Element(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Element());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Element(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Element(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotationFactory>
    {
        int32_t __stdcall CreateInstance(int32_t type, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationAnnotation>(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&type)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithElementParameter(int32_t type, void* element, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationAnnotation>(this->shim().CreateWithElementParameter(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&type), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationAnnotationStatics>
    {
        int32_t __stdcall get_TypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ElementProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ElementProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics>
    {
        int32_t __stdcall get_AcceleratorKeyProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AcceleratorKeyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AccessKeyProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AccessKeyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutomationIdProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AutomationIdProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BoundingRectangleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().BoundingRectangleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ClassNameProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ClassNameProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ClickablePointProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ClickablePointProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ControlTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ControlTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasKeyboardFocusProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().HasKeyboardFocusProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HelpTextProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().HelpTextProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsContentElementProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsContentElementProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsControlElementProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsControlElementProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsEnabledProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsEnabledProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsKeyboardFocusableProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsKeyboardFocusableProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOffscreenProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsOffscreenProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPasswordProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsPasswordProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRequiredForFormProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsRequiredForFormProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemStatusProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ItemStatusProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ItemTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LabeledByProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LabeledByProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalizedControlTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LocalizedControlTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NameProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().NameProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OrientationProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().OrientationProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LiveSettingProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LiveSettingProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2>
    {
        int32_t __stdcall get_ControlledPeersProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ControlledPeersProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3>
    {
        int32_t __stdcall get_PositionInSetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().PositionInSetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SizeOfSetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().SizeOfSetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LevelProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LevelProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AnnotationsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().AnnotationsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4>
    {
        int32_t __stdcall get_LandmarkTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LandmarkTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalizedLandmarkTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LocalizedLandmarkTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5>
    {
        int32_t __stdcall get_IsPeripheralProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsPeripheralProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDataValidForFormProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsDataValidForFormProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FullDescriptionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FullDescriptionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DescribedByProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DescribedByProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FlowsToProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FlowsToProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FlowsFromProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FlowsFromProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6>
    {
        int32_t __stdcall get_CultureProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CultureProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics7> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics7>
    {
        int32_t __stdcall get_HeadingLevelProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().HeadingLevelProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics8> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics8>
    {
        int32_t __stdcall get_IsDialogProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsDialogProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationProperties> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationProperties>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics>
    {
        int32_t __stdcall get_AcceleratorKeyProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AcceleratorKeyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAcceleratorKey(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetAcceleratorKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAcceleratorKey(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAcceleratorKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AccessKeyProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AccessKeyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessKey(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetAccessKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAccessKey(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAccessKey(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutomationIdProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AutomationIdProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAutomationId(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetAutomationId(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAutomationId(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAutomationId(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HelpTextProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HelpTextProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHelpText(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetHelpText(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetHelpText(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHelpText(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRequiredForFormProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsRequiredForFormProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIsRequiredForForm(void* element, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetIsRequiredForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetIsRequiredForForm(void* element, bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsRequiredForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemStatusProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemStatusProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetItemStatus(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetItemStatus(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetItemStatus(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetItemStatus(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ItemTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetItemType(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetItemType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetItemType(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetItemType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LabeledByProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LabeledByProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLabeledBy(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::UIElement>(this->shim().GetLabeledBy(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLabeledBy(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLabeledBy(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NameProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().NameProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetName(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetName(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetName(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetName(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LiveSettingProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LiveSettingProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLiveSetting(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>(this->shim().GetLiveSetting(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLiveSetting(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLiveSetting(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2>
    {
        int32_t __stdcall get_AccessibilityViewProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AccessibilityViewProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessibilityView(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Automation::Peers::AccessibilityView>(this->shim().GetAccessibilityView(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetAccessibilityView(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAccessibilityView(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AccessibilityView const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ControlledPeersProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ControlledPeersProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetControlledPeers(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::UIElement>>(this->shim().GetControlledPeers(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3>
    {
        int32_t __stdcall get_PositionInSetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PositionInSetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPositionInSet(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetPositionInSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPositionInSet(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPositionInSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SizeOfSetProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SizeOfSetProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSizeOfSet(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetSizeOfSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSizeOfSet(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSizeOfSet(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LevelProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LevelProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLevel(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetLevel(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLevel(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLevel(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AnnotationsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AnnotationsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAnnotations(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::AutomationAnnotation>>(this->shim().GetAnnotations(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4>
    {
        int32_t __stdcall get_LandmarkTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LandmarkTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLandmarkType(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>(this->shim().GetLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLandmarkType(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalizedLandmarkTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocalizedLandmarkTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocalizedLandmarkType(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetLocalizedLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLocalizedLandmarkType(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocalizedLandmarkType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5>
    {
        int32_t __stdcall get_IsPeripheralProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsPeripheralProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIsPeripheral(void* element, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetIsPeripheral(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetIsPeripheral(void* element, bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsPeripheral(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDataValidForFormProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsDataValidForFormProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIsDataValidForForm(void* element, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetIsDataValidForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetIsDataValidForForm(void* element, bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsDataValidForForm(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FullDescriptionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FullDescriptionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFullDescription(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetFullDescription(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetFullDescription(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFullDescription(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalizedControlTypeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocalizedControlTypeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLocalizedControlType(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetLocalizedControlType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLocalizedControlType(void* element, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLocalizedControlType(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DescribedByProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DescribedByProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDescribedBy(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>>(this->shim().GetDescribedBy(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FlowsToProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FlowsToProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFlowsTo(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>>(this->shim().GetFlowsTo(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FlowsFromProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FlowsFromProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFlowsFrom(void* element, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>>(this->shim().GetFlowsFrom(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6>
    {
        int32_t __stdcall get_CultureProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CultureProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCulture(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetCulture(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetCulture(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCulture(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics7> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics7>
    {
        int32_t __stdcall get_HeadingLevelProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HeadingLevelProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHeadingLevel(void* element, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel>(this->shim().GetHeadingLevel(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetHeadingLevel(void* element, int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHeadingLevel(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics8> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationPropertiesStatics8>
    {
        int32_t __stdcall get_IsDialogProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsDialogProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetIsDialog(void* element, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetIsDialog(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetIsDialog(void* element, bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsDialog(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IAutomationProperty> : produce_base<D, Windows::UI::Xaml::Automation::IAutomationProperty>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics>
    {
        int32_t __stdcall get_DockPositionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DockPositionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics>
    {
        int32_t __stdcall get_DropEffectProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DropEffectProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DropEffectsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DropEffectsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GrabbedItemsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().GrabbedItemsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsGrabbedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsGrabbedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics>
    {
        int32_t __stdcall get_DropTargetEffectProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DropTargetEffectProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DropTargetEffectsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().DropTargetEffectsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics>
    {
        int32_t __stdcall get_ExpandCollapseStateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ExpandCollapseStateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics>
    {
        int32_t __stdcall get_ColumnProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ColumnProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ColumnSpanProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ColumnSpanProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContainingGridProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ContainingGridProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RowProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().RowProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RowSpanProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().RowSpanProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics>
    {
        int32_t __stdcall get_ColumnCountProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ColumnCountProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RowCountProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().RowCountProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics>
    {
        int32_t __stdcall get_CurrentViewProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CurrentViewProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedViewsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().SupportedViewsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics>
    {
        int32_t __stdcall get_IsReadOnlyProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsReadOnlyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LargeChangeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().LargeChangeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaximumProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().MaximumProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinimumProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().MinimumProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SmallChangeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().SmallChangeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValueProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ValueProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics>
    {
        int32_t __stdcall get_HorizontallyScrollableProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().HorizontallyScrollableProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HorizontalScrollPercentProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().HorizontalScrollPercentProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HorizontalViewSizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().HorizontalViewSizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NoScroll(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NoScroll());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VerticallyScrollableProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().VerticallyScrollableProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VerticalScrollPercentProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().VerticalScrollPercentProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VerticalViewSizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().VerticalViewSizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics>
    {
        int32_t __stdcall get_IsSelectedProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsSelectedProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionContainerProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().SelectionContainerProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics>
    {
        int32_t __stdcall get_CanSelectMultipleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanSelectMultipleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSelectionRequiredProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsSelectionRequiredProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().SelectionProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics>
    {
        int32_t __stdcall get_FormulaProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FormulaProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics>
    {
        int32_t __stdcall get_ExtendedPropertiesProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ExtendedPropertiesProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FillColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FillColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FillPatternColorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FillPatternColorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FillPatternStyleProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().FillPatternStyleProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShapeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ShapeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StyleIdProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().StyleIdProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StyleNameProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().StyleNameProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics>
    {
        int32_t __stdcall get_ColumnHeaderItemsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ColumnHeaderItemsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RowHeaderItemsProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().RowHeaderItemsProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics>
    {
        int32_t __stdcall get_ColumnHeadersProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ColumnHeadersProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RowHeadersProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().RowHeadersProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RowOrColumnMajorProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().RowOrColumnMajorProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics>
    {
        int32_t __stdcall get_ToggleStateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ToggleStateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPattern2Identifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics>
    {
        int32_t __stdcall get_CanZoomProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanZoomProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ZoomLevelProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ZoomLevelProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxZoomProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().MaxZoomProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinZoomProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().MinZoomProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics>
    {
        int32_t __stdcall get_CanMoveProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanMoveProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanResizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanResizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanRotateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanRotateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics>
    {
        int32_t __stdcall get_IsReadOnlyProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsReadOnlyProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ValueProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().ValueProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> : produce_base<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiers>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> : produce_base<D, Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics>
    {
        int32_t __stdcall get_CanMaximizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanMaximizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanMinimizeProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().CanMinimizeProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsModalProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsModalProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsTopmostProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().IsTopmostProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WindowInteractionStateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().WindowInteractionStateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WindowVisualStateProperty(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Automation::AutomationProperty>(this->shim().WindowVisualStateProperty());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation
{
    inline auto AnnotationPatternIdentifiers::AnnotationTypeIdProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAnnotationPatternIdentifiersStatics const&), AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>([](IAnnotationPatternIdentifiersStatics const& f) { return f.AnnotationTypeIdProperty(); });
    }
    inline auto AnnotationPatternIdentifiers::AnnotationTypeNameProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAnnotationPatternIdentifiersStatics const&), AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>([](IAnnotationPatternIdentifiersStatics const& f) { return f.AnnotationTypeNameProperty(); });
    }
    inline auto AnnotationPatternIdentifiers::AuthorProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAnnotationPatternIdentifiersStatics const&), AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>([](IAnnotationPatternIdentifiersStatics const& f) { return f.AuthorProperty(); });
    }
    inline auto AnnotationPatternIdentifiers::DateTimeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAnnotationPatternIdentifiersStatics const&), AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>([](IAnnotationPatternIdentifiersStatics const& f) { return f.DateTimeProperty(); });
    }
    inline auto AnnotationPatternIdentifiers::TargetProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAnnotationPatternIdentifiersStatics const&), AnnotationPatternIdentifiers, IAnnotationPatternIdentifiersStatics>([](IAnnotationPatternIdentifiersStatics const& f) { return f.TargetProperty(); });
    }
    inline AutomationAnnotation::AutomationAnnotation() :
        AutomationAnnotation(impl::call_factory_cast<AutomationAnnotation(*)(Windows::Foundation::IActivationFactory const&), AutomationAnnotation>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AutomationAnnotation>(); }))
    {
    }
    inline AutomationAnnotation::AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type) :
        AutomationAnnotation(impl::call_factory<AutomationAnnotation, IAutomationAnnotationFactory>([&](IAutomationAnnotationFactory const& f) { return f.CreateInstance(type); }))
    {
    }
    inline AutomationAnnotation::AutomationAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::UIElement const& element) :
        AutomationAnnotation(impl::call_factory<AutomationAnnotation, IAutomationAnnotationFactory>([&](IAutomationAnnotationFactory const& f) { return f.CreateWithElementParameter(type, element); }))
    {
    }
    inline auto AutomationAnnotation::TypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationAnnotationStatics const&), AutomationAnnotation, IAutomationAnnotationStatics>([](IAutomationAnnotationStatics const& f) { return f.TypeProperty(); });
    }
    inline auto AutomationAnnotation::ElementProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationAnnotationStatics const&), AutomationAnnotation, IAutomationAnnotationStatics>([](IAutomationAnnotationStatics const& f) { return f.ElementProperty(); });
    }
    inline auto AutomationElementIdentifiers::AcceleratorKeyProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.AcceleratorKeyProperty(); });
    }
    inline auto AutomationElementIdentifiers::AccessKeyProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.AccessKeyProperty(); });
    }
    inline auto AutomationElementIdentifiers::AutomationIdProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.AutomationIdProperty(); });
    }
    inline auto AutomationElementIdentifiers::BoundingRectangleProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.BoundingRectangleProperty(); });
    }
    inline auto AutomationElementIdentifiers::ClassNameProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.ClassNameProperty(); });
    }
    inline auto AutomationElementIdentifiers::ClickablePointProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.ClickablePointProperty(); });
    }
    inline auto AutomationElementIdentifiers::ControlTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.ControlTypeProperty(); });
    }
    inline auto AutomationElementIdentifiers::HasKeyboardFocusProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.HasKeyboardFocusProperty(); });
    }
    inline auto AutomationElementIdentifiers::HelpTextProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.HelpTextProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsContentElementProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsContentElementProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsControlElementProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsControlElementProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsEnabledProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsEnabledProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsKeyboardFocusableProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsKeyboardFocusableProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsOffscreenProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsOffscreenProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsPasswordProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsPasswordProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsRequiredForFormProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.IsRequiredForFormProperty(); });
    }
    inline auto AutomationElementIdentifiers::ItemStatusProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.ItemStatusProperty(); });
    }
    inline auto AutomationElementIdentifiers::ItemTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.ItemTypeProperty(); });
    }
    inline auto AutomationElementIdentifiers::LabeledByProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.LabeledByProperty(); });
    }
    inline auto AutomationElementIdentifiers::LocalizedControlTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.LocalizedControlTypeProperty(); });
    }
    inline auto AutomationElementIdentifiers::NameProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.NameProperty(); });
    }
    inline auto AutomationElementIdentifiers::OrientationProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.OrientationProperty(); });
    }
    inline auto AutomationElementIdentifiers::LiveSettingProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics>([](IAutomationElementIdentifiersStatics const& f) { return f.LiveSettingProperty(); });
    }
    inline auto AutomationElementIdentifiers::ControlledPeersProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics2 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics2>([](IAutomationElementIdentifiersStatics2 const& f) { return f.ControlledPeersProperty(); });
    }
    inline auto AutomationElementIdentifiers::PositionInSetProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics3 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>([](IAutomationElementIdentifiersStatics3 const& f) { return f.PositionInSetProperty(); });
    }
    inline auto AutomationElementIdentifiers::SizeOfSetProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics3 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>([](IAutomationElementIdentifiersStatics3 const& f) { return f.SizeOfSetProperty(); });
    }
    inline auto AutomationElementIdentifiers::LevelProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics3 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>([](IAutomationElementIdentifiersStatics3 const& f) { return f.LevelProperty(); });
    }
    inline auto AutomationElementIdentifiers::AnnotationsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics3 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics3>([](IAutomationElementIdentifiersStatics3 const& f) { return f.AnnotationsProperty(); });
    }
    inline auto AutomationElementIdentifiers::LandmarkTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics4 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics4>([](IAutomationElementIdentifiersStatics4 const& f) { return f.LandmarkTypeProperty(); });
    }
    inline auto AutomationElementIdentifiers::LocalizedLandmarkTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics4 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics4>([](IAutomationElementIdentifiersStatics4 const& f) { return f.LocalizedLandmarkTypeProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsPeripheralProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics5 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>([](IAutomationElementIdentifiersStatics5 const& f) { return f.IsPeripheralProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsDataValidForFormProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics5 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>([](IAutomationElementIdentifiersStatics5 const& f) { return f.IsDataValidForFormProperty(); });
    }
    inline auto AutomationElementIdentifiers::FullDescriptionProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics5 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>([](IAutomationElementIdentifiersStatics5 const& f) { return f.FullDescriptionProperty(); });
    }
    inline auto AutomationElementIdentifiers::DescribedByProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics5 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>([](IAutomationElementIdentifiersStatics5 const& f) { return f.DescribedByProperty(); });
    }
    inline auto AutomationElementIdentifiers::FlowsToProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics5 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>([](IAutomationElementIdentifiersStatics5 const& f) { return f.FlowsToProperty(); });
    }
    inline auto AutomationElementIdentifiers::FlowsFromProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics5 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics5>([](IAutomationElementIdentifiersStatics5 const& f) { return f.FlowsFromProperty(); });
    }
    inline auto AutomationElementIdentifiers::CultureProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics6 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics6>([](IAutomationElementIdentifiersStatics6 const& f) { return f.CultureProperty(); });
    }
    inline auto AutomationElementIdentifiers::HeadingLevelProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics7 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics7>([](IAutomationElementIdentifiersStatics7 const& f) { return f.HeadingLevelProperty(); });
    }
    inline auto AutomationElementIdentifiers::IsDialogProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IAutomationElementIdentifiersStatics8 const&), AutomationElementIdentifiers, IAutomationElementIdentifiersStatics8>([](IAutomationElementIdentifiersStatics8 const& f) { return f.IsDialogProperty(); });
    }
    inline auto AutomationProperties::AcceleratorKeyProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.AcceleratorKeyProperty(); });
    }
    inline auto AutomationProperties::GetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetAcceleratorKey(element); });
    }
    inline auto AutomationProperties::SetAcceleratorKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetAcceleratorKey(element, value); });
    }
    inline auto AutomationProperties::AccessKeyProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.AccessKeyProperty(); });
    }
    inline auto AutomationProperties::GetAccessKey(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetAccessKey(element); });
    }
    inline auto AutomationProperties::SetAccessKey(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetAccessKey(element, value); });
    }
    inline auto AutomationProperties::AutomationIdProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.AutomationIdProperty(); });
    }
    inline auto AutomationProperties::GetAutomationId(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetAutomationId(element); });
    }
    inline auto AutomationProperties::SetAutomationId(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetAutomationId(element, value); });
    }
    inline auto AutomationProperties::HelpTextProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.HelpTextProperty(); });
    }
    inline auto AutomationProperties::GetHelpText(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetHelpText(element); });
    }
    inline auto AutomationProperties::SetHelpText(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetHelpText(element, value); });
    }
    inline auto AutomationProperties::IsRequiredForFormProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.IsRequiredForFormProperty(); });
    }
    inline auto AutomationProperties::GetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetIsRequiredForForm(element); });
    }
    inline auto AutomationProperties::SetIsRequiredForForm(Windows::UI::Xaml::DependencyObject const& element, bool value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetIsRequiredForForm(element, value); });
    }
    inline auto AutomationProperties::ItemStatusProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.ItemStatusProperty(); });
    }
    inline auto AutomationProperties::GetItemStatus(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetItemStatus(element); });
    }
    inline auto AutomationProperties::SetItemStatus(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetItemStatus(element, value); });
    }
    inline auto AutomationProperties::ItemTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.ItemTypeProperty(); });
    }
    inline auto AutomationProperties::GetItemType(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetItemType(element); });
    }
    inline auto AutomationProperties::SetItemType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetItemType(element, value); });
    }
    inline auto AutomationProperties::LabeledByProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.LabeledByProperty(); });
    }
    inline auto AutomationProperties::GetLabeledBy(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetLabeledBy(element); });
    }
    inline auto AutomationProperties::SetLabeledBy(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::UIElement const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetLabeledBy(element, value); });
    }
    inline auto AutomationProperties::NameProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.NameProperty(); });
    }
    inline auto AutomationProperties::GetName(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetName(element); });
    }
    inline auto AutomationProperties::SetName(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetName(element, value); });
    }
    inline auto AutomationProperties::LiveSettingProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics const&), AutomationProperties, IAutomationPropertiesStatics>([](IAutomationPropertiesStatics const& f) { return f.LiveSettingProperty(); });
    }
    inline auto AutomationProperties::GetLiveSetting(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.GetLiveSetting(element); });
    }
    inline auto AutomationProperties::SetLiveSetting(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics>([&](IAutomationPropertiesStatics const& f) { return f.SetLiveSetting(element, value); });
    }
    inline auto AutomationProperties::AccessibilityViewProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics2 const&), AutomationProperties, IAutomationPropertiesStatics2>([](IAutomationPropertiesStatics2 const& f) { return f.AccessibilityViewProperty(); });
    }
    inline auto AutomationProperties::GetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics2>([&](IAutomationPropertiesStatics2 const& f) { return f.GetAccessibilityView(element); });
    }
    inline auto AutomationProperties::SetAccessibilityView(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AccessibilityView const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics2>([&](IAutomationPropertiesStatics2 const& f) { return f.SetAccessibilityView(element, value); });
    }
    inline auto AutomationProperties::ControlledPeersProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics2 const&), AutomationProperties, IAutomationPropertiesStatics2>([](IAutomationPropertiesStatics2 const& f) { return f.ControlledPeersProperty(); });
    }
    inline auto AutomationProperties::GetControlledPeers(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics2>([&](IAutomationPropertiesStatics2 const& f) { return f.GetControlledPeers(element); });
    }
    inline auto AutomationProperties::PositionInSetProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics3 const&), AutomationProperties, IAutomationPropertiesStatics3>([](IAutomationPropertiesStatics3 const& f) { return f.PositionInSetProperty(); });
    }
    inline auto AutomationProperties::GetPositionInSet(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.GetPositionInSet(element); });
    }
    inline auto AutomationProperties::SetPositionInSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.SetPositionInSet(element, value); });
    }
    inline auto AutomationProperties::SizeOfSetProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics3 const&), AutomationProperties, IAutomationPropertiesStatics3>([](IAutomationPropertiesStatics3 const& f) { return f.SizeOfSetProperty(); });
    }
    inline auto AutomationProperties::GetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.GetSizeOfSet(element); });
    }
    inline auto AutomationProperties::SetSizeOfSet(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.SetSizeOfSet(element, value); });
    }
    inline auto AutomationProperties::LevelProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics3 const&), AutomationProperties, IAutomationPropertiesStatics3>([](IAutomationPropertiesStatics3 const& f) { return f.LevelProperty(); });
    }
    inline auto AutomationProperties::GetLevel(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.GetLevel(element); });
    }
    inline auto AutomationProperties::SetLevel(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.SetLevel(element, value); });
    }
    inline auto AutomationProperties::AnnotationsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics3 const&), AutomationProperties, IAutomationPropertiesStatics3>([](IAutomationPropertiesStatics3 const& f) { return f.AnnotationsProperty(); });
    }
    inline auto AutomationProperties::GetAnnotations(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics3>([&](IAutomationPropertiesStatics3 const& f) { return f.GetAnnotations(element); });
    }
    inline auto AutomationProperties::LandmarkTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics4 const&), AutomationProperties, IAutomationPropertiesStatics4>([](IAutomationPropertiesStatics4 const& f) { return f.LandmarkTypeProperty(); });
    }
    inline auto AutomationProperties::GetLandmarkType(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics4>([&](IAutomationPropertiesStatics4 const& f) { return f.GetLandmarkType(element); });
    }
    inline auto AutomationProperties::SetLandmarkType(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics4>([&](IAutomationPropertiesStatics4 const& f) { return f.SetLandmarkType(element, value); });
    }
    inline auto AutomationProperties::LocalizedLandmarkTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics4 const&), AutomationProperties, IAutomationPropertiesStatics4>([](IAutomationPropertiesStatics4 const& f) { return f.LocalizedLandmarkTypeProperty(); });
    }
    inline auto AutomationProperties::GetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics4>([&](IAutomationPropertiesStatics4 const& f) { return f.GetLocalizedLandmarkType(element); });
    }
    inline auto AutomationProperties::SetLocalizedLandmarkType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics4>([&](IAutomationPropertiesStatics4 const& f) { return f.SetLocalizedLandmarkType(element, value); });
    }
    inline auto AutomationProperties::IsPeripheralProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.IsPeripheralProperty(); });
    }
    inline auto AutomationProperties::GetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetIsPeripheral(element); });
    }
    inline auto AutomationProperties::SetIsPeripheral(Windows::UI::Xaml::DependencyObject const& element, bool value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.SetIsPeripheral(element, value); });
    }
    inline auto AutomationProperties::IsDataValidForFormProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.IsDataValidForFormProperty(); });
    }
    inline auto AutomationProperties::GetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetIsDataValidForForm(element); });
    }
    inline auto AutomationProperties::SetIsDataValidForForm(Windows::UI::Xaml::DependencyObject const& element, bool value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.SetIsDataValidForForm(element, value); });
    }
    inline auto AutomationProperties::FullDescriptionProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.FullDescriptionProperty(); });
    }
    inline auto AutomationProperties::GetFullDescription(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetFullDescription(element); });
    }
    inline auto AutomationProperties::SetFullDescription(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.SetFullDescription(element, value); });
    }
    inline auto AutomationProperties::LocalizedControlTypeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.LocalizedControlTypeProperty(); });
    }
    inline auto AutomationProperties::GetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetLocalizedControlType(element); });
    }
    inline auto AutomationProperties::SetLocalizedControlType(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.SetLocalizedControlType(element, value); });
    }
    inline auto AutomationProperties::DescribedByProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.DescribedByProperty(); });
    }
    inline auto AutomationProperties::GetDescribedBy(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetDescribedBy(element); });
    }
    inline auto AutomationProperties::FlowsToProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.FlowsToProperty(); });
    }
    inline auto AutomationProperties::GetFlowsTo(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetFlowsTo(element); });
    }
    inline auto AutomationProperties::FlowsFromProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics5 const&), AutomationProperties, IAutomationPropertiesStatics5>([](IAutomationPropertiesStatics5 const& f) { return f.FlowsFromProperty(); });
    }
    inline auto AutomationProperties::GetFlowsFrom(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics5>([&](IAutomationPropertiesStatics5 const& f) { return f.GetFlowsFrom(element); });
    }
    inline auto AutomationProperties::CultureProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics6 const&), AutomationProperties, IAutomationPropertiesStatics6>([](IAutomationPropertiesStatics6 const& f) { return f.CultureProperty(); });
    }
    inline auto AutomationProperties::GetCulture(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics6>([&](IAutomationPropertiesStatics6 const& f) { return f.GetCulture(element); });
    }
    inline auto AutomationProperties::SetCulture(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics6>([&](IAutomationPropertiesStatics6 const& f) { return f.SetCulture(element, value); });
    }
    inline auto AutomationProperties::HeadingLevelProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics7 const&), AutomationProperties, IAutomationPropertiesStatics7>([](IAutomationPropertiesStatics7 const& f) { return f.HeadingLevelProperty(); });
    }
    inline auto AutomationProperties::GetHeadingLevel(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics7>([&](IAutomationPropertiesStatics7 const& f) { return f.GetHeadingLevel(element); });
    }
    inline auto AutomationProperties::SetHeadingLevel(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::Automation::Peers::AutomationHeadingLevel const& value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics7>([&](IAutomationPropertiesStatics7 const& f) { return f.SetHeadingLevel(element, value); });
    }
    inline auto AutomationProperties::IsDialogProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::DependencyProperty(*)(IAutomationPropertiesStatics8 const&), AutomationProperties, IAutomationPropertiesStatics8>([](IAutomationPropertiesStatics8 const& f) { return f.IsDialogProperty(); });
    }
    inline auto AutomationProperties::GetIsDialog(Windows::UI::Xaml::DependencyObject const& element)
    {
        return impl::call_factory<AutomationProperties, IAutomationPropertiesStatics8>([&](IAutomationPropertiesStatics8 const& f) { return f.GetIsDialog(element); });
    }
    inline auto AutomationProperties::SetIsDialog(Windows::UI::Xaml::DependencyObject const& element, bool value)
    {
        impl::call_factory<AutomationProperties, IAutomationPropertiesStatics8>([&](IAutomationPropertiesStatics8 const& f) { return f.SetIsDialog(element, value); });
    }
    inline auto DockPatternIdentifiers::DockPositionProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDockPatternIdentifiersStatics const&), DockPatternIdentifiers, IDockPatternIdentifiersStatics>([](IDockPatternIdentifiersStatics const& f) { return f.DockPositionProperty(); });
    }
    inline auto DragPatternIdentifiers::DropEffectProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDragPatternIdentifiersStatics const&), DragPatternIdentifiers, IDragPatternIdentifiersStatics>([](IDragPatternIdentifiersStatics const& f) { return f.DropEffectProperty(); });
    }
    inline auto DragPatternIdentifiers::DropEffectsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDragPatternIdentifiersStatics const&), DragPatternIdentifiers, IDragPatternIdentifiersStatics>([](IDragPatternIdentifiersStatics const& f) { return f.DropEffectsProperty(); });
    }
    inline auto DragPatternIdentifiers::GrabbedItemsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDragPatternIdentifiersStatics const&), DragPatternIdentifiers, IDragPatternIdentifiersStatics>([](IDragPatternIdentifiersStatics const& f) { return f.GrabbedItemsProperty(); });
    }
    inline auto DragPatternIdentifiers::IsGrabbedProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDragPatternIdentifiersStatics const&), DragPatternIdentifiers, IDragPatternIdentifiersStatics>([](IDragPatternIdentifiersStatics const& f) { return f.IsGrabbedProperty(); });
    }
    inline auto DropTargetPatternIdentifiers::DropTargetEffectProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDropTargetPatternIdentifiersStatics const&), DropTargetPatternIdentifiers, IDropTargetPatternIdentifiersStatics>([](IDropTargetPatternIdentifiersStatics const& f) { return f.DropTargetEffectProperty(); });
    }
    inline auto DropTargetPatternIdentifiers::DropTargetEffectsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IDropTargetPatternIdentifiersStatics const&), DropTargetPatternIdentifiers, IDropTargetPatternIdentifiersStatics>([](IDropTargetPatternIdentifiersStatics const& f) { return f.DropTargetEffectsProperty(); });
    }
    inline auto ExpandCollapsePatternIdentifiers::ExpandCollapseStateProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IExpandCollapsePatternIdentifiersStatics const&), ExpandCollapsePatternIdentifiers, IExpandCollapsePatternIdentifiersStatics>([](IExpandCollapsePatternIdentifiersStatics const& f) { return f.ExpandCollapseStateProperty(); });
    }
    inline auto GridItemPatternIdentifiers::ColumnProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridItemPatternIdentifiersStatics const&), GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>([](IGridItemPatternIdentifiersStatics const& f) { return f.ColumnProperty(); });
    }
    inline auto GridItemPatternIdentifiers::ColumnSpanProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridItemPatternIdentifiersStatics const&), GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>([](IGridItemPatternIdentifiersStatics const& f) { return f.ColumnSpanProperty(); });
    }
    inline auto GridItemPatternIdentifiers::ContainingGridProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridItemPatternIdentifiersStatics const&), GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>([](IGridItemPatternIdentifiersStatics const& f) { return f.ContainingGridProperty(); });
    }
    inline auto GridItemPatternIdentifiers::RowProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridItemPatternIdentifiersStatics const&), GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>([](IGridItemPatternIdentifiersStatics const& f) { return f.RowProperty(); });
    }
    inline auto GridItemPatternIdentifiers::RowSpanProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridItemPatternIdentifiersStatics const&), GridItemPatternIdentifiers, IGridItemPatternIdentifiersStatics>([](IGridItemPatternIdentifiersStatics const& f) { return f.RowSpanProperty(); });
    }
    inline auto GridPatternIdentifiers::ColumnCountProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridPatternIdentifiersStatics const&), GridPatternIdentifiers, IGridPatternIdentifiersStatics>([](IGridPatternIdentifiersStatics const& f) { return f.ColumnCountProperty(); });
    }
    inline auto GridPatternIdentifiers::RowCountProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IGridPatternIdentifiersStatics const&), GridPatternIdentifiers, IGridPatternIdentifiersStatics>([](IGridPatternIdentifiersStatics const& f) { return f.RowCountProperty(); });
    }
    inline auto MultipleViewPatternIdentifiers::CurrentViewProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IMultipleViewPatternIdentifiersStatics const&), MultipleViewPatternIdentifiers, IMultipleViewPatternIdentifiersStatics>([](IMultipleViewPatternIdentifiersStatics const& f) { return f.CurrentViewProperty(); });
    }
    inline auto MultipleViewPatternIdentifiers::SupportedViewsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IMultipleViewPatternIdentifiersStatics const&), MultipleViewPatternIdentifiers, IMultipleViewPatternIdentifiersStatics>([](IMultipleViewPatternIdentifiersStatics const& f) { return f.SupportedViewsProperty(); });
    }
    inline auto RangeValuePatternIdentifiers::IsReadOnlyProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IRangeValuePatternIdentifiersStatics const&), RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>([](IRangeValuePatternIdentifiersStatics const& f) { return f.IsReadOnlyProperty(); });
    }
    inline auto RangeValuePatternIdentifiers::LargeChangeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IRangeValuePatternIdentifiersStatics const&), RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>([](IRangeValuePatternIdentifiersStatics const& f) { return f.LargeChangeProperty(); });
    }
    inline auto RangeValuePatternIdentifiers::MaximumProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IRangeValuePatternIdentifiersStatics const&), RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>([](IRangeValuePatternIdentifiersStatics const& f) { return f.MaximumProperty(); });
    }
    inline auto RangeValuePatternIdentifiers::MinimumProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IRangeValuePatternIdentifiersStatics const&), RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>([](IRangeValuePatternIdentifiersStatics const& f) { return f.MinimumProperty(); });
    }
    inline auto RangeValuePatternIdentifiers::SmallChangeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IRangeValuePatternIdentifiersStatics const&), RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>([](IRangeValuePatternIdentifiersStatics const& f) { return f.SmallChangeProperty(); });
    }
    inline auto RangeValuePatternIdentifiers::ValueProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IRangeValuePatternIdentifiersStatics const&), RangeValuePatternIdentifiers, IRangeValuePatternIdentifiersStatics>([](IRangeValuePatternIdentifiersStatics const& f) { return f.ValueProperty(); });
    }
    inline auto ScrollPatternIdentifiers::HorizontallyScrollableProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.HorizontallyScrollableProperty(); });
    }
    inline auto ScrollPatternIdentifiers::HorizontalScrollPercentProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.HorizontalScrollPercentProperty(); });
    }
    inline auto ScrollPatternIdentifiers::HorizontalViewSizeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.HorizontalViewSizeProperty(); });
    }
    inline auto ScrollPatternIdentifiers::NoScroll()
    {
        return impl::call_factory_cast<double(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.NoScroll(); });
    }
    inline auto ScrollPatternIdentifiers::VerticallyScrollableProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.VerticallyScrollableProperty(); });
    }
    inline auto ScrollPatternIdentifiers::VerticalScrollPercentProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.VerticalScrollPercentProperty(); });
    }
    inline auto ScrollPatternIdentifiers::VerticalViewSizeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IScrollPatternIdentifiersStatics const&), ScrollPatternIdentifiers, IScrollPatternIdentifiersStatics>([](IScrollPatternIdentifiersStatics const& f) { return f.VerticalViewSizeProperty(); });
    }
    inline auto SelectionItemPatternIdentifiers::IsSelectedProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ISelectionItemPatternIdentifiersStatics const&), SelectionItemPatternIdentifiers, ISelectionItemPatternIdentifiersStatics>([](ISelectionItemPatternIdentifiersStatics const& f) { return f.IsSelectedProperty(); });
    }
    inline auto SelectionItemPatternIdentifiers::SelectionContainerProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ISelectionItemPatternIdentifiersStatics const&), SelectionItemPatternIdentifiers, ISelectionItemPatternIdentifiersStatics>([](ISelectionItemPatternIdentifiersStatics const& f) { return f.SelectionContainerProperty(); });
    }
    inline auto SelectionPatternIdentifiers::CanSelectMultipleProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ISelectionPatternIdentifiersStatics const&), SelectionPatternIdentifiers, ISelectionPatternIdentifiersStatics>([](ISelectionPatternIdentifiersStatics const& f) { return f.CanSelectMultipleProperty(); });
    }
    inline auto SelectionPatternIdentifiers::IsSelectionRequiredProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ISelectionPatternIdentifiersStatics const&), SelectionPatternIdentifiers, ISelectionPatternIdentifiersStatics>([](ISelectionPatternIdentifiersStatics const& f) { return f.IsSelectionRequiredProperty(); });
    }
    inline auto SelectionPatternIdentifiers::SelectionProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ISelectionPatternIdentifiersStatics const&), SelectionPatternIdentifiers, ISelectionPatternIdentifiersStatics>([](ISelectionPatternIdentifiersStatics const& f) { return f.SelectionProperty(); });
    }
    inline auto SpreadsheetItemPatternIdentifiers::FormulaProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ISpreadsheetItemPatternIdentifiersStatics const&), SpreadsheetItemPatternIdentifiers, ISpreadsheetItemPatternIdentifiersStatics>([](ISpreadsheetItemPatternIdentifiersStatics const& f) { return f.FormulaProperty(); });
    }
    inline auto StylesPatternIdentifiers::ExtendedPropertiesProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.ExtendedPropertiesProperty(); });
    }
    inline auto StylesPatternIdentifiers::FillColorProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.FillColorProperty(); });
    }
    inline auto StylesPatternIdentifiers::FillPatternColorProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.FillPatternColorProperty(); });
    }
    inline auto StylesPatternIdentifiers::FillPatternStyleProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.FillPatternStyleProperty(); });
    }
    inline auto StylesPatternIdentifiers::ShapeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.ShapeProperty(); });
    }
    inline auto StylesPatternIdentifiers::StyleIdProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.StyleIdProperty(); });
    }
    inline auto StylesPatternIdentifiers::StyleNameProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IStylesPatternIdentifiersStatics const&), StylesPatternIdentifiers, IStylesPatternIdentifiersStatics>([](IStylesPatternIdentifiersStatics const& f) { return f.StyleNameProperty(); });
    }
    inline auto TableItemPatternIdentifiers::ColumnHeaderItemsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITableItemPatternIdentifiersStatics const&), TableItemPatternIdentifiers, ITableItemPatternIdentifiersStatics>([](ITableItemPatternIdentifiersStatics const& f) { return f.ColumnHeaderItemsProperty(); });
    }
    inline auto TableItemPatternIdentifiers::RowHeaderItemsProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITableItemPatternIdentifiersStatics const&), TableItemPatternIdentifiers, ITableItemPatternIdentifiersStatics>([](ITableItemPatternIdentifiersStatics const& f) { return f.RowHeaderItemsProperty(); });
    }
    inline auto TablePatternIdentifiers::ColumnHeadersProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITablePatternIdentifiersStatics const&), TablePatternIdentifiers, ITablePatternIdentifiersStatics>([](ITablePatternIdentifiersStatics const& f) { return f.ColumnHeadersProperty(); });
    }
    inline auto TablePatternIdentifiers::RowHeadersProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITablePatternIdentifiersStatics const&), TablePatternIdentifiers, ITablePatternIdentifiersStatics>([](ITablePatternIdentifiersStatics const& f) { return f.RowHeadersProperty(); });
    }
    inline auto TablePatternIdentifiers::RowOrColumnMajorProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITablePatternIdentifiersStatics const&), TablePatternIdentifiers, ITablePatternIdentifiersStatics>([](ITablePatternIdentifiersStatics const& f) { return f.RowOrColumnMajorProperty(); });
    }
    inline auto TogglePatternIdentifiers::ToggleStateProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITogglePatternIdentifiersStatics const&), TogglePatternIdentifiers, ITogglePatternIdentifiersStatics>([](ITogglePatternIdentifiersStatics const& f) { return f.ToggleStateProperty(); });
    }
    inline auto TransformPattern2Identifiers::CanZoomProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPattern2IdentifiersStatics const&), TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>([](ITransformPattern2IdentifiersStatics const& f) { return f.CanZoomProperty(); });
    }
    inline auto TransformPattern2Identifiers::ZoomLevelProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPattern2IdentifiersStatics const&), TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>([](ITransformPattern2IdentifiersStatics const& f) { return f.ZoomLevelProperty(); });
    }
    inline auto TransformPattern2Identifiers::MaxZoomProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPattern2IdentifiersStatics const&), TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>([](ITransformPattern2IdentifiersStatics const& f) { return f.MaxZoomProperty(); });
    }
    inline auto TransformPattern2Identifiers::MinZoomProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPattern2IdentifiersStatics const&), TransformPattern2Identifiers, ITransformPattern2IdentifiersStatics>([](ITransformPattern2IdentifiersStatics const& f) { return f.MinZoomProperty(); });
    }
    inline auto TransformPatternIdentifiers::CanMoveProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPatternIdentifiersStatics const&), TransformPatternIdentifiers, ITransformPatternIdentifiersStatics>([](ITransformPatternIdentifiersStatics const& f) { return f.CanMoveProperty(); });
    }
    inline auto TransformPatternIdentifiers::CanResizeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPatternIdentifiersStatics const&), TransformPatternIdentifiers, ITransformPatternIdentifiersStatics>([](ITransformPatternIdentifiersStatics const& f) { return f.CanResizeProperty(); });
    }
    inline auto TransformPatternIdentifiers::CanRotateProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(ITransformPatternIdentifiersStatics const&), TransformPatternIdentifiers, ITransformPatternIdentifiersStatics>([](ITransformPatternIdentifiersStatics const& f) { return f.CanRotateProperty(); });
    }
    inline auto ValuePatternIdentifiers::IsReadOnlyProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IValuePatternIdentifiersStatics const&), ValuePatternIdentifiers, IValuePatternIdentifiersStatics>([](IValuePatternIdentifiersStatics const& f) { return f.IsReadOnlyProperty(); });
    }
    inline auto ValuePatternIdentifiers::ValueProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IValuePatternIdentifiersStatics const&), ValuePatternIdentifiers, IValuePatternIdentifiersStatics>([](IValuePatternIdentifiersStatics const& f) { return f.ValueProperty(); });
    }
    inline auto WindowPatternIdentifiers::CanMaximizeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IWindowPatternIdentifiersStatics const&), WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>([](IWindowPatternIdentifiersStatics const& f) { return f.CanMaximizeProperty(); });
    }
    inline auto WindowPatternIdentifiers::CanMinimizeProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IWindowPatternIdentifiersStatics const&), WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>([](IWindowPatternIdentifiersStatics const& f) { return f.CanMinimizeProperty(); });
    }
    inline auto WindowPatternIdentifiers::IsModalProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IWindowPatternIdentifiersStatics const&), WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>([](IWindowPatternIdentifiersStatics const& f) { return f.IsModalProperty(); });
    }
    inline auto WindowPatternIdentifiers::IsTopmostProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IWindowPatternIdentifiersStatics const&), WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>([](IWindowPatternIdentifiersStatics const& f) { return f.IsTopmostProperty(); });
    }
    inline auto WindowPatternIdentifiers::WindowInteractionStateProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IWindowPatternIdentifiersStatics const&), WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>([](IWindowPatternIdentifiersStatics const& f) { return f.WindowInteractionStateProperty(); });
    }
    inline auto WindowPatternIdentifiers::WindowVisualStateProperty()
    {
        return impl::call_factory_cast<Windows::UI::Xaml::Automation::AutomationProperty(*)(IWindowPatternIdentifiersStatics const&), WindowPatternIdentifiers, IWindowPatternIdentifiersStatics>([](IWindowPatternIdentifiersStatics const& f) { return f.WindowVisualStateProperty(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotationFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationAnnotationStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics7> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics8> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics7> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics8> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IAutomationProperty> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPattern2Identifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::AnnotationPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationAnnotation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationElementIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::AutomationProperty> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::DockPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::DragPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::DropTargetPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ExpandCollapsePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::GridItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::GridPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::MultipleViewPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::RangeValuePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ScrollPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::SelectionItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::SelectionPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::SpreadsheetItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::StylesPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::TableItemPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::TablePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::TogglePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::TransformPattern2Identifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::TransformPatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::ValuePatternIdentifiers> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Xaml::Automation::WindowPatternIdentifiers> : winrt::impl::hash_base {};
#endif
}
#endif
