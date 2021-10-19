/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget * _pushTarget;
    HDCloudSyncStore * _store;
}

@property (nonatomic, readonly) HDCloudSyncTarget *pushTarget;

- (void).cxx_destruct;
- (void)_createZoneWithIdentifier:(id)arg1;
- (void)_finishWithZone:(id)arg1;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 store:(id)arg3;
- (void)main;
- (id)pushTarget;

@end