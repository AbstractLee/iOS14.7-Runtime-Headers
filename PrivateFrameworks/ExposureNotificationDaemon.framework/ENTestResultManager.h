/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
 */

@interface ENTestResultManager : NSObject {
    NSURLSession * _URLSession;
    ENChaffTestResultSession * _chaffSession;
    ENRegion * _chaffingRegion;
    ENXPCTimer * _chaffingTimer;
    ENConfigurationStore * _configurationStore;
    ENExposureDatabase * _exposureDatabase;
    unsigned long long  _maxRetryTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionsByUUID;
    ENTemporaryExposureKeyManager * _temporaryExposureKeyManager;
}

@property (nonatomic, readonly) ENConfigurationStore *configurationStore;
@property (nonatomic, readonly) ENExposureDatabase *exposureDatabase;
@property (nonatomic, readonly) ENTemporaryExposureKeyManager *temporaryExposureKeyManager;

+ (bool)checkValidNonce:(id)arg1 size:(unsigned long long)arg2;
+ (id)generateSecureNonce:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_configurationForRegion:(id)arg1 error:(id*)arg2;
- (id)_createSessionWithVerificationCode:(id)arg1 region:(id)arg2 maxRetryTime:(unsigned long long)arg3 error:(id*)arg4;
- (id)_existingSessionForVerificationCode:(id)arg1 region:(id)arg2;
- (bool)_getRevisionToken:(id*)arg1 forSession:(id)arg2 error:(id*)arg3;
- (id)_getTemporaryExposureKeysForUpload:(bool)arg1 requireConsentForRegion:(id)arg2 error:(id*)arg3;
- (void)_invalidateSession:(id)arg1;
- (id)_revisionTokenKeyForSession:(id)arg1;
- (id)_serverConfigurationForRegion:(id)arg1 error:(id*)arg2;
- (id)_sessionWithUUID:(id)arg1 error:(id*)arg2;
- (bool)_setRevisionToken:(id)arg1 forSession:(id)arg2 error:(id*)arg3;
- (void)_updateChaffingTimerBlock;
- (void)activateAutomatedChaffingWithRegion:(id)arg1;
- (void)activateWebSession:(id)arg1 verificationTimestamp:(double)arg2 nonceTimestamp:(double)arg3;
- (id)configurationStore;
- (void)deactivateAutomatedChaffing;
- (void)deactivateWebSession;
- (id)exposureDatabase;
- (void)finishSessionWithUUID:(id)arg1 userDidConsent:(bool)arg2 metadata:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithConfigurationStore:(id)arg1 exposureDatabase:(id)arg2 temporaryExposureKeyManager:(id)arg3 queue:(id)arg4;
- (void)invalidate;
- (id)metadataForSessionWithUUID:(id)arg1 error:(id*)arg2;
- (void)setMaxRetryTime:(unsigned long long)arg1;
- (void)startChaffTestVerficationSessionForRegion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startSelfReportWebSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startTestVerficationSessionWithCode:(id)arg1 region:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)temporaryExposureKeyManager;

@end
