/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

@interface SORequestQueue : NSObject {
    NSString * _identifier;
    id /* block */  _processItemBlock;
    id  _processingItem;
    NSMutableArray * _queue;
}

@property (nonatomic, copy) id /* block */ processItemBlock;

+ (id)debugDescription;
+ (void)removeQueueWithIdentifier:(id)arg1;
+ (id)requestQueueWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_itemCompleted;
- (void)_processItem:(id)arg1;
- (id)description;
- (void)enqueueRequest:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id /* block */)processItemBlock;
- (void)processNextRequest;
- (unsigned long long)queueCount;
- (void)removeAllRequestsWithBlock:(id /* block */)arg1;
- (void)setProcessItemBlock:(id /* block */)arg1;

@end