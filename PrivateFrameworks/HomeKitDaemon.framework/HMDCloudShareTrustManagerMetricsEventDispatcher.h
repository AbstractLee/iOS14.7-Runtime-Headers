/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMDLogEventDailyProvider, HMFLogging> {
    <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> * _dataSource;
    NSUUID * _identifier;
    HMDLogEventDailyScheduler * _logEventDailyScheduler;
    HMDLogEventDispatcher * _logEventDispatcher;
    bool  _registered;
}

@property (readonly) <HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher;
@property (nonatomic, readonly) NSArray *logEventProviderDailySubmissionBlocks;
@property bool registered;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 logEventDailyScheduler:(id)arg3 dataSource:(id)arg4;
- (id)logEventDailyScheduler;
- (id)logEventDispatcher;
- (id)logEventProviderDailySubmissionBlocks;
- (id)logIdentifier;
- (void)registerForDailyTrustManagerEvents;
- (bool)registered;
- (void)setRegistered:(bool)arg1;
- (void)submitCloudShareTrustStatusDailyEvent;
- (void)submitFailureEventWithEventErrorCode:(long long)arg1;
- (void)submitFailureEventWithEventErrorCode:(long long)arg1 error:(id)arg2;
- (void)submitTrustActivityEvent:(long long)arg1;
- (void)submitTrustZoneCreatedEvent;
- (void)submitTrustZoneRemovedEvent;
- (void)triggerLogEventProviderDailySubmissionBlocks;

@end