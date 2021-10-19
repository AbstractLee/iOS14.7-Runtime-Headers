/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    ACAccount * _account;
    NSMutableDictionary * _accountParameters;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSMutableDictionary *accountParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_headersFromAccount:(id)arg1;
+ (id)_headersFromAccountParameters:(id)arg1;
+ (void)_setHeaders:(id)arg1 on:(id)arg2;
+ (id)headersFromAccount:(id)arg1 accountParameters:(id)arg2;
+ (id)requestAddingHeaders:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)account;
- (id)accountParameters;
- (id)initWithAccount:(id)arg1 accountParameters:(id)arg2;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (void)setAccount:(id)arg1;
- (void)setAccountParameters:(id)arg1;

@end