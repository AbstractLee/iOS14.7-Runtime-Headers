/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {
    <FCBundleSubscriptionProviderType> * _bundleSubscriptionProvider;
    <FCContentContext> * _context;
    FCIssueReadingHistory * _issueReadingHistory;
    FCSubscriptionController * _subscriptionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchCurrentIssuesWithCompletion:(id /* block */)arg1;
- (void)fetchUsersCurrentIssuesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3 bundleSubscriptionProvider:(id)arg4;

@end