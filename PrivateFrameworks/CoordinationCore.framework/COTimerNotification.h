/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
 */

@interface COTimerNotification : COMeshNotification {
    NSArray * _timers;
}

@property (nonatomic, readonly, copy) NSArray *timers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimers:(id)arg1;
- (id)timers;

@end
