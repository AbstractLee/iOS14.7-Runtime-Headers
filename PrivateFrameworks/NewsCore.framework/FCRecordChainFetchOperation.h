/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordChainFetchOperation : FCOperation {
    NSMutableSet * _actualTopLevelRecordIDs;
    NSArray * _additionalRecordSources;
    NSDictionary * _cachePoliciesByRecordType;
    FCHeldRecords * _cachedRecords;
    id /* block */  _cachedRecordsLookupBlock;
    <FCContentContext> * _context;
    id /* block */  _dynamicCachePolicyBlock;
    FCEdgeCacheHint * _edgeCacheHint;
    NSDictionary * _linkKeysByRecordType;
    NSMutableSet * _missingCachedOnlyTopLevelRecordIDs;
    NSMutableArray * _mutableNetworkEvents;
    NSDictionary * _pbRecordTypesByRecordType;
    id /* block */  _recordChainCompletionHandler;
    NSArray * _recordSources;
    NSDictionary * _recordSourcesByRecordType;
    NSDictionary * _resultHeldRecordsByType;
    bool  _shouldBypassRecordSourcePersistence;
    bool  _shouldFailOnLimitExceededError;
    bool  _shouldReturnErrorWhenSomeRecordsMissing;
    NSMutableSet * _skippedTopLevelRecordIDs;
    NSArray * _topLevelRecordIDs;
}

@property (nonatomic, retain) NSArray *additionalRecordSources;
@property (nonatomic, copy) NSDictionary *cachePoliciesByRecordType;
@property (nonatomic, copy) id /* block */ cachedRecordsLookupBlock;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ dynamicCachePolicyBlock;
@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic, copy) NSDictionary *linkKeysByRecordType;
@property (nonatomic, readonly, copy) NSArray *networkEvents;
@property (nonatomic, copy) id /* block */ recordChainCompletionHandler;
@property (nonatomic) bool shouldBypassRecordSourcePersistence;
@property (nonatomic) bool shouldFailOnLimitExceededError;
@property (nonatomic) bool shouldReturnErrorWhenSomeRecordsMissing;
@property (nonatomic, copy) NSArray *topLevelRecordIDs;

- (void).cxx_destruct;
- (id)additionalRecordSources;
- (id)cachePoliciesByRecordType;
- (id /* block */)cachedRecordsLookupBlock;
- (id)context;
- (id /* block */)dynamicCachePolicyBlock;
- (id)edgeCacheHint;
- (id)init;
- (id)linkKeysByRecordType;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)recordChainCompletionHandler;
- (void)setAdditionalRecordSources:(id)arg1;
- (void)setCachePoliciesByRecordType:(id)arg1;
- (void)setCachedRecordsLookupBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDynamicCachePolicyBlock:(id /* block */)arg1;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setLinkKeysByRecordType:(id)arg1;
- (void)setRecordChainCompletionHandler:(id /* block */)arg1;
- (void)setShouldBypassRecordSourcePersistence:(bool)arg1;
- (void)setShouldFailOnLimitExceededError:(bool)arg1;
- (void)setShouldReturnErrorWhenSomeRecordsMissing:(bool)arg1;
- (void)setTopLevelRecordIDs:(id)arg1;
- (bool)shouldBypassRecordSourcePersistence;
- (bool)shouldFailOnLimitExceededError;
- (bool)shouldReturnErrorWhenSomeRecordsMissing;
- (id)topLevelRecordIDs;
- (bool)validateOperation;

@end