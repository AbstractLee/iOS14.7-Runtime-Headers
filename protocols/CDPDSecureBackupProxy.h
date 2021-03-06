/* Generated by RuntimeBrowser.
 */

@protocol CDPDSecureBackupProxy <NSObject>

@required

- (NSDictionary *)accountInfoWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)cacheRecoveryKey:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)canUpdateDataPrivacyStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (CDPContext *)cdpContext;
- (void)dataPrivacyStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)disableWithInfo:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)disableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)enableWithInfo:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)enableWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (id)initWithContext:(CDPContext *)arg1;
- (NSDictionary *)recoverWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (void)recoveryKeyAvailabilityWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCdpContext:(CDPContext *)arg1;
- (void)setDataPrivacyEnabled:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)uncacheAllSecrets;

@end
