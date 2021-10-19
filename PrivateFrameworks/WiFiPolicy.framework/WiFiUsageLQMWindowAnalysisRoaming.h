/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFiUsageLQMWindowAnalysisRoaming : WiFiUsageLQMWindowAnalysis {
    long long  _latency;
    NSString * _roamingReason;
    NSString * _roamingStatus;
}

@property (nonatomic, readonly) long long latency;
@property (nonatomic, readonly) NSString *roamingReason;
@property (nonatomic, readonly) NSString *roamingStatus;

- (id)addDimensionsTo:(id)arg1;
- (id)initWithRollingWindow:(id)arg1 WithRoamingState:(bool)arg2 andReason:(unsigned long long)arg3 asString:(id)arg4 andStatus:(long long)arg5 asString:(id)arg6 andLatency:(long long)arg7 onQueue:(id)arg8;
- (long long)latency;
- (void)performAnalysis;
- (id)roamingReason;
- (id)roamingStatus;

@end