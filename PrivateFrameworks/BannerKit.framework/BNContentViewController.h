/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNContentViewController : UIViewController <BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate, UIGestureRecognizerDelegate> {
    <UIViewControllerAnimatedTransitioning> * _activeBannerTransitionAnimator;
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    <BNConsidering> * _authority;
    <BNPresentingDelegate> * _delegate;
    NSMutableSet * _dismissingPresentables;
    <BNLayoutManaging> * _layoutManager;
    UIPanGestureRecognizer * _panGesture;
    <BNPanGestureProxyPrivate> * _panGestureProxyForActivePresentable;
    <BNPosting> * _poster;
    <BNPresentable> * _presentableForActiveGesture;
    BNTieredArray * _presentables;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentedFrameForPresentableForActiveGesture;
    NSMutableSet * _presentingPresentables;
    NSMutableSet * _transitioningDelegates;
}

@property (nonatomic, readonly) <BNConsidering> *authority;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNPresentingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BNLayoutManaging> *layoutManager;
@property (nonatomic) <BNPosting> *poster;
@property (nonatomic, readonly, copy) NSArray *presentedPresentables;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *topPresentables;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addPresentable:(id)arg1 withTransitioningDelegate:(id)arg2 incrementingTier:(bool)arg3;
- (bool)_canShowWhileLocked;
- (void)_dismissPresentable:(id)arg1 withReason:(id)arg2 animated:(bool)arg3 userInfo:(id)arg4;
- (id)_dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(bool)arg3 userInfo:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissedFrameForViewController:(id)arg1 withContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissedFrameWithPaddingForViewController:(id)arg1 withContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_effectTierForPresentable:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3;
- (void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3 incrementingTier:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewController:(id)arg2;
- (bool)_isDraggingDismissalEnabledForPresentable:(id)arg1;
- (bool)_isDraggingEnabledForPresentable:(id)arg1;
- (bool)_isDraggingInteractionEnabledForPresentable:(id)arg1;
- (bool)_isLocalDraggingEnabledForPresentable:(id)arg1;
- (bool)_isPresentableHUD:(id)arg1;
- (bool)_isTouchOutsideDismissalEnabledForPresentable:(id)arg1;
- (id)_layoutManager;
- (struct CGPoint { double x1; double x2; })_locationOfScrollEvent:(id)arg1 inContainerViewForGesture:(id)arg2;
- (struct CGPoint { double x1; double x2; })_locationOfTouch:(id)arg1 inContainerViewForGesture:(id)arg2;
- (id)_newBannerTransitionContextForPresenting:(bool)arg1 viewController:(id)arg2 animated:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_outsetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewController:(id)arg2;
- (id)_presentableForGestureInView:(id)arg1;
- (id)_presentableForScrollEvent:(id)arg1;
- (id)_presentableForTouch:(id)arg1;
- (id)_presentablesWithIdentification:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedFrame:(bool)arg1 forViewController:(id)arg2 withContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 overshoot:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedFrameForPresentable:(id)arg1 withContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedFrameForViewController:(id)arg1 withContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentedFrameForViewController:(id)arg1 withContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 afterContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_removePresentable:(id)arg1;
- (bool)_resetActiveBannerTransitionAnimator:(id)arg1;
- (bool)_resetActiveTransitionCoordinator:(id)arg1;
- (void)_resetPresentableForActiveGesture:(id)arg1;
- (id)_topPresentable;
- (struct CGPoint { double x1; double x2; })_translationInContainerViewForGesture:(id)arg1;
- (struct CGPoint { double x1; double x2; })_velocityInContainerViewForGesture:(id)arg1;
- (id)authority;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(bool)arg3 userInfo:(id)arg4;
- (id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id)arg1 locationForTouch:(id)arg2 inCoordinateSpace:(id)arg3;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id)arg1 translationInCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id)arg1 velocityInCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })gestureRecognizerProxy:(id)arg1 visualTranslationInCoordinateSpace:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAuthority:(id)arg1;
- (id)layoutManager;
- (void)loadView;
- (id)poster;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)presentedPresentables;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPoster:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotate;
- (bool)shouldFenceAnimationsForPresentable:(id)arg1;
- (bool)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)sizeTransitionAnimationSettingsForPresentable:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)topPresentables;
- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end