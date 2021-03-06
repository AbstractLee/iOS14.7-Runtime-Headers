/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMAppleAccountUtilities : NSObject {
    ACAccount * __debug_primaryICloudACAccount;
    ACAccountStore * _accountStore;
    bool  _primaryICloudACAccountIsValid;
    ACAccount * _unsafeUntilSystemReady_primaryICloudACAccount;
}

@property (nonatomic, retain) ACAccount *_debug_primaryICloudACAccount;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic) bool primaryICloudACAccountIsValid;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;
@property (readonly) bool unsafeUntilSystemReady_primaryICloudAccountEnabled;

+ (id)accountDescriptionWithACAccount:(id)arg1;
+ (id)getAppleIDSession;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_debug_primaryICloudACAccount;
- (void)_setPrimaryICloudACAccount:(id)arg1;
- (void)_unsetMigrationFlagsWithACAccount:(id)arg1 inStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)accessQueue;
- (id)accountStore;
- (void)accountStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initForObservingAccountStoreChanges:(bool)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (void)invalidatePrimaryICloudACAccount;
- (bool)primaryICloudACAccountIsValid;
- (void)saveDidChooseToMigrate:(bool)arg1 didFinishMigration:(bool)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setAccountStore:(id)arg1;
- (void)setPrimaryICloudACAccountIsValid:(bool)arg1;
- (void)set_debug_primaryICloudACAccount:(id)arg1;
- (id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
- (id)unsafeUntilSystemReady_primaryICloudACAccount;
- (id)unsafeUntilSystemReady_primaryICloudAccountCalDavService;
- (bool)unsafeUntilSystemReady_primaryICloudAccountEnabled;

@end
