/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVocabularyDonator : NSObject {
    NSObject<CKVDonateAuthorization> * _authorization;
    NSObject<CKVDonateService> * _donateService;
    NSString * _donatorName;
    CKVOriginApp * _originApp;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_donatorNameWithOriginApp:(id)arg1;
+ (id)donatorWithOriginAppId:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_buildDonationWithVocabularyItems:(id)arg1 ofClass:(Class)arg2 error:(id*)arg3;
- (void)_processDonation:(id)arg1 itemClass:(Class)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithOriginApp:(id)arg1 donateService:(id)arg2 dispatchQueue:(id)arg3 authorization:(id)arg4;
- (void)replaceAllVocabularyOfClass:(Class)arg1 withVocabulary:(id)arg2 completion:(id /* block */)arg3;

@end
