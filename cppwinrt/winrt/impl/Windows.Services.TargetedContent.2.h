// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_TargetedContent_2_H
#define WINRT_Windows_Services_TargetedContent_2_H
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Services.TargetedContent.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent
{
    struct __declspec(empty_bases) TargetedContentAction : Windows::Services::TargetedContent::ITargetedContentAction
    {
        TargetedContentAction(std::nullptr_t) noexcept {}
        TargetedContentAction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentAction(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentAvailabilityChangedEventArgs : Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs
    {
        TargetedContentAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
        TargetedContentAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentChangedEventArgs : Windows::Services::TargetedContent::ITargetedContentChangedEventArgs
    {
        TargetedContentChangedEventArgs(std::nullptr_t) noexcept {}
        TargetedContentChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentCollection : Windows::Services::TargetedContent::ITargetedContentCollection
    {
        TargetedContentCollection(std::nullptr_t) noexcept {}
        TargetedContentCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentContainer : Windows::Services::TargetedContent::ITargetedContentContainer
    {
        TargetedContentContainer(std::nullptr_t) noexcept {}
        TargetedContentContainer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentContainer(ptr, take_ownership_from_abi) {}
        static auto GetAsync(param::hstring const& contentId);
    };
    struct __declspec(empty_bases) TargetedContentFile : Windows::Storage::Streams::IRandomAccessStreamReference
    {
        TargetedContentFile(std::nullptr_t) noexcept {}
        TargetedContentFile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStreamReference(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentImage : Windows::Services::TargetedContent::ITargetedContentImage
    {
        TargetedContentImage(std::nullptr_t) noexcept {}
        TargetedContentImage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentImage(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentItem : Windows::Services::TargetedContent::ITargetedContentItem
    {
        TargetedContentItem(std::nullptr_t) noexcept {}
        TargetedContentItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentItem(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentItemState : Windows::Services::TargetedContent::ITargetedContentItemState
    {
        TargetedContentItemState(std::nullptr_t) noexcept {}
        TargetedContentItemState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentItemState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentObject : Windows::Services::TargetedContent::ITargetedContentObject
    {
        TargetedContentObject(std::nullptr_t) noexcept {}
        TargetedContentObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentObject(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentStateChangedEventArgs : Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs
    {
        TargetedContentStateChangedEventArgs(std::nullptr_t) noexcept {}
        TargetedContentStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentSubscription : Windows::Services::TargetedContent::ITargetedContentSubscription
    {
        TargetedContentSubscription(std::nullptr_t) noexcept {}
        TargetedContentSubscription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentSubscription(ptr, take_ownership_from_abi) {}
        static auto GetAsync(param::hstring const& subscriptionId);
        static auto GetOptions(param::hstring const& subscriptionId);
    };
    struct __declspec(empty_bases) TargetedContentSubscriptionOptions : Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions
    {
        TargetedContentSubscriptionOptions(std::nullptr_t) noexcept {}
        TargetedContentSubscriptionOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetedContentValue : Windows::Services::TargetedContent::ITargetedContentValue
    {
        TargetedContentValue(std::nullptr_t) noexcept {}
        TargetedContentValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::TargetedContent::ITargetedContentValue(ptr, take_ownership_from_abi) {}
    };
}
#endif
