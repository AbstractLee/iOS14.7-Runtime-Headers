/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COMeshTimerAddOn : COMeshAddOn {
    <COMeshTimerAddOnDelegate> * _delegate;
    NSArray * _deletes;
    COHomeHubAdapter * _homehub;
    COHomeKitAdapter * _homekit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COTimerReadRequest * _mergeRequest;
    NSDictionary * _mergeResponses;
    NSArray * _mergingNodes;
    MTTimerManager * _observedTimerManager;
    NSArray * _queuedCommands;
    MTTimerManager * _timerManager;
}

@property (nonatomic) <COMeshTimerAddOnDelegate> *delegate;
@property (nonatomic, copy) NSArray *deletes;
@property (nonatomic, readonly) COHomeHubAdapter *homehub;
@property (nonatomic, readonly) COHomeKitAdapter *homekit;
@property (nonatomic, retain) COTimerReadRequest *mergeRequest;
@property (nonatomic, retain) NSDictionary *mergeResponses;
@property (nonatomic, copy) NSArray *mergingNodes;
@property (nonatomic, readonly) MTTimerManager *observedTimerManager;
@property (nonatomic, readonly) bool performsLocalActions;
@property (nonatomic, copy) NSArray *queuedCommands;
@property (nonatomic, readonly) MTTimerManager *timerManager;

- (void).cxx_destruct;
- (void)_abandonMerge;
- (void)_addCompletionsToFuture:(id)arg1 withXPCCallback:(id /* block */)arg2 transactionDescription:(const char *)arg3;
- (void)_addTimerDeleteEvent:(id)arg1;
- (id)_commandsForReconciling:(id)arg1 toTruth:(id)arg2 forNode:(id)arg3;
- (void)_concludeMerge:(id)arg1 usingLocalTimers:(id)arg2;
- (void)_continueMerge:(id)arg1 withResponse:(id)arg2 fromNode:(id)arg3;
- (id)_filteredTimersList:(id)arg1 forAccessory:(id)arg2;
- (void)_finishMerge;
- (bool)_isTimer:(id)arg1 targetingAccessory:(id)arg2;
- (bool)_isTimer:(id)arg1 targetingAccessoryIdentifiers:(id)arg2;
- (void)_primeMerge:(id)arg1 withNodes:(id)arg2;
- (void)_processQueuedCommands;
- (id)_sendRequest:(id)arg1;
- (void)_startMerge;
- (void)_timerManagerStateReset:(id)arg1;
- (void)_timerManagerTimerFired:(id)arg1;
- (void)_timerManagerTimersAdded:(id)arg1;
- (void)_timerManagerTimersChanged:(id)arg1;
- (void)_timerManagerTimersRemoved:(id)arg1;
- (void)_timerManagerTimersUpdated:(id)arg1;
- (id)_timersForAccessoryIdentifier:(id)arg1 allowLocalStorage:(bool)arg2;
- (void)_withLock:(id /* block */)arg1;
- (id)addTimer:(id)arg1;
- (void)addTimer:(id)arg1 fromConnection:(id)arg2 cluster:(id)arg3 withCallback:(id /* block */)arg4;
- (void)canDispatchForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 reply:(id /* block */)arg5;
- (id)delegate;
- (id)deletes;
- (void)didAddToMeshController:(id)arg1;
- (void)didChangeNodesForMeshController:(id)arg1;
- (void)didStopMeshController:(id)arg1;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (void)dismissTimerWithIdentifier:(id)arg1 cluster:(id)arg2 withCallback:(id /* block */)arg3;
- (void)handleTimerCreateRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)handleTimerDeleteRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)handleTimerDismissRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)handleTimerFiredNotification:(id)arg1;
- (void)handleTimerFiringTimerDismissedNotification:(id)arg1;
- (void)handleTimerManagerStateResetNotification:(id)arg1;
- (void)handleTimerReadRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)handleTimerUpdateRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)handleTimersAddedNotification:(id)arg1;
- (void)handleTimersChangedNotification:(id)arg1;
- (void)handleTimersRemovedNotification:(id)arg1;
- (void)handleTimersUpdatedNotification:(id)arg1;
- (id)homehub;
- (id)homekit;
- (id)init;
- (id)initWithTimerManager:(id)arg1;
- (id)initWithTimerManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;
- (id)mergeRequest;
- (id)mergeResponses;
- (id)mergingNodes;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (id)observedTimerManager;
- (bool)performsLocalActions;
- (id)queuedCommands;
- (id)removeTimer:(id)arg1;
- (void)removeTimer:(id)arg1 cluster:(id)arg2 withCallback:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDeletes:(id)arg1;
- (void)setMergeRequest:(id)arg1;
- (void)setMergeResponses:(id)arg1;
- (void)setMergingNodes:(id)arg1;
- (void)setQueuedCommands:(id)arg1;
- (id)timerManager;
- (id)timers;
- (void)timersforAccessoryUniqueIdentifier:(id)arg1 fromConnection:(id)arg2 cluster:(id)arg3 withCallback:(id /* block */)arg4;
- (id)updateTimer:(id)arg1;
- (void)updateTimer:(id)arg1 cluster:(id)arg2 withCallback:(id /* block */)arg3;
- (void)willRemoveFromMeshController:(id)arg1;
- (void)willStartMeshController:(id)arg1;

@end