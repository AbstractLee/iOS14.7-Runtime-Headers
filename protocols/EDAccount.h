/* Generated by RuntimeBrowser.
 */

@protocol EDAccount <ECMailAccount>

@required

- (bool)canAuthenticateWithCurrentCredentials;
- (NSString *)displayName;
- (bool)hasPasswordCredential;
- (NSString *)hostname;
- (NSString *)identifier;
- (bool)primaryiCloudAccount;
- (void)savePersistentAccount;
- (NSString *)statisticsKind;
- (ACAccount *)systemAccount;
- (NSString *)username;

@end