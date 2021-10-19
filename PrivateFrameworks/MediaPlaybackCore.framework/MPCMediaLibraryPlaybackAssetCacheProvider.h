/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {
    MPMediaLibrary * _mediaLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1;
+ (id)deviceLibraryProviderWithUserIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithMediaLibrary:(id)arg1;
- (long long)_persistentIDForModelObject:(id)arg1;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getPlaybackAssetCacheDestinationURL:(id*)arg1 purchaseBundleDestinationURL:(id*)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5;
- (void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end