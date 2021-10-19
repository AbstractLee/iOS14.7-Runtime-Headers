/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXIdleTimeBeginAnchor : ATXAnchor

+ (id)anchorOccurenceDateFromDuetEvent:(id)arg1;
+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (bool)isActive;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (double)minimumSecondsForBeingIdle;
+ (id)predicateForContextStoreRegistration;
+ (id)predictNextAnchorOccurrenceDate;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg1 selector:(SEL)arg2;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (bool)usesContextStoreForRealTimeNotifications;
+ (double)weightedAverageOfHoursFromDates:(id)arg1;

@end