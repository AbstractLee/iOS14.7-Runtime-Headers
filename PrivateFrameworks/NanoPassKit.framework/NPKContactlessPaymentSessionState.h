/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKContactlessPaymentSessionState : NSObject <NSCopying> {
    bool  _canChangePass;
    unsigned long long  _completionReason;
    bool  _contactlessInterfaceReady;
    PKPass * _currentPass;
    bool  _doublePressReceived;
    NSDate * _doublePressTimestamp;
    unsigned long long  _expressTransactionStatus;
    unsigned long long  _failureType;
    bool  _hasSession;
    bool  _inServiceMode;
    bool  _passActivating;
    PKPass * _serviceModeRequestedPass;
    bool  _sessionAuthorized;
    bool  _sessionStarted;
    bool  _sessionWaitingToStart;
    NSDate * _timestamp;
    NPKContactlessPaymentSessionManagerTransactionContext * _transactionContext;
}

@property (nonatomic) bool canChangePass;
@property (nonatomic) unsigned long long completionReason;
@property (nonatomic) bool contactlessInterfaceReady;
@property (nonatomic, retain) PKPass *currentPass;
@property (nonatomic) bool doublePressReceived;
@property (nonatomic, retain) NSDate *doublePressTimestamp;
@property (nonatomic) unsigned long long expressTransactionStatus;
@property (nonatomic) unsigned long long failureType;
@property (nonatomic) bool hasSession;
@property (nonatomic) bool inServiceMode;
@property (nonatomic) bool passActivating;
@property (nonatomic, retain) PKPass *serviceModeRequestedPass;
@property (nonatomic) bool sessionAuthorized;
@property (nonatomic) bool sessionStarted;
@property (nonatomic) bool sessionWaitingToStart;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NPKContactlessPaymentSessionManagerTransactionContext *transactionContext;

+ (id)_timestampDateFormatter;

- (void).cxx_destruct;
- (bool)canChangePass;
- (unsigned long long)completionReason;
- (bool)contactlessInterfaceReady;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPass;
- (id)description;
- (bool)doublePressReceived;
- (id)doublePressTimestamp;
- (unsigned long long)expressTransactionStatus;
- (unsigned long long)failureType;
- (bool)hasSession;
- (bool)inServiceMode;
- (bool)passActivating;
- (id)serviceModeRequestedPass;
- (bool)sessionAuthorized;
- (bool)sessionStarted;
- (bool)sessionWaitingToStart;
- (void)setCanChangePass:(bool)arg1;
- (void)setCompletionReason:(unsigned long long)arg1;
- (void)setContactlessInterfaceReady:(bool)arg1;
- (void)setCurrentPass:(id)arg1;
- (void)setDoublePressReceived:(bool)arg1;
- (void)setDoublePressTimestamp:(id)arg1;
- (void)setExpressTransactionStatus:(unsigned long long)arg1;
- (void)setFailureType:(unsigned long long)arg1;
- (void)setHasSession:(bool)arg1;
- (void)setInServiceMode:(bool)arg1;
- (void)setPassActivating:(bool)arg1;
- (void)setServiceModeRequestedPass:(id)arg1;
- (void)setSessionAuthorized:(bool)arg1;
- (void)setSessionStarted:(bool)arg1;
- (void)setSessionWaitingToStart:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTransactionContext:(id)arg1;
- (id)stateForNonModalDisplay;
- (id)timestamp;
- (id)transactionContext;

@end