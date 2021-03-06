/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ZoomServices.framework/ZoomServices
 */

@interface ZoomServices : NSObject <AXUIClientDelegate> {
    bool  _registeredForZoomAttributeListeners;
    bool  _registeredForZoomListener;
    bool  _shouldRegisterForZoomListeners;
    bool  _showingZoomLens;
    bool  _springBoardReady;
    bool  _triedToShowLensBeofreSBReady;
    NSMutableDictionary * _zoomAttributeListeners;
    NSMutableArray * _zoomListeners;
    AXUIClient * _zoomWindowClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool registeredForZoomAttributeListeners;
@property (nonatomic) bool registeredForZoomListener;
@property (nonatomic) bool shouldRegisterForZoomListeners;
@property (getter=isShowingZoomLens, nonatomic) bool showingZoomLens;
@property (getter=isShowingZoomLens, nonatomic, readonly) bool showingZoomLens;
@property (nonatomic) bool springBoardReady;
@property (readonly) Class superclass;
@property (nonatomic) bool triedToShowLensBeofreSBReady;
@property (nonatomic) double zoomLevel;
@property (nonatomic, retain) AXUIClient *zoomWindowClient;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_checkSpringBoardStarted;
- (void)_handleChangedAttributes:(id)arg1;
- (bool)_isAllowedMagnifierClient;
- (bool)_isPrimaryZoomWindowClient;
- (void)_panWithDirection:(id)arg1;
- (void)_zoomChanged:(id)arg1;
- (id)activeZoomMode;
- (double)appActivationAnimationStartDelay;
- (double)appDeactivationAnimationStartDelay;
- (double)appSwitcherRevealAnimationStartDelay;
- (void)autoPanZoomUsingLocation:(struct CGPoint { double x1; double x2; })arg1 withPanningStyle:(unsigned long long)arg2;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (void)hideZoomLens;
- (bool)inStandbyMode;
- (id)init;
- (void)isMagnifierVisibleWithCompletion:(id /* block */)arg1;
- (bool)isShowingZoomLens;
- (bool)notifyZoomAppActivationAnimationDidFinish;
- (bool)notifyZoomAppActivationAnimationWillBegin;
- (bool)notifyZoomAppDeactivationAnimationWillBegin;
- (bool)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)notifyZoomAppDidEnterBackground:(id)arg1;
- (bool)notifyZoomAppSwitcherRevealAnimationWillBegin;
- (bool)notifyZoomCarouselLockBegan;
- (bool)notifyZoomCarouselLockEnded;
- (bool)notifyZoomDeviceWasUnlocked;
- (bool)notifyZoomDeviceWillWake;
- (bool)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg1;
- (bool)notifyZoomDragWillEnd;
- (bool)notifyZoomDragWillStart;
- (bool)notifyZoomFluidSwitcherGestureDidFinish;
- (bool)notifyZoomFluidSwitcherGestureDidFinishWithDock;
- (bool)notifyZoomFluidSwitcherGestureWillBegin;
- (bool)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contextId:(unsigned int)arg3;
- (bool)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contextId:(unsigned int)arg3 keyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)notifyZoomHomeButtonWasPressed;
- (bool)notifyZoomIdleSlugOpacityChangedTo:(double)arg1;
- (bool)notifyZoomKeyboardDidHideInAppWithBundleID:(id)arg1;
- (bool)notifyZoomKeyboardWillBecomeVisibleWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inAppWithBundleID:(id)arg2;
- (bool)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1;
- (bool)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1;
- (bool)notifyZoomLockButtonWasPressed;
- (bool)notifyZoomReturnedToClockFaceAtIdle;
- (void)notifyZoomSOSMedicalIDShown;
- (bool)notifyZoomWillHideBrailleInputUI;
- (bool)notifyZoomWillShowBrailleInputUI;
- (void)panDown;
- (void)panLeft;
- (void)panRight;
- (void)panUp;
- (double)reachabilityScaleFactor;
- (id)registerForCoalescedZoomAttributesWithChangedHandler:(id /* block */)arg1;
- (id)registerForZoomAttributes:(id)arg1 updatesImmediatelyWithChangedHandler:(id /* block */)arg2;
- (void)registerInterestInZoomAttributes;
- (bool)registeredForZoomAttributeListeners;
- (bool)registeredForZoomListener;
- (void)removeCoalescedZoomAttributesChangedHandler:(id)arg1;
- (void)removeZoomAttributesChangedHandler:(id)arg1;
- (void)setRegisteredForZoomAttributeListeners:(bool)arg1;
- (void)setRegisteredForZoomListener:(bool)arg1;
- (void)setShouldRegisterForZoomListeners:(bool)arg1;
- (void)setShowingZoomLens:(bool)arg1;
- (void)setSpringBoardReady:(bool)arg1;
- (void)setTriedToShowLensBeofreSBReady:(bool)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)setZoomWindowClient:(id)arg1;
- (bool)shouldRegisterForZoomListeners;
- (bool)shouldSuppressKeyCommandHUD;
- (void)showMagnifier;
- (void)showZoomLens;
- (bool)springBoardReady;
- (void)startMagnifier;
- (void)startMagnifierChangeTripleClickMenu:(bool)arg1;
- (bool)triedToShowLensBeofreSBReady;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomFrame;
- (double)zoomLevel;
- (id)zoomWindowClient;

@end
