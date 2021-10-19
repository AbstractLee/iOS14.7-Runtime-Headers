/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationArticleHeadline : FCHeadline {
    NSString * _accessoryText;
    NSArray * _allowedStorefrontIDs;
    NSString * _articleID;
    NSDictionary * _articlePayload;
    NSString * _articleRecirculationConfigJSON;
    FCAssetManager * _assetManager;
    long long  _backendArticleVersion;
    NSArray * _blockedStorefrontIDs;
    long long  _bodyTextLength;
    bool  _boundToContext;
    bool  _bundlePaid;
    NSString * _callToActionText;
    NSString * _changeEtag;
    NSString * _clusterID;
    unsigned long long  _contentType;
    NSURL * _contentURL;
    FCCoverArt * _coverArt;
    bool  _deleted;
    bool  _featureCandidate;
    NSData * _flintDocumentPrefetchedData;
    NSString * _flintDocumentUrlString;
    NSArray * _flintFontResourceIDs;
    bool  _hasThumbnail;
    bool  _hiddenFromAutoFavorites;
    bool  _hiddenFromFeeds;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSArray * _iAdSectionIDs;
    NSString * _identifier;
    bool  _isDraft;
    bool  _isLocalDraft;
    bool  _issueOnly;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    double  _layeredThumbnailAspectRatio;
    NSString * _layeredThumbnailJSON;
    NSArray * _linkedArticleIDs;
    NSArray * _linkedIssueIDs;
    long long  _minimumNewsVersion;
    NSArray * _moreFromPublisherArticleIDs;
    FCArticleAudioTrack * _narrativeTrack;
    FCArticleAudioTrack * _narrativeTrackSample;
    NSString * _narrativeTrackTextRanges;
    bool  _needsRapidUpdates;
    bool  _paid;
    bool  _pressRelease;
    NSString * _primaryAudience;
    NSDate * _publishDate;
    long long  _publisherArticleVersion;
    NSArray * _publisherSpecifiedArticleIDs;
    NSString * _referencedArticleID;
    NSArray * _relatedArticleIDs;
    unsigned long long  _role;
    NSString * _shortExcerpt;
    bool  _showBundleSoftPaywall;
    bool  _showMinimalChrome;
    <FCChannelProviding> * _sourceChannel;
    NSString * _sourceName;
    bool  _sponsored;
    FCTopStoriesStyleConfiguration * _storyStyle;
    unsigned long long  _storyType;
    NSString * _surfacedByArticleListID;
    FCHeadlineThumbnail * _thumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    FCHeadlineThumbnail * _thumbnailHQ;
    FCHeadlineThumbnail * _thumbnailLQ;
    FCHeadlineThumbnail * _thumbnailMedium;
    FCHeadlineThumbnail * _thumbnailUltraHQ;
    NSString * _title;
    NSArray * _topicIDs;
    NSArray * _topics;
    bool  _useTransparentNavigationBar;
    NSString * _versionIdentifier;
    double  _videoDuration;
    NSURL * _videoURL;
    bool  _webEmbedsEnabled;
}

@property (nonatomic, retain) NSDictionary *articlePayload;
@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) NSString *changeEtag;
@property (nonatomic, retain) NSData *flintDocumentPrefetchedData;
@property (nonatomic, retain) NSString *flintDocumentUrlString;
@property (nonatomic, retain) NSArray *flintFontResourceIDs;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)articleID;
- (id)articlePayload;
- (id)articleRecirculationConfigJSON;
- (id)assetManager;
- (long long)backendArticleVersion;
- (id)blockedStorefrontIDs;
- (long long)bodyTextLength;
- (id)callToActionText;
- (id)changeEtag;
- (id)clusterID;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)contentWithContext:(id)arg1;
- (id)coverArt;
- (id)flintDocumentPrefetchedData;
- (id)flintDocumentUrlString;
- (id)flintFontResourceIDs;
- (id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 prefetchedData:(id)arg2 withAssetManager:(id)arg3;
- (id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (bool)hasThumbnail;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (bool)isBoundToContext;
- (bool)isBundlePaid;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isHiddenFromAutoFavorites;
- (bool)isHiddenFromFeeds;
- (bool)isIssueOnly;
- (bool)isLocalDraft;
- (bool)isPaid;
- (bool)isPressRelease;
- (bool)isSponsored;
- (bool)isValid;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (double)layeredThumbnailAspectRatio;
- (id)layeredThumbnailJSON;
- (id)linkedArticleIDs;
- (id)linkedIssueIDs;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (id)narrativeTrack;
- (id)narrativeTrackSample;
- (id)narrativeTrackTextRanges;
- (bool)needsRapidUpdates;
- (id)primaryAudience;
- (id)publishDate;
- (long long)publisherArticleVersion;
- (id)publisherSpecifiedArticleIDs;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (unsigned long long)role;
- (void)setAccessoryText:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setArticlePayload:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setBundlePaid:(bool)arg1;
- (void)setCallToActionText:(id)arg1;
- (void)setChangeEtag:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setFlintDocumentPrefetchedData:(id)arg1;
- (void)setFlintDocumentUrlString:(id)arg1;
- (void)setFlintFontResourceIDs:(id)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPaid:(bool)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setRole:(unsigned long long)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setStoryStyle:(id)arg1;
- (void)setStoryType:(unsigned long long)arg1;
- (void)setSurfacedByArticleListID:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailHQ:(id)arg1;
- (void)setThumbnailLQ:(id)arg1;
- (void)setThumbnailMedium:(id)arg1;
- (void)setThumbnailUltraHQ:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicIDs:(id)arg1;
- (id)shortExcerpt;
- (bool)showBundleSoftPaywall;
- (bool)showMinimalChrome;
- (id)sourceChannel;
- (id)sourceName;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)surfacedByArticleListID;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)title;
- (id)topicIDs;
- (id)topics;
- (bool)useTransparentNavigationBar;
- (id)versionIdentifier;
- (double)videoDuration;
- (id)videoURL;
- (bool)webEmbedsEnabled;

@end