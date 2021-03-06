/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPrimaryResidentMessageRouterFailureEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    NSNumber * _failureType;
    NSString * _messageName;
}

@property (readonly, copy) NSNumber *failureType;
@property (readonly, copy) NSString *messageName;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)eventName;
- (id)failureType;
- (id)initWithMessageName:(id)arg1 failureType:(long long)arg2;
- (id)messageName;
- (id)serializedEvent;

@end
