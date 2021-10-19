/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUEndpointMetadataController : NSObject <MRUMediaSuggestionsControllerObserver, MediaControlsEndpointControllerDelegate> {
    UIImage * _applicationIcon;
    long long  _context;
    MediaControlsEndpointController * _endpointController;
    bool  _hideSuggestionsWhileDeviceIsLocked;
    NSString * _iconURL;
    MRNowPlayingPlayerResponse * _nowPlayingPlayerResponse;
    MPArtworkCatalog * _nowPlayingPlayerResponseArtworkCatalog;
    NSHashTable * _observers;
    NSString * _placeholderDeviceIdentifier;
    NSString * _quickActionCommandDescription;
    UIImage * _quickActionCommandImage;
    MPCPlayerCommandRequest * _quickActionCommandRequest;
    bool  _showMediaSuggestions;
    bool  _showPlaceholderText;
    unsigned long long  _stateHandle;
    NSString * _suggestionContext;
    MRUMediaSuggestionsController * _suggestionsController;
    MRUTVRemoteController * _tvRemoteController;
    NSString * _undiscoveredPlaceholderText;
}

@property (nonatomic, readonly) UIImage *applicationIcon;
@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly, copy) NSString *condensedTitle;
@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MediaControlsEndpointController *endpointController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSuggestionsWhileDeviceIsLocked;
@property (nonatomic, retain) NSString *iconURL;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) bool isSystemMusicApplication;
@property (nonatomic, readonly) MRUMediaSuggestion *nowPlayingMediaSuggestion;
@property (nonatomic, retain) MRNowPlayingPlayerResponse *nowPlayingPlayerResponse;
@property (nonatomic, retain) MPArtworkCatalog *nowPlayingPlayerResponseArtworkCatalog;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, copy) NSString *placeholderDeviceIdentifier;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly, copy) NSString *placeholderText;
@property (nonatomic, readonly) long long quickAction;
@property (nonatomic, readonly) NSString *quickActionCommandDescription;
@property (nonatomic, retain) UIImage *quickActionCommandImage;
@property (nonatomic, retain) MPCPlayerCommandRequest *quickActionCommandRequest;
@property (nonatomic, readonly) UIImage *quickActionImage;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly, copy) NSString *routeUID;
@property (nonatomic, readonly) bool shouldShowQuickAction;
@property (nonatomic, readonly) bool showMediaSuggestions;
@property (nonatomic) bool showPlaceholderText;
@property (nonatomic, readonly, copy) NSString *smallSubtitle;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, retain) NSString *suggestionContext;
@property (nonatomic, retain) MRUMediaSuggestionsController *suggestionsController;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) MRUTVRemoteController *tvRemoteController;
@property (nonatomic, copy) NSString *undiscoveredPlaceholderText;

- (void).cxx_destruct;
- (id)_fullStateDumpObject;
- (void)addObserver:(id)arg1;
- (id)applicationIcon;
- (id)artworkCatalog;
- (id)condensedTitle;
- (bool)containsOutputDeviceWithRouteUID:(id)arg1;
- (long long)context;
- (void)dealloc;
- (id)destination;
- (id)endpointController;
- (void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)endpointControllerDidChangeState:(id)arg1;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)endpointControllerRouteDidUpdate:(id)arg1;
- (bool)hasNowPlayingInfo;
- (bool)hideSuggestionsWhileDeviceIsLocked;
- (void)hideSuggestionsWhileDeviceIsLocked:(bool)arg1;
- (id)iconURL;
- (id)initWithEndpointController:(id)arg1;
- (bool)isEndpointDiscovered;
- (bool)isPlaying;
- (bool)isSystemMusicApplication;
- (void)mediaSuggestionsController:(id)arg1 didUpdateSuggestions:(id)arg2;
- (id)nowPlayingMediaSuggestion;
- (id)nowPlayingPlayerResponse;
- (id)nowPlayingPlayerResponseArtworkCatalog;
- (id)observers;
- (void)performQuickAction;
- (id)placeholderDeviceIdentifier;
- (id)placeholderImage;
- (id)placeholderText;
- (long long)quickAction;
- (id)quickActionCommandDescription;
- (id)quickActionCommandImage;
- (id)quickActionCommandRequest;
- (id)quickActionImage;
- (void)removeObserver:(id)arg1;
- (id)representedBundleIDFromClient:(id)arg1;
- (id)response;
- (void)resumePlabackWithCompletion:(id /* block */)arg1;
- (id)routeUID;
- (void)setApplicationIcon:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setHideSuggestionsWhileDeviceIsLocked:(bool)arg1;
- (void)setIconURL:(id)arg1;
- (void)setNowPlayingPlayerResponse:(id)arg1;
- (void)setNowPlayingPlayerResponseArtworkCatalog:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPlaceholderDeviceIdentifier:(id)arg1;
- (void)setQuickActionCommandImage:(id)arg1;
- (void)setQuickActionCommandRequest:(id)arg1;
- (void)setShowMediaSuggestions:(bool)arg1;
- (void)setShowPlaceholderText:(bool)arg1;
- (void)setSuggestionContext:(id)arg1;
- (void)setSuggestionsController:(id)arg1;
- (void)setUndiscoveredPlaceholderText:(id)arg1;
- (bool)shouldShowQuickAction;
- (bool)showMediaSuggestions;
- (bool)showPlaceholderText;
- (id)smallSubtitle;
- (id)subtitle;
- (id)subtitleComponentsWithCondensed:(bool)arg1;
- (id)suggestionContext;
- (id)suggestionsController;
- (id)title;
- (void)trackQuickActionSelected;
- (id)tvRemoteController;
- (id)undiscoveredPlaceholderText;
- (void)updateApplicationIcon;
- (void)updateAutomaticResponseLoading;
- (void)updateQuickActionCommandRequest;
- (void)updateShowMediaSuggestions;

@end