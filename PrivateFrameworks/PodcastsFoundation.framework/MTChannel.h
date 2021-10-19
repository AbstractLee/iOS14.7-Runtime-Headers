/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
 */

@interface MTChannel : NSManagedObject

@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic) double lastPersonalizedRequestDate;
@property (nonatomic) float logoImageHeight;
@property (nonatomic, retain) NSString *logoImageURL;
@property (nonatomic) float logoImageWidth;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *podcastUuids;
@property (nonatomic, retain) NSSet *podcasts;
@property (nonatomic) long long storeId;
@property (nonatomic) bool subscriptionActive;
@property (nonatomic) double subscriptionEnabledDate;
@property (nonatomic) long long totalShowCount;
@property (nonatomic, retain) NSString *uberBackgroundImageURL;
@property (nonatomic, retain) NSString *uberBackgroundJoeColor;
@property (nonatomic, retain) NSString *url;

+ (id)createOrFindChannelFromFeedChannelItem:(id)arg1 personalizedRequest:(bool)arg2 context:(id)arg3;
+ (id)predicateForChannelWithStoreId:(long long)arg1;

@end