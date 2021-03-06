/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkView : UIView <CAAnimationDelegate, LPComponentViewDelegate, LPTapToLoadViewDelegate, LPThemeClient, UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    NSURL * _URL;
    bool  _allowsLoadingMediaWithAutoPlayDisabled;
    bool  _allowsOpeningSensitiveURLs;
    bool  _allowsTapToLoad;
    NSArray * _alternateImages;
    LPAnimationMaskView * _animationMaskView;
    long long  _animationOrigin;
    UIView * _animationView;
    bool  _applyCornerRadius;
    bool  _asynchronouslyLoadingMetadataFields;
    UIColor * _backgroundColor;
    LPImage * _backgroundImage;
    LPImagePresentationProperties * _backgroundImageProperties;
    LPCaptionBarPresentationProperties * _captionBar;
    LPCaptionButtonPresentationProperties * _captionButton;
    UIView * _captionHighlightView;
    LPLinkViewComponents * _components;
    LPLinkViewComponents * _componentsForSizing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    UIView * _contentView;
    UIContextMenuInteraction * _contextMenuInteraction;
    <LPLinkViewDelegate> * _delegate;
    bool  _disableAnimations;
    bool  _disableAutoPlay;
    bool  _disableHighlightGesture;
    bool  _disablePlayback;
    bool  _disablePlaybackControls;
    bool  _disablePreviewGesture;
    bool  _disableTapGesture;
    NSString * _domainNameForIndicator;
    bool  _forceFlexibleWidth;
    bool  _hasEverBuilt;
    bool  _hasSetDisableHighlightGesture;
    bool  _hasSetDisablePreviewGesture;
    bool  _hasValidPresentationProperties;
    NSMutableArray * _highlightGestureRecognizers;
    LPImage * _image;
    LPImagePresentationProperties * _imageProperties;
    LPInlineMediaPlaybackInformation * _inlinePlaybackInformation;
    bool  _isPreliminary;
    unsigned int  _loggingID;
    bool  _mayReceiveAdditionalMetadata;
    LPCaptionBarPresentationProperties * _mediaBottomCaptionBar;
    UIView * _mediaHighlightView;
    LPCaptionBarPresentationProperties * _mediaTopCaptionBar;
    LPLinkMetadata * _metadata;
    bool  _metadataIsComplete;
    double  _minimumHeight;
    NSArray * _multipleMetadata;
    NSArray * _multipleURLs;
    bool  _needsMessagesTranscriptPushCounterAnimation;
    bool  _needsRebuild;
    UIColor * _overrideBackgroundColor;
    NSURL * _overrideURL;
    NSHashTable * _pendingMetadataProviders;
    unsigned long long  _preferredSizeClass;
    NSString * _quotedText;
    bool  _shouldAnimateDuringNextBuild;
    NSString * _sourceBundleIdentifier;
    long long  _style;
    NSMutableArray * _tapGestureRecognizers;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textSafeAreaInset;
    LPTheme * _theme;
    bool  _usesComputedPresentationProperties;
    bool  _usesDeferredLayout;
    LPVideo * _video;
}

