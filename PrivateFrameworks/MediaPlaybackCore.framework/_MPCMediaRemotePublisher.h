/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCMediaRemotePublisher : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSourcePrivate> {
    NSArray * _accounts;
    bool  _activeAccountAllowsSubscriptionPlayback;
    NSString * _activeAccountStoreFrontIdentifier;
    MPRemoteCommandCenter * _commandCenter;
    bool  _engineRestoringState;
    bool  _hasBeganFastForward;
    bool  _hasBeganRewind;
    MPNowPlayingInfoCenter * _infoCenter;
    bool  _initializedSupportedCommands;
    NSUserDefaults * _ipodDefaults;
    MPLibraryAddStatusObserver * _libraryAddStatusObserver;
    bool  _mediaServerAvailable;
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic, readonly) MPRemoteCommandCenter *commandCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEngineRestoringState, nonatomic) bool engineRestoringState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPNowPlayingInfoCenter *infoCenter;
@property (getter=hasInitializedSupportedCommands, nonatomic) bool initializedSupportedCommands;
@property (getter=isMediaServerAvailable, nonatomic) bool mediaServerAvailable;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_becomeActiveIfNeededWithCompletion:(id /* block */)arg1;
- (void)_commandEventDidTimeoutNotification:(id)arg1;
- (void)_disableQueueModificationsChangedNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 play:(bool)arg2 completion:(id /* block */)arg3;
- (id)_exportableSessionTypes;
- (void)_likedStateChangedNotification:(id)arg1;
- (void)_performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)_playbackStateIsIdle:(long long)arg1;
- (id)_supportedSessionTypes;
- (void)_updateLaunchCommands;
- (void)_updateSupportedCommands;
- (void)becomeActive;
- (id)commandCenter;
- (void)engine:(id)arg1 didChangeAccounts:(id)arg2;
- (void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engineDidEndStateRestoration:(id)arg1;
- (void)engineDidLoseMediaServices:(id)arg1;
- (void)engineDidResetMediaServices:(id)arg1;
- (void)engineWillBeginStateRestoration:(id)arg1;
- (void)getShouldRestoreStateWithCompletion:(id /* block */)arg1;
- (bool)hasInitializedSupportedCommands;
- (id)infoCenter;
- (id)initWithPlaybackEngine:(id)arg1;
- (bool)isEngineRestoringState;
- (bool)isMediaServerAvailable;
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long*)arg4;
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(id /* block */)arg3;
- (void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;
- (id)playbackEngine;
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;
- (id)playerPath;
- (void)publishIfNeeded;
- (void)reportUserBackgroundedApplication;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setEngineRestoringState:(bool)arg1;
- (void)setInitializedSupportedCommands:(bool)arg1;
- (void)setMediaServerAvailable:(bool)arg1;

@end
