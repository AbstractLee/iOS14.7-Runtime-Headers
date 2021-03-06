/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIServerContext : NSObject {
    TRIActivationEventDatabase * _activationEventDatabase;
    TRIClient * _client;
    TRIContentTracker * _contentTracker;
    TRIExperimentDatabase * _experimentDatabase;
    TRIExperimentHistoryDatabase * _experimentHistoryDatabase;
    TRIKVStore * _keyValueStore;
    TRINamespaceDatabase * _namespaceDatabase;
    <TRIPaths> * _paths;
    TRITaskDatabase * _taskDatabase;
    TRIDatabase * _underlyingDatabase;
    bool  _useCKNative;
    <TRIXPCActivityManagementProtocol> * _xpcActivityManager;
}

@property (nonatomic, readonly) TRIActivationEventDatabase *activationEventDatabase;
@property (nonatomic, readonly) TRIClient *client;
@property (nonatomic, readonly) TRIContentTracker *contentTracker;
@property (nonatomic, readonly) TRIExperimentDatabase *experimentDatabase;
@property (nonatomic, readonly) TRIExperimentHistoryDatabase *experimentHistoryDatabase;
@property (nonatomic, readonly) TRIKVStore *keyValueStore;
@property (nonatomic, readonly) TRINamespaceDatabase *namespaceDatabase;
@property (nonatomic, readonly) <TRIPaths> *paths;
@property (nonatomic, readonly) TRITaskDatabase *taskDatabase;
@property (nonatomic, readonly) TRIDatabase *underlyingDatabase;
@property (nonatomic) bool useCKNative;
@property (nonatomic, readonly) <TRIXPCActivityManagementProtocol> *xpcActivityManager;

- (void).cxx_destruct;
- (void)_logInitErrorWithClient:(id)arg1 message:(id)arg2;
- (id)activationEventDatabase;
- (id)client;
- (id)contentTracker;
- (id)experimentDatabase;
- (id)experimentHistoryDatabase;
- (id)init;
- (id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3;
- (id)initWithPaths:(id)arg1 client:(id)arg2 storageManagement:(id)arg3 xpcActivityManagement:(id)arg4;
- (id)keyValueStore;
- (void)logErrorMetric:(id)arg1;
- (id)namespaceDatabase;
- (id)paths;
- (void)setUseCKNative:(bool)arg1;
- (void)setXpcActivityManager:(id)arg1;
- (id)taskDatabase;
- (id)underlyingDatabase;
- (bool)useCKNative;
- (id)xpcActivityManager;

@end
