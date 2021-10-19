/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceSetupServerSession : HMDDeviceSetupSessionInternal <HMFLogging> {
    NSObject<OS_os_log> * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedClasses;
+ (bool)isSupported;
+ (id)logCategory;
+ (long long)role;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)arg1;
- (bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id*)arg3 error:(id*)arg4;

@end