@property (nonatomic, retain) NSURL *URL;
@property (setter=_setAllowsLoadingMediaWithAutoPlayDisabled:, nonatomic) bool _allowsLoadingMediaWithAutoPlayDisabled;
@property (setter=_setAllowsOpeningSensitiveURLs:, nonatomic) bool _allowsOpeningSensitiveURLs;
@property (setter=_setAllowsTapToLoad:, nonatomic) bool _allowsTapToLoad;
@property (setter=_setAnimationOrigin:, nonatomic) long long _animationOrigin;
@property (setter=_setApplyCornerRadius:, nonatomic) bool _applyCornerRadius;
@property (setter=_setDisableAnimations:, nonatomic) bool _disableAnimations;
@property (setter=_setDisableAutoPlay:, nonatomic) bool _disableAutoPlay;
@property (setter=_setDisableHighlightGesture:, nonatomic) bool _disableHighlightGesture;
@property (setter=_setDisablePlayback:, nonatomic) bool _disablePlayback;
@property (setter=_setDisablePlaybackControls:, nonatomic) bool _disablePlaybackControls;
@property (setter=_setDisablePreviewGesture:, nonatomic) bool _disablePreviewGesture;
@property (setter=_setDisableTapGesture:, nonatomic) bool _disableTapGesture;
@property (setter=_setForceFlexibleWidth:, nonatomic) bool _forceFlexibleWidth;
@property (setter=_setNeedsMessagesTranscriptPushCounterAnimation:, nonatomic) bool _needsMessagesTranscriptPushCounterAnimation;
@property (setter=_setOverrideURL:, nonatomic, retain) NSURL *_overrideURL;
@property (setter=_setPreferredSizeClass:, nonatomic) unsigned long long _preferredSizeClass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _primaryCaptionBarFrame;
@property (setter=_setSourceBundleIdentifier:, nonatomic, retain) NSString *_sourceBundleIdentifier;
@property (nonatomic, readonly) long long _style;
@property (setter=_setTextSafeAreaInset:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textSafeAreaInset;
@property (setter=_setUsesDeferredLayout:, nonatomic) bool _usesDeferredLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LPLinkViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)_addHighlightRecognizerToView:(id)arg1 forMedia:(bool)arg2;
- (void)_addTapRecognizerToView:(id)arg1 forMedia:(bool)arg2;
- (bool)_allowsLoadingMediaWithAutoPlayDisabled;
- (bool)_allowsOpeningSensitiveURLs;
- (bool)_allowsTapToLoad;
- (long long)_animationOrigin;
- (bool)_applyCornerRadius;
- (void)_cancelActiveHighlight;
- (void)_captionBarButtonPressed:(id)arg1;
- (void)_captionHighlightRecognized:(id)arg1;
- (void)_captionTapRecognized:(id)arg1;
- (void)_commonInitWithURL:(id)arg1;
- (void)_computePresentationPropertiesFromMetadataIfNeeded;
- (void)_configureWithoutLoadingMetadataFromURLs:(id)arg1;
- (id)_createBackgroundImageView;
- (id)_createCaptionBar;
- (id)_createComponents;
- (id)_createDomainNameIndicator;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createMediaView;
- (id)_createQuotedTextView;
- (id)_createTapToLoadView;
- (void)_didScroll;
- (bool)_disableAnimations;
- (bool)_disableAutoPlay;
- (bool)_disableHighlightGesture;
- (bool)_disablePlayback;
- (bool)_disablePlaybackControls;
- (bool)_disablePreviewGesture;
- (bool)_disableTapGesture;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
- (void)_fetchMetadata;
- (id)_fetchMetadataForURL:(id)arg1 withSubresources:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_forceFlexibleWidth;
- (id)_initWithMetadataLoadedFromURLs:(id)arg1;
- (id)_initWithMultipleMetadata:(id)arg1;
- (void)_installHighlightGestureRecognizers;
- (void)_installPreviewGestureRecognizer;
- (void)_installTapGestureRecognizers;
- (void)_invalidateLayout;
- (void)_invalidatePresentationProperties;
- (bool)_isUsingAppClipPresentation;
- (void)_layoutLinkView;
- (struct CGSize { double x1; double x2; })_layoutLinkViewForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (void)_mediaHighlightRecognized:(id)arg1;
- (void)_mediaTapRecognized:(id)arg1;
- (bool)_needsMessagesTranscriptPushCounterAnimation;
- (void)_openURLAllowingSensitiveSchemes:(bool)arg1 allowingAssociatedApplications:(bool)arg2;
- (id)_overrideURL;
- (unsigned long long)_preferredSizeClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_primaryCaptionBarFrame;
- (void)_rebuildGestureRecognizersIfNeeded;
- (void)_rebuildSubviewsWithAnimation:(bool)arg1;
- (void)_setAction:(id /* block */)arg1 withText:(id)arg2;
- (void)_setAction:(id /* block */)arg1 withText:(id)arg2 buttonType:(long long)arg3;
- (void)_setAllowsLoadingMediaWithAutoPlayDisabled:(bool)arg1;
- (void)_setAllowsOpeningSensitiveURLs:(bool)arg1;
- (void)_setAllowsTapToLoad:(bool)arg1;
- (void)_setAnimationOrigin:(long long)arg1;
- (void)_setApplyCornerRadius:(bool)arg1;
- (void)_setDisableAnimations:(bool)arg1;
- (void)_setDisableAutoPlay:(bool)arg1;
- (void)_setDisableHighlightGesture:(bool)arg1;
- (void)_setDisablePlayback:(bool)arg1;
- (void)_setDisablePlaybackControls:(bool)arg1;
- (void)_setDisablePreviewGesture:(bool)arg1;
- (void)_setDisableTapGesture:(bool)arg1;
- (void)_setForceFlexibleWidth:(bool)arg1;
- (void)_setHighlightCaption:(bool)arg1;
- (void)_setHighlightMedia:(bool)arg1;
- (void)_setMaskImage:(id)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(bool)arg2;
- (void)_setMetadataInternal:(id)arg1;
- (void)_setMultipleMetadata:(id)arg1;
- (void)_setNeedsMessagesTranscriptPushCounterAnimation:(bool)arg1;
- (void)_setOverrideURL:(id)arg1;
- (void)_setPreferredSizeClass:(unsigned long long)arg1;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setSourceBundleIdentifier:(id)arg1;
- (void)_setTextSafeAreaInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setUsesDeferredLayout:(bool)arg1;
- (void)_setupView;
- (bool)_shouldApplyCornerRadius;
- (bool)_shouldClipAnimationView;
- (bool)_shouldUseAnimations;
- (id)_sourceBundleIdentifier;
- (long long)_style;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textSafeAreaInset;
- (void)_uninstallHighlightGestureRecognizers;
- (void)_uninstallPreviewGestureRecognizer;
- (void)_uninstallTapGestureRecognizers;
- (void)_updateMetadataIsComplete;
- (bool)_usesDeferredLayout;
- (id)_videoViewConfiguration;
- (void)animateBackgroundColor;
- (void)animateFromOldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldMediaBackgroundFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldCaptionBarView:(id)arg3;
- (void)animateInViews;
- (void)animateOutAndRemoveViews;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (long long)componentView:(id)arg1 allowedImageFilterForFilter:(long long)arg2;
- (void)componentViewDidChangeIntrinsicContentSize:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)metadata;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSuppressMask:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)set_preferredSizeClass:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)themeParametersDidChange;

@end
