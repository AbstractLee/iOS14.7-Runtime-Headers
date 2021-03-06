/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMaintenance : NSObject

+ (unsigned int)_kValue;
+ (bool)_logDailyDatabaseStatisticsWithError:(id*)arg1 shouldContinue:(id /* block */)arg2;
+ (bool)_logDailyHeartbeatWithShouldContinue:(id /* block */)arg1;
+ (bool)_logDailyLocationStatisticsWithError:(id*)arg1 shouldContinue:(id /* block */)arg2;
+ (bool)_logDailyMetricsWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (bool)_logDailyNamedEntityStatisticsWithError:(id*)arg1 shouldContinue:(id /* block */)arg2;
+ (bool)_logDailyTopicStatisticsWithError:(id*)arg1 shouldContinue:(id /* block */)arg2;
+ (bool)_logDifferentiallyPrivateSourcesForLocationsWithError:(id*)arg1;
+ (bool)_logDifferentiallyPrivateSourcesForNamedEntitiesWithError:(id*)arg1;
+ (bool)_logDifferentiallyPrivateSourcesForTopicsWithError:(id*)arg1;
+ (void)_logDonationIntervalStatsForSource:(id)arg1 domain:(unsigned char)arg2 lastDonationTimes:(id)arg3 lastBatchDonationTimes:(id)arg4;
+ (bool)_logEngagementMetricsForDomain:(unsigned char)arg1 feedback:(id)arg2 count:(unsigned int)arg3 shouldContinue:(id /* block */)arg4;
+ (void)_logEngagementMetricsWithDomain:(unsigned char)arg1 feedback:(id)arg2 bucket:(unsigned int)arg3 count:(unsigned int)arg4;
+ (bool)_logLocationEngagementMetricsWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (bool)_logNamedEntityEngagementMetricsWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (bool)_logTopicEngagementMetricsWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (id)_objectToJsonString:(id)arg1;
+ (void)_registerContactsImport;
+ (void)_registerCoreRoutineImport;
+ (void)_registerDailyMetricsLogging;
+ (void)_registerDecayedFeedbackCountsCleanup;
+ (void)_registerDecayedFeedbackCountsDecay;
+ (void)_registerEntityBackfilling;
+ (void)_registerEventKitImport;
+ (void)_registerHealthKitImport;
+ (void)_registerLogDailyLogTrialEnrollmentTracker;
+ (void)_registerLogLocationPerplexity;
+ (void)_registerLogNamedEntityFirstSource;
+ (void)_registerLogNamedEntityPerplexity;
+ (void)_registerLogTopicFirstSource;
+ (void)_registerLogTopicPerplexity;
+ (void)_registerMapsImport;
+ (void)_registerNamedEntityFiltering;
+ (void)_registerNamedEntityImport;
+ (void)_registerNamedEntityRepairAndExport;
+ (void)_registerNowPlayingMPRequestResponseController;
+ (void)_registerOptimizeDatabase;
+ (void)_registerPendingFeedbackTTLCleanup;
+ (void)_registerProcessPendingFeedback;
+ (void)_registerRTCSendLogs;
+ (void)_registerRemotelyDonatedRecordCleanup;
+ (void)_registerTTLBasedDecayedFeedbackCountsCleanup;
+ (void)_registerTTLBasedDonationCleanup;
+ (void)_registerTopicImport;
+ (void)_registerTopicRepairAndExport;
+ (void)processPendingFeedbackWithShouldContinueBlock:(id /* block */)arg1;
+ (void)registerMaintenanceTasksInternal;
+ (id)singletonWarmupQueue;

@end
