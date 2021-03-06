/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXInspectionClient : NSObject <_ATXInspectionInterface> {
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (void)appAndActionHistoryClear:(id /* block */)arg1;
- (void)appHistoryActionWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)appHistoryAddAppIntentLaunch:(id)arg1 intent:(id)arg2 source:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(id /* block */)arg5;
- (void)appHistoryAddNSUALaunch:(id)arg1 requiredString:(id)arg2 itemIdentifier:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appHistoryClearAppIntent:(id /* block */)arg1;
- (void)appHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appHistoryUpdateActionPredictionPipelineWithAction:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reply:(id /* block */)arg4;
- (void)appInstallHistoryClear:(id /* block */)arg1;
- (void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(id /* block */)arg3;
- (void)appInstallHistoryStartDeltaRecording:(id /* block */)arg1;
- (void)appInstallHistoryStopDeltaRecording:(id /* block */)arg1;
- (void)appIntentHistoryDonateINIntent:(id)arg1 intentType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appIntentHistoryMockIntentLaunch:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(id /* block */)arg6;
- (void)appLaunchDatesWithReply:(id /* block */)arg1;
- (void)appLaunchInformationWithReply:(id /* block */)arg1;
- (void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg1 ntimes:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)blendedSuggestionsForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)buildAnchorModelTrainingDataset:(id /* block */)arg1;
- (void)categoriesWithShouldUseDefault:(bool)arg1 reply:(id /* block */)arg2;
- (void)categoryLaunchInformationWithReply:(id /* block */)arg1;
- (void)clearBlendingSuggestionsForClientModel:(long long)arg1 withReply:(id /* block */)arg2;
- (void)createAppPredictionLogs:(id /* block */)arg1;
- (void)dealloc;
- (void)donateSuggestion:(id)arg1 forClientModel:(long long)arg2 withReply:(id /* block */)arg3;
- (void)dumpPredictionTableForMMExpert:(id)arg1 reply:(id /* block */)arg2;
- (void)evaluateInfoSuggestionsWithCompletionHandler:(id /* block */)arg1;
- (void)feedbackClear:(id /* block */)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(id /* block */)arg3;
- (void)feedbackLaunchedWithConsumerSubType:(unsigned char)arg1 forBundleId:(id)arg2 rejected:(id)arg3 reply:(id /* block */)arg4;
- (void)forceMagicalMomentsAppPredictionForBundleId:(id)arg1 expert:(id)arg2 reply:(id /* block */)arg3;
- (void)getActionLogs:(id /* block */)arg1;
- (void)getAppFeedbackData:(id /* block */)arg1;
- (void)getAppUsageDataFromStartDate:(id)arg1 reply:(id /* block */)arg2;
- (void)getInfoPredictionsInString:(id /* block */)arg1;
- (void)getInfoSuggestionsInString:(id /* block */)arg1;
- (void)getNotificationLogs:(id /* block */)arg1;
- (void)getNotificationSettings:(id /* block */)arg1;
- (void)getNotificationsSuggestionResponses:(id /* block */)arg1;
- (void)getParseTreeForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (void)getPredictionModelDetailsForConsumerSubType:(unsigned char)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)inspectInferredModeSessionStream:(id)arg1 fromTimestamp:(double)arg2 reply:(id /* block */)arg3;
- (void)nPlusOneStudyDryRunResultFilterByExtensionBundleId:(id)arg1 reply:(id /* block */)arg2;
- (void)performHomeScreenCoreAnalyticsDryRunWithCustomStartDate:(id)arg1 reply:(id /* block */)arg2;
- (void)predictAppsAndReturnInputsAndSubscores:(id /* block */)arg1;
- (void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIds:(id)arg3 candidateActiontypes:(id)arg4 reply:(id /* block */)arg5;
- (void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 reply:(id /* block */)arg4;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)processHomeScreenFeedbackWithReply:(id /* block */)arg1;
- (void)processSpotlightFeedbackWithReply:(id /* block */)arg1;
- (void)promoteSuggestionsFromClientModel:(id)arg1 reply:(id /* block */)arg2;
- (void)rankAndReturnInfoPredictionsInString:(id /* block */)arg1;
- (void)refreshBlendingLayer:(id /* block */)arg1;
- (void)resetActionPredictions:(id /* block */)arg1;
- (void)resetNotificationsHistory:(id /* block */)arg1;
- (void)resetNotificationsSuggestionResponses:(id /* block */)arg1;
- (void)retrainActionHistograms:(id /* block */)arg1;
- (void)retrainActionSlotDatabase:(id /* block */)arg1;
- (void)schedulePredictionsForAnchorModel:(id)arg1 anchorType:(id)arg2 reply:(id /* block */)arg3;
- (void)scheduledPredictionsForAnchorModelWithReply:(id /* block */)arg1;
- (void)trainAnchorModel:(id /* block */)arg1;
- (void)trainMagicalMomentsAppPredictor:(id /* block */)arg1;
- (void)trainModeEntityModelsWithReply:(id /* block */)arg1;
- (void)updateAppDirectoryCache:(id /* block */)arg1;
- (void)validPredictionsRightNowForAnchorModelWithReply:(id /* block */)arg1;
- (void)widgetBundleIdentifiersForAllInfoSuggestionsInString:(id /* block */)arg1;

@end
