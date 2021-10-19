/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySetupMetricDispatcher : HMFObject <HMFLogging, HMFTimerDelegate> {
    <HMDLogEventSubmitting> * _dispatcher;
    HMDHome * _home;
    HMDHomeManager * _homeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFTimer * _timer;
    <HMDDeviceSetupTrackingInfo> * _trackingInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) <HMDDeviceSetupTrackingInfo> *trackingInfo;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addHome:(id)arg1;
- (id)initWithTrackingInfo:(id)arg1 homeManager:(id)arg2;
- (id)initWithTrackingInfo:(id)arg1 homeManager:(id)arg2 logEventDispatcher:(id)arg3 timerFactory:(id /* block */)arg4;
- (id)logIdentifier;
- (void)submit;
- (void)timerDidFire:(id)arg1;
- (id)trackingInfo;

@end