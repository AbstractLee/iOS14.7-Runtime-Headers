/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSChronoServicesToolConnection : NSObject <CHSChronoToolServiceClient, CHSChronoToolServiceServer> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMutableSet * _clients;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callOutQueue;
@property (nonatomic, retain) NSMutableSet *clients;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createConnection;
- (id)_init;
- (void)_invalidateConnection;
- (void)_queue_addClient:(id)arg1;
- (void)_queue_removeClient:(id)arg1;
- (id)_remoteTarget;
- (void)addClient:(id)arg1;
- (oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)callOutQueue;
- (id)clients;
- (id)connection;
- (oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)disableWakeBudgetWithCompletion:(id /* block */)arg1;
- (oneway void)extensionInfo:(id /* block */)arg1;
- (oneway void)extensionInfoForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(id /* block */)arg1;
- (id)queue;
- (oneway void)reloadTimelinesOfKind:(id)arg1 containedIn:(id)arg2 completion:(id /* block */)arg3;
- (void)removeClient:(id)arg1;
- (oneway void)resetCaches:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)resetWakeBudgetWithCompletion:(id /* block */)arg1;
- (void)setCallOutQueue:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (oneway void)timelineForWidgetKey:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)widgetsWithTimelines:(id /* block */)arg1;

@end
