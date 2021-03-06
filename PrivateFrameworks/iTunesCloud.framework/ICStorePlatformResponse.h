/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse> {
    NSNumber * _accountIdentifier;
    NSNumber * _enqueuerAccountIdentifier;
    NSDate * _expirationDate;
    NSArray * _requestedItemIdentifiers;
    NSDictionary * _responseDictionary;
    NSString * _storefrontIdentifier;
}

@property (nonatomic, readonly, copy) NSNumber *accountIdentifier;
@property (nonatomic, readonly, copy) NSArray *allItems;
@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enqueuerAccountIdentifier;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mpIsPersonalizedOffer;
@property (nonatomic, readonly, copy) id rawResponse;
@property (nonatomic, readonly, copy) NSDictionary *resultsDictionary;
@property (nonatomic, readonly, copy) NSString *storefrontIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (void).cxx_destruct;
- (void)_enumerateResultDictionariesUsingBlock:(id /* block */)arg1;
- (id)accountIdentifier;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)enqueuerAccountIdentifier;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)expirationDate;
- (id)initWithResponseDictionary:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 requestedItemIdentifiers:(id)arg2;
- (id)initWithURLResponse:(id)arg1 requestedItemIdentifiers:(id)arg2;
- (bool)isAuthenticated;
- (id)itemForIdentifier:(id)arg1;
- (id)rawResponse;
- (id)resultsDictionary;
- (id)storefrontIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)mpFakeCompletionDataForBuys;
+ (bool)mpShowBuysWithNoCompletionOffer;
+ (bool)mpVerboseCMCLogging;

- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)arg1;
- (bool)mpIsPersonalizedOffer;

@end
