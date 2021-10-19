/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
 */

@interface DDSAssetQueryResultCache : NSObject <DDSAssetQueryResultCaching, DDSCacheDelegate> {
    DDSCache * _cache;
}

@property (nonatomic, readonly) DDSCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cache;
- (void)cache:(id)arg1 willEvictObjects:(id)arg2;
- (void)cacheAssets:(id)arg1 forQuery:(id)arg2;
- (id)cachedAssetsForQuery:(id)arg1;
- (void)clearCache;
- (id)init;

@end