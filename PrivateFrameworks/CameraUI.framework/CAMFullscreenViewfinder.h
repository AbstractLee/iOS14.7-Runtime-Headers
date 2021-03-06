/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFullscreenViewfinder : UIView <CAMAccessibilityHUDItemProvider, CAMAdditiveAnimatorDelegate, CAMBarsAccessibilityHUDManagerGestureProvider, CAMControlDrawerPresentationDelegate, CAMInstructionLabelDelegate, CAMViewfinderTransitionable, CEKBadgeViewDelegate> {
    UIView * __bottomLegibilityBackground;
    UIView * __contentClippingContainer;
    CAMInterfaceModulationView * __contentView;
    bool  __controlDrawerPresentedModally;
    CAMFullscreenViewfinderLayout * __layout;
    CAMLowLightInstructionLabel * __lowLightInstructionLabel;
    UIView * __modeClippingView;
    AVSpatialOverCaptureVideoPreviewLayer * __overCapturePreviewLayer;
    UIView * __previewContainerView;
    CAMViewfinderReticleView * __reticleView;
    bool  __usingCreativeCameraControls;
    CAMAdditiveAnimator * __viewportAnimator;
    CAMBadgeTray * _badgeTray;
    NSString * _contentSize;
    CAMControlDrawer * _controlDrawer;
    bool  _controlDrawerAllowed;
    bool  _controlDrawerExpanded;
    CAMControlStatusBar * _controlStatusBar;
    CAMCreativeCameraButton * _creativeCameraButton;
    CAMCTMDescriptionOverlayView * _ctmOverlayView;
    <CAMFullscreenViewfinderDelegate> * _delegate;
    CAMElapsedTimeView * _elapsedTimeView;
    bool  _elapsedTimeViewVisible;
    CAMFilterNameBadge * _filterNameBadge;
    CAMFlashCompromisedInstructionLabel * _flashCompromisedInstructionLabel;
    bool  _flashCompromisedInstructionLabelVisible;
    CAMFlipButton * _flipButton;
    bool  _flipButtonVisible;
    CAMImageWell * _imageWell;
    bool  _legibilityBackgroundsVisible;
    CEKLightingControl * _lightingControl;
    CEKLightingNameBadge * _lightingNameBadge;
    bool  _lowLightInstructionLabelVisible;
    CAMModeDial * _modeDial;
    CAMModeIndicatorView * _modeIndicator;
    CAMFullscreenModeSelector * _modeSelector;
    UILongPressGestureRecognizer * _modeSelectorGestureRecognizer;
    bool  _modeUIAllowed;
    long long  _orientation;
    CAMPanoramaView * _panoramaView;
    bool  _portraitControlsAllowed;
    CAMPortraitModeInstructionLabel * _portraitInstructionLabel;
    CAMPortraitModeDescriptionOverlayView * _portraitModeOverlayView;
    CAMPreviewAlignmentGuide * _previewAlignmentGuide;
    bool  _previewAlignmentGuideVisible;
    CAMPreviewView * _previewView;
    long long  _previewViewOrientation;
    CAMQRCodeInstructionLabel * _qrCodeInstructionLabel;
    bool  _qrCodeLabelVisible;
    long long  _shallowDepthOfFieldStatus;
    CAMDynamicShutterControl * _shutterControl;
    CAMTimerIndicatorView * _timerIndicator;
    bool  _timerIndicatorVisible;
    long long  _viewportAspectRatio;
    CAMZoomControl * _zoomControl;
    bool  _zoomControlVisible;
    CAMZoomSlider * _zoomSlider;
    unsigned long long  _zoomStyle;
}

