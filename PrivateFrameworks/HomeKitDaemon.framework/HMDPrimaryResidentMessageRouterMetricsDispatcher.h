/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject {
    HMDLogEventDispatcher * _logEventDispatcher;
}

@property (readonly) HMDLogEventDispatcher *logEventDispatcher;

- (void).cxx_destruct;
- (id)initWithLogEventDispatcher:(id)arg1;
- (id)logEventDispatcher;
- (void)submitFailureEventWithMessageName:(id)arg1 failureType:(long long)arg2;

@end
