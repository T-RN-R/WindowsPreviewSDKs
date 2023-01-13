// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_0_H
#define WINRT_Windows_ApplicationModel_DataTransfer_DragDrop_Core_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackage;
    enum class DataPackageOperation : uint32_t;
    struct DataPackageView;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop
{
    enum class DragDropModifiers : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    struct Point;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct SoftwareBitmap;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core
{
    enum class CoreDragUIContentMode : uint32_t
    {
        Auto = 0,
        Deferred = 0x1,
    };
    struct ICoreDragDropManager;
    struct ICoreDragDropManagerStatics;
    struct ICoreDragInfo;
    struct ICoreDragInfo2;
    struct ICoreDragOperation;
    struct ICoreDragOperation2;
    struct ICoreDragUIOverride;
    struct ICoreDropOperationTarget;
    struct ICoreDropOperationTargetRequestedEventArgs;
    struct CoreDragDropManager;
    struct CoreDragInfo;
    struct CoreDragOperation;
    struct CoreDragUIOverride;
    struct CoreDropOperationTargetRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIContentMode";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> = L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>{ 0x7D56D344,0x8464,0x4FAF,{ 0xAA,0x49,0x37,0xEA,0x6E,0x2D,0x7B,0xD1 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>{ 0x9542FDCA,0xDA12,0x4C1C,{ 0x8D,0x06,0x04,0x1D,0xB2,0x97,0x33,0xC3 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>{ 0x48353A8B,0xCB50,0x464E,{ 0x95,0x75,0xCD,0x4E,0x3A,0x7A,0xB0,0x28 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>{ 0xC54691E5,0xE6FB,0x4D74,{ 0xB4,0xB1,0x8A,0x3C,0x17,0xF2,0x5E,0x9E } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>{ 0xCC06DE4F,0x6DB0,0x4E62,{ 0xAB,0x1B,0xA7,0x4A,0x02,0xDC,0x6D,0x85 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>{ 0x824B1E2C,0xD99A,0x4FC3,{ 0x85,0x07,0x6C,0x18,0x2F,0x33,0xB4,0x6A } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>{ 0x89A85064,0x3389,0x4F4F,{ 0x88,0x97,0x7E,0x8A,0x3F,0xFB,0x3C,0x93 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>{ 0xD9126196,0x4C5B,0x417D,{ 0xBB,0x37,0x76,0x38,0x1D,0xEF,0x8D,0xB4 } };
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>{ 0x2ACA929A,0x5E28,0x4EA6,{ 0x82,0x9E,0x29,0x13,0x4E,0x66,0x5D,0x6D } };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager; };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo; };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation; };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride; };
    template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs; };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_TargetRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_AreConcurrentOperationsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreConcurrentOperationsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall get_Modifiers(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
            virtual int32_t __stdcall SetPointerId(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetDragUIContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetDragUIContentFromSoftwareBitmapWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_DragUIContentMode(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DragUIContentMode(uint32_t) noexcept = 0;
            virtual int32_t __stdcall StartAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowedOperations(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AllowedOperations(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetContentFromSoftwareBitmap(void*) noexcept = 0;
            virtual int32_t __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_IsContentVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsContentVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Caption(void**) noexcept = 0;
            virtual int32_t __stdcall put_Caption(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCaptionVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCaptionVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsGlyphVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsGlyphVisible(bool) noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall EnterAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall OverAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall LeaveAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall DropAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetTarget(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager
    {
        WINRT_IMPL_AUTO(winrt::event_token) TargetRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const;
        using TargetRequested_revoker = impl::event_revoker<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager, &impl::abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>::remove_TargetRequested>;
        [[nodiscard]] TargetRequested_revoker TargetRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) TargetRequested(winrt::event_token const& value) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AreConcurrentOperationsEnabled() const;
        WINRT_IMPL_AUTO(void) AreConcurrentOperationsEnabled(bool value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager) GetForCurrentView() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackageView) Data() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers) Modifiers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackageOperation) AllowedOperations() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackage) Data() const;
        WINRT_IMPL_AUTO(void) SetPointerId(uint32_t pointerId) const;
        WINRT_IMPL_AUTO(void) SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
        WINRT_IMPL_AUTO(void) SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode) DragUIContentMode() const;
        WINRT_IMPL_AUTO(void) DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const& value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) StartAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::DataTransfer::DataPackageOperation) AllowedOperations() const;
        WINRT_IMPL_AUTO(void) AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride
    {
        WINRT_IMPL_AUTO(void) SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
        WINRT_IMPL_AUTO(void) SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsContentVisible() const;
        WINRT_IMPL_AUTO(void) IsContentVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Caption() const;
        WINRT_IMPL_AUTO(void) Caption(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCaptionVisible() const;
        WINRT_IMPL_AUTO(void) IsCaptionVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsGlyphVisible() const;
        WINRT_IMPL_AUTO(void) IsGlyphVisible(bool value) const;
        WINRT_IMPL_AUTO(void) Clear() const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) EnterAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) OverAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) LeaveAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation>) DropAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs
    {
        WINRT_IMPL_AUTO(void) SetTarget(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const& target) const;
    };
    template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs<D>;
    };
}
#endif
