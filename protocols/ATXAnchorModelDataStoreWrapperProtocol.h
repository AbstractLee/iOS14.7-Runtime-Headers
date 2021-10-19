/* Generated by RuntimeBrowser.
 */

@protocol ATXAnchorModelDataStoreWrapperProtocol <NSObject>

@required

+ (NSDictionary *)actionCandidateFeaturesFromActionEvent:(ATXAppIntentDuetEvent *)arg1 actionMetadata:(ATXAnchorModelPBActionMetadata *)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4;
+ (NSDictionary *)anchorFeaturesForAnchorOccurrence:(ATXDuetEvent *)arg1 anchor:(ATXAnchor *)arg2 anchorMetadata:(ATXAnchorModelPBAnchorMetadata *)arg3;
+ (NSDictionary *)appCandidateFeaturesFromAppLaunchEvent:(ATXAppLaunchDuetEvent *)arg1 appMetadata:(ATXAnchorModelPBAppLaunchMetadata *)arg2 appWasLaunched:(bool)arg3 appEngaged:(bool)arg4;

- (ATXAppIntentDuetEvent *)appIntentDuetEventFromCandidateId:(NSString *)arg1 date:(NSDate *)arg2;
- (NSArray *)appIntentDuetEventsFromCandidateIds:(NSArray *)arg1 date:(NSDate *)arg2;
- (ATXAppLaunchDuetEvent *)appLaunchDuetEventFromCandidateId:(NSString *)arg1 date:(NSDate *)arg2;
- (NSArray *)appLaunchDuetEventsFromCandidateIds:(NSArray *)arg1 date:(NSDate *)arg2;
- (NSDate *)dateAnchorModelWasLastTrainedForAnchor:(ATXAnchor *)arg1;
- (NSDate *)dateOfFirstPositiveCandidateOccurrence:(NSString *)arg1 anchor:(ATXAnchor *)arg2 startDate:(NSDate *)arg3 limit:(unsigned long long)arg4;
- (unsigned long long)deleteSamplesForBundleIdsNotInList:(NSArray *)arg1;
- (unsigned long long)deleteSamplesThatAreMoreThan28DaysOld;
- (long long)numCandidateIdOccurrencesInJointAnchorContext:(NSString *)arg1 anchor:(ATXAnchor *)arg2 anchorMetadata:(ATXAnchorModelPBAnchorMetadata *)arg3;
- (long long)numCandidateOccurrencesInAllContextsForCandidate:(NSString *)arg1;
- (long long)numCandidateOccurrencesInAllContextsForCandidateType:(NSString *)arg1;
- (long long)numCandidateOccurrencesInAnchorContextForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (long long)numCandidateOccurrencesInAnchorContextForCandidateType:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (long long)numUniqueAnchorOccurrencesForAnchor:(ATXAnchor *)arg1 candidateId:(NSString *)arg2;
- (long long)numUniqueAnchorOccurrencesForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (long long)numUniqueAnchorOccurrencesWithUniqueCandidateOccurrenceForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2;
- (NSArray *)secondsAfterAnchorWhenCandidateOccurredForAnchor:(ATXAnchor *)arg1 candidateId:(NSString *)arg2 onlyConsiderFirstOccurrencePerAnchor:(bool)arg3;
- (double)timestampOfMostRecentRecordedAnchorOccurrenceForAnchor:(ATXAnchor *)arg1;
- (NSArray *)trainingDataForCandidate:(NSString *)arg1 anchor:(ATXAnchor *)arg2 replacementStringForNilStringValues:(NSString *)arg3;
- (NSArray *)trainingResultsForAnchor:(ATXAnchor *)arg1;
- (NSSet *)uniqueAnchorEventIdentifiersForAnchor:(ATXAnchor *)arg1;
- (NSSet *)uniqueCandidateIdsThatOccurredAfterAnchor:(ATXAnchor *)arg1;
- (NSSet *)uniqueCandidateIdsThatOccurredAfterAnchor:(ATXAnchor *)arg1 candidateType:(NSString *)arg2;
- (NSSet *)uniqueCandidateIdsThatOccurredAfterAnchor:(ATXAnchor *)arg1 candidateType:(NSString *)arg2 minOccurrences:(long long)arg3;
- (void)updateOrInsertActionTrainingSample:(ATXAppIntentDuetEvent *)arg1 featurizedAction:(ATXAnchorModelPBActionMetadata *)arg2 actionOccurred:(bool)arg3 actionEngaged:(bool)arg4 anchorEvent:(ATXDuetEvent *)arg5 anchor:(ATXAnchor *)arg6;
- (void)updateOrInsertAnchorEvent:(ATXDuetEvent *)arg1 anchor:(ATXAnchor *)arg2 featureMetadata:(ATXAnchorModelPBAnchorMetadata *)arg3;
- (void)updateOrInsertAnchorModelTrainingResults:(NSArray *)arg1 anchor:(ATXAnchor *)arg2;
- (void)updateOrInsertAppTrainingSample:(ATXAppLaunchDuetEvent *)arg1 featurizedApp:(ATXAnchorModelPBAppLaunchMetadata *)arg2 appWasLaunched:(bool)arg3 appEngaged:(bool)arg4 anchorEvent:(ATXDuetEvent *)arg5 anchor:(ATXAnchor *)arg6;

@end