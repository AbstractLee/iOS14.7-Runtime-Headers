/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollmentBaseView : UIView <SUICOrbViewControlling, UITextViewDelegate> {
    _UIBackdropView * _backdropView;
    UIView * _contentView;
    <VTUIEnrollmentDelegate> * _enrollmentDelegate;
    UILabel * _instructionLabel;
    SUICOrbView * _orbView;
    UITextView * _privacyTextView;
    NSLayoutConstraint * _readableLeftAnchorConstraint;
    NSLayoutConstraint * _readableRightAnchorConstraint;
    UIView * _scrollContainerView;
    UIScrollView * _scrollView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <VTUIEnrollmentDelegate> *enrollmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_backdropStyle;
- (id)_createPrivacyTextView;
- (void)_setupUI;
- (void)animateOrbViewToOffWithCompletion:(id /* block */)arg1;
- (id)backdropView;
- (void)dealloc;
- (id)enrollmentDelegate;
- (void)fadeInSubviews;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setContentView:(id)arg1;
- (void)setEnrollmentDelegate:(id)arg1;
- (void)setInputPowerLevel:(float)arg1;
- (void)setInstructionText:(id)arg1;
- (void)setOutputPowerLevel:(float)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showPrivacyTextView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end