/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRULockScreenMonitor : NSObject {
    <MRULockScreenMonitorDelegate> * _delegate;
    bool  _deviceLocked;
    int  _mobileKeyBagLockStatusNotifyToken;
}

@property (nonatomic) <MRULockScreenMonitorDelegate> *delegate;
@property (getter=isDeviceLocked, nonatomic, readonly) bool deviceLocked;
@property (nonatomic) int mobileKeyBagLockStatusNotifyToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isDeviceLocked;
- (int)mobileKeyBagLockStatusNotifyToken;
- (void)setDelegate:(id)arg1;
- (void)setDeviceLocked:(bool)arg1;
- (void)setMobileKeyBagLockStatusNotifyToken:(int)arg1;
- (void)updateDeviceLocked;

@end