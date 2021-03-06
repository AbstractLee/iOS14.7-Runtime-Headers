/* Generated by RuntimeBrowser.
 */

@protocol FCNewsletterManager <NSObject>

@required

- (long long)activeNewsletter;
- (void)addObserver:(id <FCNewsletterSubscriptionObserver>)arg1;
- (bool)canOptIntoIssues;
- (bool)canSubscribe;
- (bool)canSubscribeToNewsletter:(long long)arg1;
- (bool)canUnsubscribe;
- (void)deletePersonalizationVector;
- (bool)enabled;
- (NFPromise *)forceUpdateSubscription;
- (long long)includeOptions;
- (bool)isOptedIntoIssues;
- (bool)isSubscribed;
- (long long)issueOptinStatus;
- (void)notifyObservers;
- (void)optIntoIssues;
- (void)optOutOfIssues;
- (void)removeObserver:(id <FCNewsletterSubscriptionObserver>)arg1;
- (bool)shouldSubmitPersonalizationVector;
- (void)submitPersonalizationVector:(NTPBVersionedPersonalizationVector *)arg1 subscribedBundleChannelIDs:(NSSet *)arg2;
- (void)subscribe;
- (void)subscribeTo:(long long)arg1;
- (long long)subscription;
- (long long)subscriptionStatusForNewsletter:(long long)arg1;
- (void)unsubscribe;
- (void)updateCacheWithNewsletterString:(NSString *)arg1 includeArray:(NSArray *)arg2;
- (NFPromise *)updateSubscription;

@end
