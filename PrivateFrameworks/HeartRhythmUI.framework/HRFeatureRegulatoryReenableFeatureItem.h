/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable> {
    <HRFeatureRegulatoryReenableFeatureActionDelegate> * _delegate;
    NSString * _productName;
}

@property (nonatomic, readonly) long long cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HRFeatureRegulatoryReenableFeatureActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic) NSString *productName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *titleString;
@property (nonatomic) <HRFeatureRegulatoryPanelDisplayUpdateDelegate> *updateDelegate;
@property (nonatomic, readonly, copy) NSAttributedString *valueString;

- (void).cxx_destruct;
- (long long)cellAccessoryType;
- (id)delegate;
- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;
- (id)initWithProductName:(id)arg1 delegate:(id)arg2;
- (bool)isInteractive;
- (id)productName;
- (void)setDelegate:(id)arg1;
- (void)setProductName:(id)arg1;
- (id)titleString;
- (id)valueString;

@end