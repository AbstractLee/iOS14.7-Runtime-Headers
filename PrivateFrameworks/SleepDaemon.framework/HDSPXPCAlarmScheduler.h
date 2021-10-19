/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPXPCAlarmScheduler : NSObject <HDSPEventScheduler, HDSPNotificationObserver> {
    id /* block */  _currentDateProvider;
    <HDSPEventScheduleDelegate> * delegate;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPEventScheduleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)currentDateProvider;
- (id)delegate;
- (id)initWithCurrentDateProvider:(id /* block */)arg1;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)scheduleEventForDate:(id)arg1 options:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)unschedule;

@end