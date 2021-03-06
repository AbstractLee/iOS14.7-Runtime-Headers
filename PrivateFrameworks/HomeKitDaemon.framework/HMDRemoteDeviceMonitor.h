/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteDeviceMonitor : HMFObject <HMDIDSActivityMonitorObserverDelegate, HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, IDSServiceDelegate> {
    HMDAccountRegistry * _accountRegistry;
    HMDIDSActivityMonitorObserver * _activityObserver;
    HMFTimer * _deviceHealthTimer;
    NSMapTable * _devices;
    <HMFLocking> * _lock;
    HMFNetMonitor * _netMonitor;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reachable;
    IDSService * _service;
    bool  _started;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReachable, readonly) bool reachable;
@property (readonly) Class superclass;
@property (readonly) NSArray *unreachableDevices;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)accountRegistry;
- (void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)dumpState;
- (void)handleAccountRemoved:(id)arg1;
- (void)handleCurrentDeviceUpdate:(id)arg1;
- (void)handleDeviceRemovedFromAccount:(id)arg1;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1 activityObserver:(id)arg2;
- (bool)isReachable;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)observer:(id)arg1 didUpdateDevice:(id)arg2 isOnline:(bool)arg3;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)start;
- (void)startMonitoringDevice:(id)arg1;
- (void)stopMonitoringDevice:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)unreachableDevices;

@end
