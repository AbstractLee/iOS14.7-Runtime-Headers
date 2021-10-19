/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCAdLockupPresenter : NSObject {
    ASCLockup * _lockup;
    <ASCAdLockupPresenterView> * _view;
}

@property (nonatomic, copy) ASCLockup *lockup;
@property (nonatomic, readonly) <ASCAdLockupPresenterView> *view;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)arg1 lockupPresenter:(id)arg2;
- (id)lockup;
- (void)lockupPresenterDidChange:(id)arg1;
- (void)setLockup:(id)arg1;
- (bool)shouldDisplayDescriptionForLockup:(id)arg1;
- (id)view;

@end