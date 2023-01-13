// C++/WinRT v2.0.200213.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_Notes_2_H
#define WINRT_Windows_ApplicationModel_Preview_Notes_2_H
#include "winrt/impl/Windows.ApplicationModel.Preview.Notes.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes
{
    struct __declspec(empty_bases) NotePlacementChangedPreviewEventArgs : Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs
    {
        NotePlacementChangedPreviewEventArgs(std::nullptr_t) noexcept {}
        NotePlacementChangedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NoteVisibilityChangedPreviewEventArgs : Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs
    {
        NoteVisibilityChangedPreviewEventArgs(std::nullptr_t) noexcept {}
        NoteVisibilityChangedPreviewEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) NotesWindowManagerPreview : Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview,
        impl::require<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>
    {
        NotesWindowManagerPreview(std::nullptr_t) noexcept {}
        NotesWindowManagerPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview(ptr, take_ownership_from_abi) {}
        using Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::ShowNoteRelativeTo;
        using impl::consume_t<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>::ShowNoteRelativeTo;
        using Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::ShowNoteWithPlacement;
        using impl::consume_t<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>::ShowNoteWithPlacement;
        static auto GetForCurrentApp();
    };
    struct __declspec(empty_bases) NotesWindowManagerPreviewShowNoteOptions : Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions
    {
        NotesWindowManagerPreviewShowNoteOptions(std::nullptr_t) noexcept {}
        NotesWindowManagerPreviewShowNoteOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions(ptr, take_ownership_from_abi) {}
        NotesWindowManagerPreviewShowNoteOptions();
    };
}
#endif
