/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIBaseSliderView : UIControl <CCUIContentModuleTopLevelGestureProvider, CCUIGroupRendering, CCUITouchContinuationProviding> {
    CCUICAPackageView * _compensatingGlyphPackageView;
    bool  _didConfigureGlyphPackageView;
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    CCUICAPackageDescription * _glyphPackageDescription;
    CCUICAPackageView * _glyphPackageView;
    double  _glyphScale;
    NSString * _glyphState;
    bool  _glyphVisible;
    bool  _interactiveWhenUnexpanded;
    float  _value;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } glyphCenter;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic) double glyphScale;
@property (nonatomic, retain) NSString *glyphState;
@property (getter=isGlyphVisible, nonatomic) bool glyphVisible;
@property (getter=isGroupRenderingRequired, nonatomic, readonly) bool groupRenderingRequired;
@property (readonly) unsigned long long hash;
@property (getter=isInteractiveWhenUnexpanded, nonatomic) bool interactiveWhenUnexpanded;
@property (nonatomic, readonly) CALayer *punchOutRootLayer;
@property (nonatomic, readonly) NSArray *punchOutRootLayers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *topLevelBlockingGestureRecognizers;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (void)_configureCompensatingGlyphPackageView:(id)arg1;
- (void)_configureGlyphPackageView:(id)arg1;
- (id)_newGlyphPackageView;
- (void)_setGlyphState:(id)arg1;
- (void)_updateGlyphImageViewVisualStyling;
- (void)didMoveToWindow;
- (struct CGPoint { double x1; double x2; })glyphCenter;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (double)glyphScale;
- (id)glyphState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isGlyphVisible;
- (bool)isGroupRenderingRequired;
- (bool)isInteractiveWhenUnexpanded;
- (void)layoutSubviews;
- (id)punchOutRootLayer;
- (id)punchOutRootLayers;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphScale:(double)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setGlyphVisible:(bool)arg1;
- (void)setInteractiveWhenUnexpanded:(bool)arg1;
- (void)setValue:(float)arg1;
- (double)sliderHeightForValue:(float)arg1;
- (double)sliderLengthForValue:(float)arg1;
- (id)topLevelBlockingGestureRecognizers;
- (float)value;
- (id)viewForTouchContinuation;

@end