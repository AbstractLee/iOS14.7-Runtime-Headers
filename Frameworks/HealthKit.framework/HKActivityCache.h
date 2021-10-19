/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKActivityCache : HKSample <HDCoding, NSCopying> {
    double  _activeHours;
    double  _activeHoursGoal;
    NSDate * _activeHoursGoalDate;
    long long  _activityMoveMode;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    NSDate * _briskMinutesGoalDate;
    long long  _cacheIndex;
    NSArray * _dailyBriskMinutesStatistics;
    NSArray * _dailyEnergyBurnedStatistics;
    NSArray * _dailyMoveMinutesStatistics;
    NSDateComponents * _dateComponents;
    double  _deepBreathingDuration;
    HKQuantity * _energyBurned;
    HKQuantity * _energyBurnedGoal;
    NSDate * _energyBurnedGoalDate;
    long long  _flightsClimbed;
    unsigned long long  _knownFields;
    double  _moveMinutes;
    double  _moveMinutesGoal;
    NSDate * _moveMinutesGoalDate;
    long long  _pushCount;
    long long  _sequence;
    long long  _stepCount;
    HKQuantity * _walkingAndRunningDistance;
    long long  _wheelchairUse;
}

@property (setter=_setActiveHours:) double activeHours;
@property (setter=_setActiveHoursGoal:) double activeHoursGoal;
@property (readonly) NSDate *activeHoursGoalDate;
@property (setter=_setActivityMoveMode:) long long activityMoveMode;
@property (setter=_setBriskMinutes:) double briskMinutes;
@property (setter=_setBriskMinutesGoal:) double briskMinutesGoal;
@property (readonly) NSDate *briskMinutesGoalDate;
@property (setter=_setCacheIndex:) long long cacheIndex;
@property (setter=_setDailyBriskMinutesStatistics:, copy) NSArray *dailyBriskMinutesStatistics;
@property (setter=_setDailyEnergyBurnedStatistics:, copy) NSArray *dailyEnergyBurnedStatistics;
@property (setter=_setDailyMoveMinutesStatistics:, copy) NSArray *dailyMoveMinutesStatistics;
@property (readonly) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (setter=_setDeepBreathingDuration:) double deepBreathingDuration;
@property (readonly, copy) NSString *description;
@property (setter=_setEnergyBurned:, retain) HKQuantity *energyBurned;
@property (setter=_setEnergyBurnedGoal:, retain) HKQuantity *energyBurnedGoal;
@property (readonly) NSDate *energyBurnedGoalDate;
@property (setter=_setFlightsClimbed:) long long flightsClimbed;
@property (readonly) bool hasActiveHours;
@property (readonly) bool hasActiveHoursGoal;
@property (readonly) bool hasActiveHoursGoalDate;
@property (readonly) bool hasBriskMinutes;
@property (readonly) bool hasBriskMinutesGoal;
@property (readonly) bool hasBriskMinutesGoalDate;
@property (readonly) bool hasDailyBriskMinutesStatistics;
@property (readonly) bool hasDailyEnergyBurnedStatistics;
@property (readonly) bool hasDailyMoveMinutesStatistics;
@property (readonly) bool hasDateComponents;
@property (readonly) bool hasDeepBreathingDuration;
@property (readonly) bool hasEnergyBurned;
@property (readonly) bool hasEnergyBurnedGoal;
@property (readonly) bool hasFlightsClimbed;
@property (readonly) bool hasMoveMinutes;
@property (readonly) bool hasMoveMinutesGoal;
@property (readonly) bool hasPushCount;
@property (readonly) bool hasStepCount;
@property (readonly) bool hasWalkingAndRunningDistance;
@property (readonly) bool hasWheelchairUse;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long knownFields;
@property (setter=_setMoveMinutes:) double moveMinutes;
@property (setter=_setMoveMinutesGoal:) double moveMinutesGoal;
@property (readonly) NSDate *moveMinutesGoalDate;
@property (setter=_setPushCount:) long long pushCount;
@property (setter=_setSequence:) long long sequence;
@property (setter=_setStepCount:) long long stepCount;
@property (readonly) Class superclass;
@property (setter=_setWalkingAndRunningDistance:, retain) HKQuantity *walkingAndRunningDistance;
@property (setter=_setWheelchairUse:) long long wheelchairUse;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 energyBurned:(id)arg5 energyBurnedGoal:(id)arg6 walkingAndRunningDistance:(id)arg7 metadata:(id)arg8;
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 metadata:(id)arg5;
+ (id)_activityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 sequence:(long long)arg5;
+ (bool)_isConcreteObjectClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_energyBurnedGoalInKilocalories;
- (double)_energyBurnedInKilocalories;
- (bool)_isEqualToActivityCache:(id)arg1;
- (void)_setActiveHours:(double)arg1;
- (void)_setActiveHoursGoal:(double)arg1;
- (void)_setActiveHoursGoal:(double)arg1 date:(id)arg2;
- (void)_setActiveHoursGoalDateOnly:(id)arg1;
- (void)_setActiveHoursGoalOnly:(double)arg1;
- (void)_setActivityMoveMode:(long long)arg1;
- (void)_setBriskMinutes:(double)arg1;
- (void)_setBriskMinutesGoal:(double)arg1;
- (void)_setBriskMinutesGoal:(double)arg1 date:(id)arg2;
- (void)_setBriskMinutesGoalDateOnly:(id)arg1;
- (void)_setBriskMinutesGoalOnly:(double)arg1;
- (void)_setCacheIndex:(long long)arg1;
- (void)_setDailyBriskMinutesStatistics:(id)arg1;
- (void)_setDailyEnergyBurnedStatistics:(id)arg1;
- (void)_setDailyMoveMinutesStatistics:(id)arg1;
- (void)_setDeepBreathingDuration:(double)arg1;
- (void)_setEnergyBurned:(id)arg1;
- (void)_setEnergyBurnedGoal:(id)arg1;
- (void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2;
- (void)_setEnergyBurnedGoalDateOnly:(id)arg1;
- (void)_setEnergyBurnedGoalOnly:(id)arg1;
- (void)_setFlightsClimbed:(long long)arg1;
- (void)_setMoveMinutes:(double)arg1;
- (void)_setMoveMinutesGoal:(double)arg1;
- (void)_setMoveMinutesGoal:(double)arg1 date:(id)arg2;
- (void)_setMoveMinutesGoalDateOnly:(id)arg1;
- (void)_setMoveMinutesGoalOnly:(double)arg1;
- (void)_setPushCount:(long long)arg1;
- (void)_setSequence:(long long)arg1;
- (void)_setStepCount:(long long)arg1;
- (void)_setWalkingAndRunningDistance:(id)arg1;
- (void)_setWheelchairUse:(long long)arg1;
- (id)_valueDescription;
- (double)_walkingAndRunningDistanceInMeters;
- (double)activeHours;
- (double)activeHoursGoal;
- (id)activeHoursGoalDate;
- (double)activeHoursGoalPercentage;
- (long long)activityMoveMode;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (id)briskMinutesGoalDate;
- (double)briskMinutesGoalPercentage;
- (long long)cacheIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dailyBriskMinutesStatistics;
- (id)dailyEnergyBurnedStatistics;
- (id)dailyMoveMinutesStatistics;
- (id)dateComponents;
- (double)deepBreathingDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)energyBurned;
- (id)energyBurnedGoal;
- (id)energyBurnedGoalDate;
- (double)energyBurnedGoalPercentage;
- (long long)flightsClimbed;
- (bool)hasActiveHours;
- (bool)hasActiveHoursGoal;
- (bool)hasActiveHoursGoalDate;
- (bool)hasBriskMinutes;
- (bool)hasBriskMinutesGoal;
- (bool)hasBriskMinutesGoalDate;
- (bool)hasDailyBriskMinutesStatistics;
- (bool)hasDailyEnergyBurnedStatistics;
- (bool)hasDailyMoveMinutesStatistics;
- (bool)hasDateComponents;
- (bool)hasDeepBreathingDuration;
- (bool)hasEnergyBurned;
- (bool)hasEnergyBurnedGoal;
- (bool)hasFlightsClimbed;
- (bool)hasMoveMinutes;
- (bool)hasMoveMinutesGoal;
- (bool)hasPushCount;
- (bool)hasStepCount;
- (bool)hasWalkingAndRunningDistance;
- (bool)hasWheelchairUse;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)knownFields;
- (double)moveMinutes;
- (double)moveMinutesGoal;
- (id)moveMinutesGoalDate;
- (double)moveMinutesGoalPercentage;
- (long long)pushCount;
- (void)reset;
- (long long)sequence;
- (long long)stepCount;
- (id)walkingAndRunningDistance;
- (long long)wheelchairUse;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (id)codableRepresentationForJournal;
- (id)codableRepresentationForSync;

@end