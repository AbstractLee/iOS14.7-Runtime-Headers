/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHandwashingEventDataSource : HKHealthQueryChartCacheDataSource {
    long long  _timeScope;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic) long long timeScope;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

+ (double)durationForCompleteSample;

- (void).cxx_destruct;
- (id)_averageDurationChartPointForObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_dailyAverageChartPointForObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 averageInterval:(unsigned long long)arg4;
- (void)_handleSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4 completion:(id /* block */)arg5;
- (id)chartPointsForSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 statisticsInterval:(id)arg4;
- (bool)doesDurationMeetGoal:(double)arg1;
- (double)durationForObject:(id)arg1;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 timeScope:(long long)arg3;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)queryDescription;
- (void)setTimeScope:(long long)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (long long)timeScope;
- (id /* block */)userInfoCreationBlock;

@end