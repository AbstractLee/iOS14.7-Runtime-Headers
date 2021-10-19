/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionNotificationServer : NSObject <UNUserNotificationCenterDelegate, WFLWorkflowControllerDelegate, WFWorkflowRunnerClientDelegate> {
    WFLWorkflowController * _currentWorkflowController;
    WFSuggestionsWorkflowRunnerClient * _currentWorkflowRunnerClient;
    UNUserNotificationCenter * _notificationCenter;
    PETScalarEventTracker * _notifyErrorTracker;
    PETScalarEventTracker * _notifyInitTracker;
    PETScalarEventTracker * _notifySuccessTracker;
    PETScalarEventTracker * _removeTracker;
    <ATXTVIntentHandler> * _tvIntentHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_requestIdentifierForBundleId:(id)arg1;
+ (id)bundleIdFromRequestIdentifier:(id)arg1;
+ (id)localizedContentBodyStringWithString:(id)arg1 forAction:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_actionKeyFromNotification:(id)arg1;
- (void)_handleNonBackgroundIntent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_isRTL;
- (id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 languageCode:(id)arg3;
- (void)_postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2;
- (void)_postTestNotification;
- (void)_postTestNotificationWithPredictionCount:(long long)arg1;
- (void)_removeNotificationWithIdentifier:(id)arg1 trackEvent:(bool)arg2;
- (void)_setupNotifications;
- (id)_unarchiveActionFromNotification:(id)arg1;
- (id)_unarchiveActionResponseFromNotification:(id)arg1;
- (unsigned long long)deliveredNotificationCount;
- (bool)hasLockscreenPrediction;
- (id)init;
- (void)postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2;
- (void)postNotificationForATXActionResponse:(id)arg1;
- (void)removeActionPredictionNotificationsMatchingAction:(id)arg1;
- (void)removeAllActionPredictionNotificationsAndTrackEvent:(bool)arg1 recordFeedback:(bool)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(bool)arg3;
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;

@end