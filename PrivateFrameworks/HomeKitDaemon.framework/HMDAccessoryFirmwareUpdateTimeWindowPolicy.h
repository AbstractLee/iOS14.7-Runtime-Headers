/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryFirmwareUpdateTimeWindowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, HMFTimerDelegate, NSCopying> {
    HMFTimer * _reevaluateTimer;
    HMDAccessoryFirmwareUpdateTimeWindow * _updateTimeWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *reevaluateTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_startReevaluateTimer:(id)arg1;
- (void)_stopReevaluateTimer;
- (void)configure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)evaluate;
- (unsigned long long)hash;
- (id)initWithTimeWindow:(id)arg1 workQueue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reevaluateTimer;
- (void)setReevaluateTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)updateTimeWindow;

@end