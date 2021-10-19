/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
 */

@interface CHUISAvocadoHostViewController : UIViewController <BSInvalidatable, FBSceneDelegate, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol> {
    bool  _animationsDisabled;
    bool  _avocadoViewShouldShareTouchesWithHost;
    NSString * _cachedSceneLogDigest;
    <CHUISAvocadoHostViewControllerDelegate> * _delegate;
    unsigned long long  _foregroundState;
    bool  _invalidated;
    bool  _isInViewDidDisappear;
    UIView * _liveSceneSnapshotView;
    CHSWidgetMetrics * _metrics;
    unsigned long long  _mode;
    UIImageView * _persistedWidgetSnapshotImageView;
    bool  _privateModeEnabled;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    CHSScreenshotManager * _screenshotManager;
    unsigned long long  _signpostID;
    UILabel * _snapshotDebugLabel;
    UIView * _snapshotDebugView;
    unsigned long long  _style;
    NSMutableDictionary * _touchDeliveryPolicyAssertions;
    FBApplicationUpdateScenesTransaction * _updateScenesTransaction;
    CHUISWidgetVisibilitySettings * _visibilitySettings;
    bool  _visibleEntryShouldSnapshot;
    CHSWidget * _widget;
    NSString * _widgetConfigurationIdentifier;
}

@property (getter=areAnimationsDisabled, nonatomic) bool animationsDisabled;
@property (nonatomic, readonly, copy) NSString *avocadoIdentifier;
@property (nonatomic, readonly, copy) NSString *avocadoKind;
@property (nonatomic) bool avocadoViewShouldShareTouchesWithHost;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CHUISAvocadoHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CHSWidgetMetrics *metrics;
@property (nonatomic) unsigned long long mode;
@property (getter=isPrivateModeEnabled, nonatomic) bool privateModeEnabled;
@property (nonatomic, readonly) UIView *sceneSnapshotView;
@property (nonatomic, retain) CHSScreenshotManager *screenshotManager;
@property (nonatomic, readonly) long long sizeClass;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibility;
@property (getter=_visibilitySettings, setter=_setVisibilitySettings:, nonatomic, retain) CHUISWidgetVisibilitySettings *visibilitySettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (getter=shouldVisibleEntrySnapshot, nonatomic) bool visibleEntryShouldSnapshot;
@property (getter=isVisiblySettled, nonatomic) bool visiblySettled;
@property (nonatomic, copy) CHSWidget *widget;
@property (nonatomic, readonly, copy) NSString *widgetConfigurationIdentifier;

+ (id)_compatibilityMetrics;

- (void).cxx_destruct;
- (void)_applyCurrentStateToSceneSettings:(id)arg1;
- (void)_applyLiveSnapshotContentsFromSnapshot:(id)arg1;
- (bool)_canLiveSnapshot;
- (bool)_canShowWhileLocked;
- (void)_clearTouchDeliveryPolicies;
- (void)_createWidgetSnapshotViews;
- (void)_ensureSnapshotView;
- (void)_hideSnapshotViewsAnimated:(bool)arg1;
- (bool)_isAppearingOrAppeared;
- (id)_logDigest;
- (void)_modifyVisibilitySettings:(id /* block */)arg1;
- (void)_resetLogDigests;
- (void)_setVisibilitySettings:(id)arg1;
- (id)_snapshotImage;
- (void)_tearDownScene;
- (void)_updateActiveUI;
- (void)_updateSceneToForeground:(bool)arg1;
- (void)_updateSnapshotDebugLabelText:(id)arg1;
- (void)_updateTouchDeliveryPolicies;
- (id)_visibilitySettings;
- (id)_widgetIdentity;
- (bool)areAnimationsDisabled;
- (id)avocadoIdentifier;
- (id)avocadoKind;
- (bool)avocadoViewShouldShareTouchesWithHost;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)dealloc;
- (id)delegate;
- (id)extensionBundleIdentifier;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3 style:(unsigned long long)arg4 mode:(unsigned long long)arg5 privateModeEnabled:(bool)arg6;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3 style:(unsigned long long)arg4 privateModeEnabled:(bool)arg5;
- (void)invalidate;
- (bool)isPrivateModeEnabled;
- (bool)isVisiblySettled;
- (id)metrics;
- (unsigned long long)mode;
- (void)prewarmContent;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (id)sceneSnapshotView;
- (id)screenshotManager;
- (void)setAnimationsDisabled:(bool)arg1;
- (void)setAvocadoViewShouldShareTouchesWithHost:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPrivateModeEnabled:(bool)arg1;
- (void)setScreenshotManager:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleEntryShouldSnapshot:(bool)arg1;
- (void)setVisiblySettled:(bool)arg1;
- (void)setWidget:(id)arg1;
- (bool)shouldVisibleEntrySnapshot;
- (long long)sizeClass;
- (unsigned long long)style;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (unsigned long long)visibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (id)widget;
- (id)widgetConfigurationIdentifier;

@end