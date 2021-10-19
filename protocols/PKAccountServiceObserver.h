/* Generated by RuntimeBrowser.
 */

@protocol PKAccountServiceObserver <NSObject>

@optional

- (void)accountAdded:(PKAccount *)arg1;
- (void)accountChanged:(PKAccount *)arg1;
- (void)accountRemoved:(PKAccount *)arg1;
- (void)accountUsersChanged:(NSSet *)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)scheduledPaymentsChangedForAccountIdentifier:(NSString *)arg1;
- (void)statementsChangedForAccountIdentifier:(NSString *)arg1;

@end