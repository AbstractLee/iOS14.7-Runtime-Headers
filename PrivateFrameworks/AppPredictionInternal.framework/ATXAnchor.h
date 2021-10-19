/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXAnchor : NSObject <NSCopying> {
    NSString * _anchorEventIdentifier;
}

@property (nonatomic, retain) NSString *anchorEventIdentifier;

+ (Class)anchorClassFromAnchorTypeString:(id)arg1;
+ (id)anchorOccurenceDateFromDuetEvent:(id)arg1;
+ (long long)anchorType;
+ (id)anchorTypeToAnchorClassName:(long long)arg1;
+ (id)anchorTypeToString:(long long)arg1;
+ (id)duetEventsPredicates;
+ (double)durationOfAnchorEvent:(id)arg1;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (bool)isActive;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)arg1;
+ (id)predicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg1 selector:(SEL)arg2;
+ (void)registerWithContextStoreForAnchorEntranceWithCallback:(id /* block */)arg1 notificationId:(id)arg2 registrationPersistenceContext:(id)arg3;
+ (void)registerWithContextStoreForAnchorExitWithCallback:(id /* block */)arg1 notificationId:(id)arg2 registrationPersistenceContext:(id)arg3;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (bool)shouldProcessContextStoreNotificationForDict;
+ (bool)shouldProcessContextStoreNotificationForNumber;
+ (Class)supportedDuetDataProviderClass;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg1;
+ (bool)usesContextStoreForRealTimeNotifications;

- (void).cxx_destruct;
- (id)anchorEventIdentifier;
- (id)anchorTypeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)setAnchorEventIdentifier:(id)arg1;

@end