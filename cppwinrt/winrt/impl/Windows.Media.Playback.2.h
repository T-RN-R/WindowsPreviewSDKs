// C++/WinRT v2.0.191023.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Playback_2_H
#define WINRT_Windows_Media_Playback_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.Playback.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Playback
{
    struct BackgroundMediaPlayer
    {
        BackgroundMediaPlayer() = delete;
        [[nodiscard]] static auto Current();
        static auto MessageReceivedFromBackground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
        using MessageReceivedFromBackground_revoker = impl::factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics, &impl::abi_t<Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromBackground>;
        [[nodiscard]] static MessageReceivedFromBackground_revoker MessageReceivedFromBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
        static auto MessageReceivedFromBackground(winrt::event_token const& token);
        static auto MessageReceivedFromForeground(Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
        using MessageReceivedFromForeground_revoker = impl::factory_event_revoker<Windows::Media::Playback::IBackgroundMediaPlayerStatics, &impl::abi_t<Windows::Media::Playback::IBackgroundMediaPlayerStatics>::remove_MessageReceivedFromForeground>;
        [[nodiscard]] static MessageReceivedFromForeground_revoker MessageReceivedFromForeground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> const& value);
        static auto MessageReceivedFromForeground(winrt::event_token const& token);
        static auto SendMessageToBackground(Windows::Foundation::Collections::ValueSet const& value);
        static auto SendMessageToForeground(Windows::Foundation::Collections::ValueSet const& value);
        static auto IsMediaPlaying();
        static auto Shutdown();
    };
    struct __declspec(empty_bases) CurrentMediaPlaybackItemChangedEventArgs : Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs,
        impl::require<CurrentMediaPlaybackItemChangedEventArgs, Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs2>
    {
        CurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t) noexcept {}
        CurrentMediaPlaybackItemChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::ICurrentMediaPlaybackItemChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaBreak : Windows::Media::Playback::IMediaBreak
    {
        MediaBreak(std::nullptr_t) noexcept {}
        MediaBreak(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreak(ptr, take_ownership_from_abi) {}
        MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod);
        MediaBreak(Windows::Media::Playback::MediaBreakInsertionMethod const& insertionMethod, Windows::Foundation::TimeSpan const& presentationPosition);
    };
    struct __declspec(empty_bases) MediaBreakEndedEventArgs : Windows::Media::Playback::IMediaBreakEndedEventArgs
    {
        MediaBreakEndedEventArgs(std::nullptr_t) noexcept {}
        MediaBreakEndedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreakEndedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaBreakManager : Windows::Media::Playback::IMediaBreakManager
    {
        MediaBreakManager(std::nullptr_t) noexcept {}
        MediaBreakManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreakManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaBreakSchedule : Windows::Media::Playback::IMediaBreakSchedule
    {
        MediaBreakSchedule(std::nullptr_t) noexcept {}
        MediaBreakSchedule(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreakSchedule(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaBreakSeekedOverEventArgs : Windows::Media::Playback::IMediaBreakSeekedOverEventArgs
    {
        MediaBreakSeekedOverEventArgs(std::nullptr_t) noexcept {}
        MediaBreakSeekedOverEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreakSeekedOverEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaBreakSkippedEventArgs : Windows::Media::Playback::IMediaBreakSkippedEventArgs
    {
        MediaBreakSkippedEventArgs(std::nullptr_t) noexcept {}
        MediaBreakSkippedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreakSkippedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaBreakStartedEventArgs : Windows::Media::Playback::IMediaBreakStartedEventArgs
    {
        MediaBreakStartedEventArgs(std::nullptr_t) noexcept {}
        MediaBreakStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaBreakStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaItemDisplayProperties : Windows::Media::Playback::IMediaItemDisplayProperties
    {
        MediaItemDisplayProperties(std::nullptr_t) noexcept {}
        MediaItemDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaItemDisplayProperties(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackAudioTrackList : Windows::Foundation::Collections::IVectorView<Windows::Media::Core::AudioTrack>,
        impl::require<MediaPlaybackAudioTrackList, Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        MediaPlaybackAudioTrackList(std::nullptr_t) noexcept {}
        MediaPlaybackAudioTrackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Media::Core::AudioTrack>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManager : Windows::Media::Playback::IMediaPlaybackCommandManager
    {
        MediaPlaybackCommandManager(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManager(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
    {
        MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerCommandBehavior : Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior
    {
        MediaPlaybackCommandManagerCommandBehavior(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerCommandBehavior(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerCommandBehavior(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerFastForwardReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs
    {
        MediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerFastForwardReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerFastForwardReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerNextReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs
    {
        MediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerNextReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerNextReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerPauseReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs
    {
        MediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerPauseReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerPauseReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerPlayReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs
    {
        MediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerPlayReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerPlayReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerPositionReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs
    {
        MediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerPositionReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerPositionReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerPreviousReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs
    {
        MediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerPreviousReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerPreviousReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerRateReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs
    {
        MediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerRateReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerRateReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerRewindReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs
    {
        MediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerRewindReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerRewindReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackCommandManagerShuffleReceivedEventArgs : Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs
    {
        MediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackCommandManagerShuffleReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackCommandManagerShuffleReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackItem : Windows::Media::Playback::IMediaPlaybackItem,
        impl::require<MediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackItem3>
    {
        MediaPlaybackItem(std::nullptr_t) noexcept {}
        MediaPlaybackItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackItem(ptr, take_ownership_from_abi) {}
        MediaPlaybackItem(Windows::Media::Core::MediaSource const& source);
        MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime);
        MediaPlaybackItem(Windows::Media::Core::MediaSource const& source, Windows::Foundation::TimeSpan const& startTime, Windows::Foundation::TimeSpan const& durationLimit);
        static auto FindFromMediaSource(Windows::Media::Core::MediaSource const& source);
    };
    struct __declspec(empty_bases) MediaPlaybackItemError : Windows::Media::Playback::IMediaPlaybackItemError
    {
        MediaPlaybackItemError(std::nullptr_t) noexcept {}
        MediaPlaybackItemError(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackItemError(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackItemFailedEventArgs : Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs
    {
        MediaPlaybackItemFailedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackItemFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackItemFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackItemOpenedEventArgs : Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs
    {
        MediaPlaybackItemOpenedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackItemOpenedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackItemOpenedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackList : Windows::Media::Playback::IMediaPlaybackList,
        impl::require<MediaPlaybackList, Windows::Media::Playback::IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackList3>
    {
        MediaPlaybackList(std::nullptr_t) noexcept {}
        MediaPlaybackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackList(ptr, take_ownership_from_abi) {}
        MediaPlaybackList();
    };
    struct __declspec(empty_bases) MediaPlaybackSession : Windows::Media::Playback::IMediaPlaybackSession,
        impl::require<MediaPlaybackSession, Windows::Media::Playback::IMediaPlaybackSession2, Windows::Media::Playback::IMediaPlaybackSession3>
    {
        MediaPlaybackSession(std::nullptr_t) noexcept {}
        MediaPlaybackSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackSessionBufferingStartedEventArgs : Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs
    {
        MediaPlaybackSessionBufferingStartedEventArgs(std::nullptr_t) noexcept {}
        MediaPlaybackSessionBufferingStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackSessionBufferingStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackSessionOutputDegradationPolicyState : Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState
    {
        MediaPlaybackSessionOutputDegradationPolicyState(std::nullptr_t) noexcept {}
        MediaPlaybackSessionOutputDegradationPolicyState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackSessionOutputDegradationPolicyState(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackSphericalVideoProjection : Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection
    {
        MediaPlaybackSphericalVideoProjection(std::nullptr_t) noexcept {}
        MediaPlaybackSphericalVideoProjection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlaybackSphericalVideoProjection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackTimedMetadataTrackList : Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>,
        impl::require<MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::IMediaPlaybackTimedMetadataTrackList>
    {
        MediaPlaybackTimedMetadataTrackList(std::nullptr_t) noexcept {}
        MediaPlaybackTimedMetadataTrackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlaybackVideoTrackList : Windows::Foundation::Collections::IVectorView<Windows::Media::Core::VideoTrack>,
        impl::require<MediaPlaybackVideoTrackList, Windows::Media::Core::ISingleSelectMediaTrackList>
    {
        MediaPlaybackVideoTrackList(std::nullptr_t) noexcept {}
        MediaPlaybackVideoTrackList(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Media::Core::VideoTrack>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlayer : Windows::Media::Playback::IMediaPlayer,
        impl::require<MediaPlayer, Windows::Media::Playback::IMediaPlayerSource, Windows::Media::Playback::IMediaPlayerSource2, Windows::Media::Playback::IMediaPlayer2, Windows::Media::Playback::IMediaPlayerEffects, Windows::Foundation::IClosable, Windows::Media::Playback::IMediaPlayer3, Windows::Media::Playback::IMediaPlayer4, Windows::Media::Playback::IMediaPlayerEffects2, Windows::Media::Playback::IMediaPlayer5, Windows::Media::Playback::IMediaPlayer6, Windows::Media::Playback::IMediaPlayer7>
    {
        MediaPlayer(std::nullptr_t) noexcept {}
        MediaPlayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlayer(ptr, take_ownership_from_abi) {}
        MediaPlayer();
    };
    struct __declspec(empty_bases) MediaPlayerDataReceivedEventArgs : Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs
    {
        MediaPlayerDataReceivedEventArgs(std::nullptr_t) noexcept {}
        MediaPlayerDataReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlayerDataReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlayerFailedEventArgs : Windows::Media::Playback::IMediaPlayerFailedEventArgs
    {
        MediaPlayerFailedEventArgs(std::nullptr_t) noexcept {}
        MediaPlayerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlayerFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlayerRateChangedEventArgs : Windows::Media::Playback::IMediaPlayerRateChangedEventArgs
    {
        MediaPlayerRateChangedEventArgs(std::nullptr_t) noexcept {}
        MediaPlayerRateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlayerRateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MediaPlayerSurface : Windows::Media::Playback::IMediaPlayerSurface,
        impl::require<MediaPlayerSurface, Windows::Foundation::IClosable>
    {
        MediaPlayerSurface(std::nullptr_t) noexcept {}
        MediaPlayerSurface(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IMediaPlayerSurface(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackMediaMarker : Windows::Media::Playback::IPlaybackMediaMarker
    {
        PlaybackMediaMarker(std::nullptr_t) noexcept {}
        PlaybackMediaMarker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IPlaybackMediaMarker(ptr, take_ownership_from_abi) {}
        PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value);
        PlaybackMediaMarker(Windows::Foundation::TimeSpan const& value, param::hstring const& mediaMarketType, param::hstring const& text);
    };
    struct __declspec(empty_bases) PlaybackMediaMarkerReachedEventArgs : Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs
    {
        PlaybackMediaMarkerReachedEventArgs(std::nullptr_t) noexcept {}
        PlaybackMediaMarkerReachedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IPlaybackMediaMarkerReachedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PlaybackMediaMarkerSequence : Windows::Media::Playback::IPlaybackMediaMarkerSequence
    {
        PlaybackMediaMarkerSequence(std::nullptr_t) noexcept {}
        PlaybackMediaMarkerSequence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::IPlaybackMediaMarkerSequence(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TimedMetadataPresentationModeChangedEventArgs : Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs
    {
        TimedMetadataPresentationModeChangedEventArgs(std::nullptr_t) noexcept {}
        TimedMetadataPresentationModeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Playback::ITimedMetadataPresentationModeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
