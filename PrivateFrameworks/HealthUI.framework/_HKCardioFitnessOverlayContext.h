/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKCardioFitnessOverlayContext : NSObject <HKOverlayContext> {
    HKDisplayTypeContextItem * _lastUpdatedItem;
    long long  _mode;
    HKSampleType * _monitoringSampleType;
    HKInteractiveChartOverlayViewController * _overlayChartController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) HKSampleType *monitoringSampleType;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cardioFitnessContextItemWithLevel:(long long)arg1 chartPointCount:(id)arg2 forTimeScope:(long long)arg3;
- (id)_cardioFitnessContextItemWithLevel:(long long)arg1 count:(id)arg2 unitString:(id)arg3;
- (id)_cardioFitnessContextItemWithLevel:(long long)arg1 sampleCount:(id)arg2;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)contextItemForLastUpdate;
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)lastUpdatedItem;
- (long long)mode;
- (id)monitoringSampleType;
- (id)overlayChartController;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)sampleTypeForDateRangeUpdates;
- (void)setLastUpdatedItem:(id)arg1;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(id /* block */)arg3;

@end