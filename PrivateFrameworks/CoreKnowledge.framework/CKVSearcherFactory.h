/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVSearcherFactory : NSObject <CKVSearcherProvider> {
    NSObject<OS_dispatch_queue> * _searcherQueue;
    NSObject<CKVSearchServiceProvider> * _serviceProvider;
}

+ (id)sharedSearcherFactory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2;
- (id)makeSearcher;

@end
