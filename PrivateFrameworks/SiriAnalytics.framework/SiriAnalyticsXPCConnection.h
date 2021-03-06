/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupConnection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_currentConnection;
- (void)_idleTimerFired;
- (void)_publishMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)_publishMessagesToRemote:(id)arg1 attempts:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (id)initWithMachServiceName:(id)arg1;
- (oneway void)publishMessages:(id)arg1 completion:(id /* block */)arg2;

@end
