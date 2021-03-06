/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTrialManager : NSObject {
    NSString * _experimentId;
    NSDictionary * _factors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _treatmentId;
    TRIClient * _trialClient;
}

@property (nonatomic, readonly) long long characterThresholdForAnywhereInTitleOrURL;
@property (nonatomic, readonly) long long characterThresholdForStartOfTitle;
@property (nonatomic, readonly) long long characterThresholdForStartOfTitleWord;
@property (nonatomic, readonly) long long characterThresholdForStartOfURL;
@property (nonatomic, readonly) long long characterThresholdForStartOfURLPathComponent;
@property (nonatomic, readonly) bool disableLocalPhantomTophits;
@property (nonatomic, readonly) bool enableCompletionListHistoryDeduplication;
@property (nonatomic, readonly) bool enableDedupeAgainstSwitchToTab;
@property (nonatomic, readonly) bool enableDedupeThroughAlternativeURLs;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, retain) NSDictionary *factors;
@property (nonatomic, readonly) WBSTrialIdentifiers *identifiers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) long long matchingWordsInTitleThreshold;
@property (nonatomic, readonly) long long maximumTopSectionParsecResultsToDisplay;
@property (nonatomic, readonly) double normalizedTopSitesScoreAndVisitCountMultiplier;
@property (nonatomic, readonly) double percentageThresholdForAnywhereInTitle;
@property (nonatomic, readonly) double percentageThresholdForAnywhereInURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic, retain) TRIClient *trialClient;

+ (id)shared;

- (void).cxx_destruct;
- (long long)characterThresholdForAnywhereInTitleOrURL;
- (long long)characterThresholdForStartOfTitle;
- (long long)characterThresholdForStartOfTitleWord;
- (long long)characterThresholdForStartOfURL;
- (long long)characterThresholdForStartOfURLPathComponent;
- (bool)disableLocalPhantomTophits;
- (bool)enableCompletionListHistoryDeduplication;
- (bool)enableDedupeAgainstSwitchToTab;
- (bool)enableDedupeThroughAlternativeURLs;
- (id)experimentId;
- (id)factorWithName:(id)arg1;
- (id)factors;
- (void)fetchFactorsInNamespace:(id)arg1;
- (id)identifiers;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (long long)matchingWordsInTitleThreshold;
- (long long)maximumTopSectionParsecResultsToDisplay;
- (double)normalizedTopSitesScoreAndVisitCountMultiplier;
- (id)numberFactorWithName:(id)arg1;
- (double)percentageThresholdForAnywhereInTitle;
- (double)percentageThresholdForAnywhereInURL;
- (id)queue;
- (void)setExperimentId:(id)arg1;
- (void)setFactors:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setQueue:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (id)stringFactorWithName:(id)arg1;
- (id)treatmentId;
- (id)trialClient;

@end
