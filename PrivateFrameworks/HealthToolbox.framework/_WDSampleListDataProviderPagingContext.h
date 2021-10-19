/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface _WDSampleListDataProviderPagingContext : NSObject {
    HKQuery * _currentQuery;
    NSDate * _earliestProcessedSampleDate;
    NSDate * _fetchUntilDate;
    bool  _fetchingData;
    bool  _requiresPaging;
}

@property (nonatomic, retain) HKQuery *currentQuery;
@property (nonatomic, retain) NSDate *earliestProcessedSampleDate;
@property (nonatomic, retain) NSDate *fetchUntilDate;
@property (getter=isFetchingData, nonatomic) bool fetchingData;
@property (nonatomic) bool requiresPaging;

- (void).cxx_destruct;
- (id)currentQuery;
- (id)earliestProcessedSampleDate;
- (id)fetchUntilDate;
- (bool)isFetchingData;
- (bool)requiresPaging;
- (void)setCurrentQuery:(id)arg1;
- (void)setEarliestProcessedSampleDate:(id)arg1;
- (void)setFetchUntilDate:(id)arg1;
- (void)setFetchingData:(bool)arg1;
- (void)setRequiresPaging:(bool)arg1;

@end