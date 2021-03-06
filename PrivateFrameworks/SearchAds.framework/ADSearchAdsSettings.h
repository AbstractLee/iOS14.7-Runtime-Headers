/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADSearchAdsSettings : ADSingleton {
    NSString * _algoID;
    double  _clickExpirationThresholdInSeconds;
    ADClientSettingsResponse * _clientSettings;
    NSURL * _defaultAdTargetingServerURL;
    NSURL * _defaultToroServerURL;
    double  _frequencyCapExpirationInSeconds;
    bool  _isBaseline;
    bool  _isCustomTemplate;
    bool  _isRequestedImage;
    bool  _isRequestedRating;
    bool  _isTest;
    double  _landingClickExpirationThresholdInSeconds;
    double  _landingFrequencyCapExpirationInSeconds;
    double  _landingReverseGeolocationRefreshThresholdInMeters;
    double  _locationGridSpacing;
    unsigned long long  _maxClickCapElements;
    unsigned long long  _maxFrequencyCapElements;
    unsigned long long  _maxLandingClickCapElements;
    unsigned long long  _maxLandingFrequencyCapElements;
    NSString * _requestedIcon;
    double  _requestedLocationAccuracy;
    NSString * _requestedText;
    double  _reverseGeolocationRefreshThresholdInMeters;
    NSString * _templateType;
    NSArray * _userKeyboards;
}

@property (nonatomic, retain) NSString *algoID;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic, retain) ADClientSettingsResponse *clientSettings;
@property (nonatomic, retain) NSURL *defaultAdTargetingServerURL;
@property (nonatomic, retain) NSURL *defaultToroServerURL;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) bool isBaseline;
@property (nonatomic) bool isCustomTemplate;
@property (nonatomic) bool isRequestedImage;
@property (nonatomic) bool isRequestedRating;
@property (nonatomic) bool isTest;
@property (nonatomic) double landingClickExpirationThresholdInSeconds;
@property (nonatomic) double landingFrequencyCapExpirationInSeconds;
@property (nonatomic) double landingReverseGeolocationRefreshThresholdInMeters;
@property (nonatomic) double locationGridSpacing;
@property (nonatomic) unsigned long long maxClickCapElements;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxLandingClickCapElements;
@property (nonatomic) unsigned long long maxLandingFrequencyCapElements;
@property (nonatomic, retain) NSString *requestedIcon;
@property (nonatomic) double requestedLocationAccuracy;
@property (nonatomic, retain) NSString *requestedText;
@property (nonatomic) double reverseGeolocationRefreshThresholdInMeters;
@property (nonatomic, retain) NSString *templateType;
@property (nonatomic, retain) NSArray *userKeyboards;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)algoID;
- (void)applyClientSettings;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (double)clickExpirationThresholdInSeconds;
- (id)clientSettings;
- (double)clientSettingsExpirationDate;
- (id)defaultAdTargetingServerURL;
- (id)defaultToroServerURL;
- (void)expireClientSettings;
- (double)frequencyCapExpirationInSeconds;
- (id)init;
- (bool)isBaseline;
- (bool)isCustomTemplate;
- (bool)isRequestedImage;
- (bool)isRequestedRating;
- (bool)isTest;
- (double)landingClickExpirationThresholdInSeconds;
- (double)landingFrequencyCapExpirationInSeconds;
- (double)landingReverseGeolocationRefreshThresholdInMeters;
- (double)locationGridSpacing;
- (unsigned long long)maxClickCapElements;
- (unsigned long long)maxFrequencyCapElements;
- (unsigned long long)maxLandingClickCapElements;
- (unsigned long long)maxLandingFrequencyCapElements;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)overrideLandingClickExpiration:(double)arg1;
- (void)overrideLandingFrequencyCapExpiration:(double)arg1;
- (void)overrideLandingRevGeoThreshold:(double)arg1;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideMaxLandingClickElements:(unsigned long long)arg1;
- (void)overrideMaxLandingFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideMaxToroClickElements:(unsigned long long)arg1;
- (void)overrideRevGeoThreshold:(double)arg1;
- (void)overrideToroClickExpiration:(double)arg1;
- (void)refresh;
- (void)refreshClientSettings:(id /* block */)arg1;
- (id)requestedIcon;
- (double)requestedLocationAccuracy;
- (id)requestedText;
- (void)restoreClientSettings;
- (double)reverseGeolocationRefreshThresholdInMeters;
- (void)setAlgoID:(id)arg1;
- (void)setClickExpirationThresholdInSeconds:(double)arg1;
- (void)setClientSettings:(id)arg1;
- (void)setDefaultAdTargetingServerURL:(id)arg1;
- (void)setDefaultToroServerURL:(id)arg1;
- (void)setFrequencyCapExpirationInSeconds:(double)arg1;
- (void)setIsBaseline:(bool)arg1;
- (void)setIsCustomTemplate:(bool)arg1;
- (void)setIsRequestedImage:(bool)arg1;
- (void)setIsRequestedRating:(bool)arg1;
- (void)setIsTest:(bool)arg1;
- (void)setLandingClickExpirationThresholdInSeconds:(double)arg1;
- (void)setLandingFrequencyCapExpirationInSeconds:(double)arg1;
- (void)setLandingReverseGeolocationRefreshThresholdInMeters:(double)arg1;
- (void)setLocationGridSpacing:(double)arg1;
- (void)setMaxClickCapElements:(unsigned long long)arg1;
- (void)setMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)setMaxLandingClickCapElements:(unsigned long long)arg1;
- (void)setMaxLandingFrequencyCapElements:(unsigned long long)arg1;
- (void)setRequestedIcon:(id)arg1;
- (void)setRequestedLocationAccuracy:(double)arg1;
- (void)setRequestedText:(id)arg1;
- (void)setReverseGeolocationRefreshThresholdInMeters:(double)arg1;
- (void)setTemplateType:(id)arg1;
- (void)setUserKeyboards:(id)arg1;
- (id)templateType;
- (id)userKeyboards;

@end
