/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLBag : NSObject {
    NSArray * _GUIDURLRegexPatterns;
    NSSet * _GUIDURLSchemes;
    NSDictionary * _bagValues;
    NSMutableDictionary * _convertedActionsCache;
    NSDate * _expirationDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serverCorrelationKey;
    NSString * _serverEnvironment;
}

@property (nonatomic, retain) NSArray *GUIDURLRegexPatterns;
@property (nonatomic, retain) NSSet *GUIDURLSchemes;
@property (nonatomic, readonly) NSDictionary *_propertyListRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *allValues;
@property (nonatomic, copy) NSDictionary *bagValues;
@property (nonatomic, readonly) bool canPostKeybagSyncData;
@property (nonatomic, retain) NSMutableDictionary *convertedActionsCache;
@property (nonatomic, readonly) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (setter=_setExpirationDate:, nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ICURLBagRadioConfiguration *radioConfiguration;
@property (nonatomic, readonly, copy) NSString *serverCorrelationKey;
@property (nonatomic, readonly, copy) NSString *serverEnvironment;
@property (nonatomic, readonly, copy) NSString *storefrontHeaderSuffix;

- (void).cxx_destruct;
- (id)GUIDURLRegexPatterns;
- (id)GUIDURLSchemes;
- (id)_initWithDictionary:(id)arg1 expirationDate:(id)arg2 serverCorrelationKey:(id)arg3 serverEnvironment:(id)arg4;
- (id)_initWithPropertyListRepresentation:(id)arg1;
- (id)_propertyListRepresentation;
- (void)_setExpirationDate:(id)arg1;
- (bool)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2;
- (void)_validateGUIDURLConfigIfNeeded;
- (id)allValues;
- (id)bagValues;
- (bool)boolValueForBagKey:(id)arg1;
- (bool)canPostKeybagSyncData;
- (id)convertedActionsCache;
- (id)enhancedAudioConfiguration;
- (id)expirationDate;
- (bool)hasValueForBagKey:(id)arg1;
- (long long)int64ValueForBagKey:(id)arg1;
- (bool)isExpired;
- (id)libraryDAAPConfiguration;
- (id)mescalConfigurationForRequest:(id)arg1;
- (id)mescalConfigurationForRequestURL:(id)arg1;
- (id)mescalConfigurationForResponse:(id)arg1;
- (id)mescalConfigurationForResponseURL:(id)arg1;
- (id)queue;
- (id)radioConfiguration;
- (id)serverCorrelationKey;
- (id)serverEnvironment;
- (void)setBagValues:(id)arg1;
- (void)setConvertedActionsCache:(id)arg1;
- (void)setGUIDURLRegexPatterns:(id)arg1;
- (void)setGUIDURLSchemes:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)shouldAppendDeviceGUIDForURL:(id)arg1;
- (bool)shouldAppendMachineDataHeadersForURL:(id)arg1;
- (id)storefrontHeaderSuffix;
- (id)urlForBagKey:(id)arg1;
- (id)valueForBagKey:(id)arg1;

@end