@property (setter=_setBottomLegibilityBackground:, nonatomic, retain) UIView *_bottomLegibilityBackground;
@property (nonatomic, readonly) UIView *_contentClippingContainer;
@property (nonatomic, readonly) CAMInterfaceModulationView *_contentView;
@property (getter=_isControlDrawerPresentedModally, setter=_setControlDrawerPresentedModally:, nonatomic) bool _controlDrawerPresentedModally;
@property (nonatomic, readonly) CAMFullscreenViewfinderLayout *_layout;
@property (setter=_setLowLightInstructionLabel:, nonatomic, retain) CAMLowLightInstructionLabel *_lowLightInstructionLabel;
@property (nonatomic, readonly) UIView *_modeClippingView;
@property (setter=_setOverCapturePreviewLayer:, nonatomic, retain) AVSpatialOverCaptureVideoPreviewLayer *_overCapturePreviewLayer;
@property (nonatomic, readonly) UIView *_previewContainerView;
@property (nonatomic, readonly) CAMViewfinderReticleView *_reticleView;
@property (getter=_isUsingCreativeCameraControls, nonatomic, readonly) bool _usingCreativeCameraControls;
@property (nonatomic, readonly) CAMAdditiveAnimator *_viewportAnimator;
@property (nonatomic, readonly) CAMBadgeTray *badgeTray;
@property (nonatomic, retain) NSString *contentSize;
@property (setter=_setControlDrawer:, nonatomic, retain) CAMControlDrawer *controlDrawer;
@property (getter=isControlDrawerAllowed, nonatomic, readonly) bool controlDrawerAllowed;
@property (getter=isControlDrawerExpanded, nonatomic) bool controlDrawerExpanded;
@property (nonatomic, readonly) CAMControlStatusBar *controlStatusBar;
@property (nonatomic, readonly) CAMCreativeCameraButton *creativeCameraButton;
@property (setter=setCTMOverlayView:, nonatomic, retain) CAMCTMDescriptionOverlayView *ctmOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMFullscreenViewfinderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long desiredAspectRatio;
@property (nonatomic, readonly) CAMElapsedTimeView *elapsedTimeView;
@property (getter=isElapsedTimeViewVisible, nonatomic) bool elapsedTimeViewVisible;
@property (nonatomic, readonly) CAMFilterNameBadge *filterNameBadge;
@property (setter=_setFlashCompromisedInstructionLabel:, nonatomic, retain) CAMFlashCompromisedInstructionLabel *flashCompromisedInstructionLabel;
@property (getter=isFlashCompromisedInstructionLabelVisible, nonatomic) bool flashCompromisedInstructionLabelVisible;
@property (nonatomic, readonly) CAMFlipButton *flipButton;
@property (getter=isFlipButtonVisible, nonatomic) bool flipButtonVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMImageWell *imageWell;
@property (nonatomic) unsigned long long interfaceModulation;
@property (getter=isLegibilityBackgroundsVisible, nonatomic) bool legibilityBackgroundsVisible;
@property (nonatomic, readonly) CEKLightingControl *lightingControl;
@property (nonatomic, readonly) CEKLightingNameBadge *lightingNameBadge;
@property (getter=isLowLightInstructionLabelVisible, nonatomic) bool lowLightInstructionLabelVisible;
@property (nonatomic, readonly) CAMModeDial *modeDial;
@property (nonatomic, readonly) CAMModeIndicatorView *modeIndicator;
@property (nonatomic, readonly) CAMFullscreenModeSelector *modeSelector;
@property (nonatomic, readonly) UILongPressGestureRecognizer *modeSelectorGestureRecognizer;
@property (getter=isModeUIAllowed, nonatomic, readonly) bool modeUIAllowed;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double x1; double x2; } panoramaCaptureSize;
@property (nonatomic, retain) CAMPanoramaView *panoramaView;
@property (getter=isPortraitControlsAllowed, nonatomic) bool portraitControlsAllowed;
@property (nonatomic, readonly) CAMPortraitModeInstructionLabel *portraitInstructionLabel;
@property (nonatomic, retain) CAMPortraitModeDescriptionOverlayView *portraitModeOverlayView;
@property (setter=_setPreviewAlignmentGuide:, nonatomic, retain) CAMPreviewAlignmentGuide *previewAlignmentGuide;
@property (getter=isPreviewAlignmentGuideVisible, nonatomic) bool previewAlignmentGuideVisible;
@property (nonatomic, retain) CAMPreviewView *previewView;
@property (nonatomic) long long previewViewOrientation;
@property (nonatomic, readonly) CAMQRCodeInstructionLabel *qrCodeInstructionLabel;
@property (getter=isQRCodeLabelVisible, nonatomic, readonly) bool qrCodeLabelVisible;
@property (getter=isReticleAnimating, nonatomic, readonly) bool reticleAnimating;
@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (nonatomic, readonly) CAMDynamicShutterControl *shutterControl;
@property (readonly) Class superclass;
@property (setter=_setTimerIndicator:, nonatomic, retain) CAMTimerIndicatorView *timerIndicator;
@property (getter=isTimerIndicatorVisible, nonatomic) bool timerIndicatorVisible;
@property (nonatomic) long long viewportAspectRatio;
@property (setter=_setZoomControl:, nonatomic, retain) CAMZoomControl *zoomControl;
@property (getter=isZoomControlVisible, nonatomic) bool zoomControlVisible;
@property (setter=_setZoomSlider:, nonatomic, retain) CAMZoomSlider *zoomSlider;
@property (nonatomic) unsigned long long zoomStyle;

