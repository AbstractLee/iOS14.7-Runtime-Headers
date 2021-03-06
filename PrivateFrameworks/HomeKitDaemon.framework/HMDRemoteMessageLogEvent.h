/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent, HMDCoreAnalyticsLogging> {
    NSString * _msgIdentifier;
    NSString * _msgName;
    long long  _msgType;
    NSString * _peerInformation;
    bool  _secure;
    bool  _sending;
    NSString * _transactionIdentifier;
    int  _transportType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *msgIdentifier;
@property (nonatomic, readonly) NSString *msgName;
@property (nonatomic, readonly) long long msgType;
@property (nonatomic, readonly) NSString *peerInformation;
@property (nonatomic, readonly) bool secure;
@property (nonatomic, readonly) bool sending;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;
@property (nonatomic, readonly) int transportType;

+ (int)awdMessageTypeFromHMDMessageType:(long long)arg1;
+ (id)receivedRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(bool)arg6 transportType:(int)arg7;
+ (id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)sendingRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(bool)arg6 transportType:(int)arg7;
+ (id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)eventName;
- (id)initWithRemoteMessage:(id)arg1 identifier:(id)arg2 transactionIdentifier:(id)arg3 messageType:(long long)arg4 peerInformation:(id)arg5 secure:(bool)arg6 transportType:(int)arg7 sending:(bool)arg8;
- (id)metricForAWD;
- (id)msgIdentifier;
- (id)msgName;
- (long long)msgType;
- (id)peerInformation;
- (bool)secure;
- (bool)sending;
- (id)serializedEvent;
- (id)serializedEventForDiagnostics:(bool)arg1;
- (bool)shouldSubmitEvent;
- (int)toAWDType:(int)arg1;
- (id)transactionIdentifier;
- (int)transportType;

@end
