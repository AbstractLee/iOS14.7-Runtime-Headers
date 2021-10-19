/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPTaskProcessingBatchRequestState : NSObject {
    NSMutableArray * _assetURLs;
    id /* block */  _perAssetResultsHandler;
}

- (void).cxx_destruct;
- (void)flushWithError:(id)arg1;
- (id)initWithAssetURLs:(id)arg1 andPerAssetResultsHandler:(id /* block */)arg2;
- (bool)processResults:(id)arg1 andError:(id)arg2 forAssetURL:(id)arg3;

@end