+ (id)darkControlBackgroundColor;
+ (Class)layerClass;
+ (id)lightControlBackgroundColor;

- (void).cxx_destruct;
- (void)_applyAnimationSensitiveGeometry:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })arg1 toView:(id)arg2;
- (unsigned long long)_badgeFontStyle;
- (id)_bottomLegibilityBackground;
- (id)_contentClippingContainer;
- (id)_contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_currentFourThreeViewportFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForBottomLegibilityBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContentClippingContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForControlDrawer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFlipButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForImageWell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLightingControl;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForModeView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPreviewOverlaysInViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForPreviewView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForReticleViewport;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })_geometryForBadgeTray;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })_geometryForBottomCenteredView:(id)arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })_geometryForInstructionLabel:(id)arg1;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; })_geometryForLandscapeLightingBadge;
- (void)_handleDirectionIndicatorTapped;
- (void)_insertBackgroundSubview:(id)arg1;
- (bool)_isControlDrawerPresentedModally;
- (bool)_isUsingCreativeCameraControls;
- (void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(id /* block */)arg2;
- (id)_layout;
- (void)_layoutPanoramaView;
- (void)_layoutZoomControls;
- (void)_loadFilterControlsIfNeeded;
- (void)_loadPortraitControlsIfNeeded;
- (id)_lowLightInstructionLabel;
- (id)_modeClippingView;
- (id)_overCapturePreviewLayer;
- (id)_previewContainerView;
- (id)_reticleView;
- (void)_setBottomLegibilityBackground:(id)arg1;
- (void)_setControlDrawer:(id)arg1;
- (void)_setControlDrawerPresentedModally:(bool)arg1;
- (void)_setFlashCompromisedInstructionLabel:(id)arg1;
- (void)_setLowLightInstructionLabel:(id)arg1;
- (void)_setNeedsLayoutAnimated:(bool)arg1;
- (void)_setOverCapturePreviewLayer:(id)arg1;
- (void)_setPreviewAlignmentGuide:(id)arg1;
- (void)_setTimerIndicator:(id)arg1;
- (void)_setViewportAnimatorFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setViewportAnimatorFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withDuration:(double)arg2 timingCurve:(id)arg3;
- (void)_setZoomControl:(id)arg1;
- (void)_setZoomSlider:(id)arg1;
- (bool)_showControlDrawer;
- (bool)_showFilterNameBadge;
- (bool)_showLandscapeLightingBadge;
- (bool)_showModeView;
- (bool)_showPortraitControls;
- (bool)_showPortraitInstructions;
- (void)_transitionView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)_updateControlsForContentSize;
- (void)_updateModeDialClippingForViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePortraitControlsHighlightAnimated:(bool)arg1;
- (void)_updatePreviewAlignmentGuideForViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePreviewLayerForPreviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateReticleForViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateSubviewsVisibilityAnimated:(bool)arg1;
- (void)_updateTintColors;
- (id)_viewportAnimator;
- (id)_visibleInstructionLabel;
- (void)animator:(id)arg1 didUpdateValuesForKeys:(id)arg2;
- (id)badgeTray;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)contentSize;
- (id)controlDrawer;
- (void)controlDrawer:(id)arg1 didChangeExpanded:(bool)arg2 forControlType:(long long)arg3 animated:(bool)arg4;
- (id)controlStatusBar;
- (id)creativeCameraButton;
- (id)ctmOverlayView;
- (id)delegate;
- (long long)desiredAspectRatio;
- (void)dismissModalControlDrawerIfNeeded;
- (id)elapsedTimeView;
- (id)filterNameBadge;
- (id)flashCompromisedInstructionLabel;
- (id)flipButton;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageWell;
- (id)initWithMetalContext:(id)arg1 useCreativeCameraControls:(bool)arg2;
- (void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1;
- (unsigned long long)interfaceModulation;
- (bool)isControlDrawerAllowed;
- (bool)isControlDrawerExpanded;
- (bool)isControlDrawerPresentedModallyWithControlType:(long long)arg1;
- (bool)isElapsedTimeViewVisible;
- (bool)isFlashCompromisedInstructionLabelVisible;
- (bool)isFlipButtonVisible;
- (bool)isLegibilityBackgroundsVisible;
- (bool)isLowLightInstructionLabelVisible;
- (bool)isModeUIAllowed;
- (bool)isPortraitControlsAllowed;
- (bool)isPreviewAlignmentGuideVisible;
- (bool)isQRCodeLabelVisible;
- (bool)isReticleAnimating;
- (bool)isTimerIndicatorVisible;
- (bool)isZoomControlVisible;
- (void)layoutSubviews;
- (id)lightingControl;
- (id)lightingNameBadge;
- (bool)loadQRCodeInstructionLabelIfNeeded;
- (id)modeDial;
- (id)modeIndicator;
- (id)modeSelector;
- (id)modeSelectorGestureRecognizer;
- (long long)orientation;
- (struct CGSize { double x1; double x2; })panoramaCaptureSize;
- (id)panoramaView;
- (id)portraitInstructionLabel;
- (id)portraitModeOverlayView;
- (void)prepareForResumingUsingCrossfade;
- (void)presentControlDrawerModally:(bool)arg1 withControlType:(long long)arg2;
- (id)previewAlignmentGuide;
- (id)previewView;
- (long long)previewViewOrientation;
- (id)qrCodeInstructionLabel;
- (void)removeInflightBlurAnimations;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setCTMOverlayView:(id)arg1;
- (void)setContentSize:(id)arg1;
- (void)setControlDrawerAllowed:(bool)arg1 modeUIAllowed:(bool)arg2 animated:(bool)arg3;
- (void)setControlDrawerExpanded:(bool)arg1;
- (void)setControlDrawerExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTimeViewVisible:(bool)arg1;
- (void)setElapsedTimeViewVisible:(bool)arg1 animated:(bool)arg2;
- (void)setFlashCompromisedInstructionLabelVisible:(bool)arg1;
- (void)setFlashCompromisedInstructionLabelVisible:(bool)arg1 animated:(bool)arg2;
- (void)setFlipButtonVisible:(bool)arg1;
- (void)setFlipButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)setInterfaceModulation:(unsigned long long)arg1;
- (void)setInterfaceModulation:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setLegibilityBackgroundsVisible:(bool)arg1;
- (void)setLegibilityBackgroundsVisible:(bool)arg1 animated:(bool)arg2;
- (void)setLowLightInstructionLabelVisible:(bool)arg1;
- (void)setLowLightInstructionLabelVisible:(bool)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setPanoramaCaptureSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPanoramaView:(id)arg1;
- (void)setPortraitControlsAllowed:(bool)arg1;
- (void)setPortraitControlsAllowed:(bool)arg1 animated:(bool)arg2;
- (void)setPortraitModeOverlayView:(id)arg1;
- (void)setPreviewAlignmentGuideVisible:(bool)arg1;
- (void)setPreviewAlignmentGuideVisible:(bool)arg1 animated:(bool)arg2;
- (void)setPreviewView:(id)arg1;
- (void)setPreviewViewOrientation:(long long)arg1;
- (void)setQRCodeLabelVisible:(bool)arg1 animated:(bool)arg2;
- (void)setQrCodeLabelVisible:(bool)arg1;
- (void)setReticleMaskingStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setShallowDepthOfFieldStatus:(long long)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(bool)arg2;
- (void)setTimerIndicatorVisible:(bool)arg1;
- (void)setTimerIndicatorVisible:(bool)arg1 animated:(bool)arg2;
- (void)setViewportAspectRatio:(long long)arg1;
- (void)setViewportAspectRatio:(long long)arg1 animated:(bool)arg2;
- (void)setZoomControlVisible:(bool)arg1;
- (void)setZoomControlVisible:(bool)arg1 animated:(bool)arg2;
- (void)setZoomStyle:(unsigned long long)arg1;
- (long long)shallowDepthOfFieldStatus;
- (bool)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (id)shutterControl;
- (id)timerIndicator;
- (id)touchingRecognizersToCancel;
- (long long)viewportAspectRatio;
- (id)zoomControl;
- (id)zoomSlider;
- (unsigned long long)zoomStyle;

@end
