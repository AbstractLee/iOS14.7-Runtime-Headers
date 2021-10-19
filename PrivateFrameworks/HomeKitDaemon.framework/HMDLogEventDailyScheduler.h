/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _mutableLogEventDailyProviders;
    NSString * _xpcActivityIdentifier;
    <HMDXPCActivityInterfacing> * _xpcActivityInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *mutableLogEventDailyProviders;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *xpcActivityIdentifier;
@property (nonatomic, retain) <HMDXPCActivityInterfacing> *xpcActivityInterface;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_criteriaForActivity;
- (void)_handleCheckInForActivity:(id)arg1;
- (void)_registerActivity;
- (void)_runActivity:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 xpcActivityInterface:(id)arg2;
- (id)logEventDailyProviders;
- (id)mutableLogEventDailyProviders;
- (void)registerLogEventDailyProvider:(id)arg1;
- (void)setMutableLogEventDailyProviders:(id)arg1;
- (void)setXpcActivityInterface:(id)arg1;
- (id)xpcActivityIdentifier;
- (id)xpcActivityInterface;

@end