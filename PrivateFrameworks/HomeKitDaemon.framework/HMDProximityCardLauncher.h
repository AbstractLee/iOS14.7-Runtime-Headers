/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDProximityCardLauncher : HMFObject <HMFMessageReceiver, SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _alertHandle;
    NSMutableDictionary * _completionHandlersByAddAccessoryRequestID;
    HMDXPCClientConnection * _homeUIServiceConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    HMDAddAccessoryRequestInformation * _pendingAddAccessoryRequestInformation;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) SBSRemoteAlertHandle *alertHandle;
@property (nonatomic, retain) NSMutableDictionary *completionHandlersByAddAccessoryRequestID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDXPCClientConnection *homeUIServiceConnection;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)proximityCardServiceBundleIdentifier;

- (void).cxx_destruct;
- (void)_finishAddAccessoryRequestInformationWithRequestIdentifier:(id)arg1 accessorySetupCompletedInfo:(id)arg2 setupError:(id)arg3;
- (void)_handleHUISDismissalMessage:(id)arg1;
- (void)_handleRequestLaunchHUISMessage:(id)arg1;
- (void)_launchHUISWithNFCProxSetupURL:(id)arg1;
- (void)_launchHUISWithSetupAccessoryDescription:(id)arg1 resumeSetupUserInfo:(id)arg2 connection:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)alertHandle;
- (void)clearPendingAddAccessoryRequestInformation;
- (id)completionHandlersByAddAccessoryRequestID;
- (void)configure;
- (void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)arg1;
- (void)handleNFCProxSetupNotification:(id)arg1;
- (id)homeUIServiceConnection;
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 messageTargetUUID:(id)arg3;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)pendingAddAccessoryRequestInformation;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setAlertHandle:(id)arg1;
- (void)setCompletionHandlersByAddAccessoryRequestID:(id)arg1;
- (void)setHomeUIServiceConnection:(id)arg1;
- (void)setPendingAddAccessoryRequestInformation:(id)arg1;
- (id)workQueue;

@end
