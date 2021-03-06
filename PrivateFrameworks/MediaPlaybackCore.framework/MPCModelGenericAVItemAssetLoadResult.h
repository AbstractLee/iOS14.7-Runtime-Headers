/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemAssetLoadResult : NSObject {
    bool  _allowsAssetCaching;
    bool  _allowsAssetInfoCaching;
    NSURL * _alternateHLSKeyCertificateURL;
    NSURL * _alternateHLSKeyServerURL;
    NSURL * _alternateHLSPlaylistURL;
    NSString * _assetPathExtension;
    long long  _assetProtectionType;
    long long  _assetQualityType;
    NSURL * _assetURL;
    long long  _audioAssetType;
    bool  _downloadedAsset;
    NSURL * _enhancedAudioKeyCertificateURL;
    NSURL * _enhancedAudioKeyServerURL;
    bool  _iTunesStoreStream;
    bool  _isCloudStreamingAsset;
    bool  _isHLSAsset;
    bool  _isHomeSharingAsset;
    bool  _onlineSubscriptionKeysRequired;
    NSURL * _protectedContentSupportStorageFileURL;
    NSDictionary * _purchaseBundleDictionary;
    NSURL * _streamingKeyCertificateURL;
    NSURL * _streamingKeyServerURL;
    id  _suzeLeaseID;
    id /* block */  _willBecomeActivePlayerItemHandler;
}

@property (nonatomic) bool allowsAssetCaching;
@property (nonatomic) bool allowsAssetInfoCaching;
@property (nonatomic, copy) NSURL *alternateHLSKeyCertificateURL;
@property (nonatomic, copy) NSURL *alternateHLSKeyServerURL;
@property (nonatomic, copy) NSURL *alternateHLSPlaylistURL;
@property (nonatomic, copy) NSString *assetPathExtension;
@property (nonatomic) long long assetProtectionType;
@property (nonatomic) long long assetQualityType;
@property (nonatomic, copy) NSURL *assetURL;
@property (nonatomic) long long audioAssetType;
@property (getter=isDownloadedAsset, nonatomic) bool downloadedAsset;
@property (nonatomic, copy) NSURL *enhancedAudioKeyCertificateURL;
@property (nonatomic, copy) NSURL *enhancedAudioKeyServerURL;
@property (nonatomic, readonly) bool hasValidAsset;
@property (getter=isiTunesStoreStream, nonatomic) bool iTunesStoreStream;
@property (nonatomic) bool isCloudStreamingAsset;
@property (nonatomic, readonly) bool isEnhancedAudioHLSAsset;
@property (nonatomic) bool isHLSAsset;
@property (nonatomic) bool isHomeSharingAsset;
@property (nonatomic) bool onlineSubscriptionKeysRequired;
@property (nonatomic, copy) NSURL *protectedContentSupportStorageFileURL;
@property (nonatomic, copy) NSDictionary *purchaseBundleDictionary;
@property (nonatomic, copy) NSURL *streamingKeyCertificateURL;
@property (nonatomic, copy) NSURL *streamingKeyServerURL;
@property (nonatomic, retain) id suzeLeaseID;
@property (nonatomic, copy) id /* block */ willBecomeActivePlayerItemHandler;

+ (id)assetLoadResultWithStoreAssetPlaybackResponse:(id)arg1 assetLoadProperties:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)allowsAssetCaching;
- (bool)allowsAssetInfoCaching;
- (id)alternateHLSKeyCertificateURL;
- (id)alternateHLSKeyServerURL;
- (id)alternateHLSPlaylistURL;
- (id)assetPathExtension;
- (long long)assetProtectionType;
- (long long)assetQualityType;
- (id)assetURL;
- (long long)audioAssetType;
- (id)description;
- (id)descriptionDictionary;
- (id)enhancedAudioKeyCertificateURL;
- (id)enhancedAudioKeyServerURL;
- (bool)hasValidAsset;
- (bool)isCloudStreamingAsset;
- (bool)isDownloadedAsset;
- (bool)isEnhancedAudioHLSAsset;
- (bool)isHLSAsset;
- (bool)isHomeSharingAsset;
- (bool)isiTunesStoreStream;
- (bool)onlineSubscriptionKeysRequired;
- (id)protectedContentSupportStorageFileURL;
- (id)purchaseBundleDictionary;
- (void)setAllowsAssetCaching:(bool)arg1;
- (void)setAllowsAssetInfoCaching:(bool)arg1;
- (void)setAlternateHLSKeyCertificateURL:(id)arg1;
- (void)setAlternateHLSKeyServerURL:(id)arg1;
- (void)setAlternateHLSPlaylistURL:(id)arg1;
- (void)setAssetPathExtension:(id)arg1;
- (void)setAssetProtectionType:(long long)arg1;
- (void)setAssetQualityType:(long long)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setAudioAssetType:(long long)arg1;
- (void)setDownloadedAsset:(bool)arg1;
- (void)setEnhancedAudioKeyCertificateURL:(id)arg1;
- (void)setEnhancedAudioKeyServerURL:(id)arg1;
- (void)setITunesStoreStream:(bool)arg1;
- (void)setIsCloudStreamingAsset:(bool)arg1;
- (void)setIsHLSAsset:(bool)arg1;
- (void)setIsHomeSharingAsset:(bool)arg1;
- (void)setOnlineSubscriptionKeysRequired:(bool)arg1;
- (void)setProtectedContentSupportStorageFileURL:(id)arg1;
- (void)setPurchaseBundleDictionary:(id)arg1;
- (void)setStreamingKeyCertificateURL:(id)arg1;
- (void)setStreamingKeyServerURL:(id)arg1;
- (void)setSuzeLeaseID:(id)arg1;
- (void)setWillBecomeActivePlayerItemHandler:(id /* block */)arg1;
- (id)streamingKeyCertificateURL;
- (id)streamingKeyServerURL;
- (id)suzeLeaseID;
- (id /* block */)willBecomeActivePlayerItemHandler;

@end
