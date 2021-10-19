/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout> {
    UIColor * _atomBackgroundColor;
    _UISearchAtomBackgroundView * _backgroundView;
    NSArray * _defaultConstraints;
    struct { 
        unsigned int enabled : 1; 
    }  _flags;
    NSLayoutConstraint * _imageBaselineConstraint;
    NSLayoutConstraint * _imageCenterYConstraint;
    UIImageView * _leadingImage;
    UILabel * _textLabel;
    NSArray * _withImageConstraints;
    NSArray * _withoutImageConstraints;
}

@property (nonatomic, retain) UIColor *atomBackgroundColor;
@property (nonatomic, retain) UIFont *atomFont;
@property (nonatomic, retain) _UISearchAtomBackgroundView *backgroundView;
@property (nonatomic, readonly) long long baseWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *defaultConstraints;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *imageBaselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageCenterYConstraint;
@property (retain) UIImageView *leadingImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionBounds;
@property (nonatomic) long long selectionStyle;
@property (readonly) Class superclass;
@property (retain) UILabel *textLabel;
@property (nonatomic, copy) NSArray *withImageConstraints;
@property (nonatomic, copy) NSArray *withoutImageConstraints;

+ (id)_defaultFont;
+ (id)defaultAtomBackgroundColorForTraitCollection:(id)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateColors;
- (id)atomBackgroundColor;
- (id)atomFont;
- (id)backgroundView;
- (id)defaultConstraints;
- (id)imageBaselineConstraint;
- (id)imageCenterYConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)leadingImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (long long)selectionStyle;
- (void)setAtomBackgroundColor:(id)arg1;
- (void)setAtomFont:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDefaultConstraints:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setImageBaselineConstraint:(id)arg1;
- (void)setImageCenterYConstraint:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionStyle:(long long)arg1 animated:(bool)arg2;
- (void)setTextLabel:(id)arg1;
- (void)setWithImageConstraints:(id)arg1;
- (void)setWithoutImageConstraints:(id)arg1;
- (id)textLabel;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (id)withImageConstraints;
- (id)withoutImageConstraints;

@end