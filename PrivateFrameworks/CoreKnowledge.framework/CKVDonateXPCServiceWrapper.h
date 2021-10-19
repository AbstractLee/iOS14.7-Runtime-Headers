/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVDonateXPCServiceWrapper : NSObject <CKVDonateService, CKVDonateServiceProvider> {
    CKVXPCServiceBridge * _xpcServiceBridge;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)donateService;
- (id)init;
- (oneway void)submitVocabularyDonation:(id)arg1 completion:(id /* block */)arg2;

@end