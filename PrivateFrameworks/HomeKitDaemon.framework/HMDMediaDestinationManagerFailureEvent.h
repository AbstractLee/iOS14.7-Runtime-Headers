/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaDestinationManagerFailureEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    NSNumber * _errorCode;
    NSString * _errorDomain;
    NSNumber * _failureCode;
}

@property (readonly, copy) NSNumber *errorCode;
@property (readonly, copy) NSString *errorDomain;
@property (readonly, copy) NSNumber *failureCode;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)errorCode;
- (id)errorDomain;
- (id)eventName;
- (id)failureCode;
- (id)initWithFailureCode:(unsigned long long)arg1 error:(id)arg2;
- (id)serializedEvent;

@end