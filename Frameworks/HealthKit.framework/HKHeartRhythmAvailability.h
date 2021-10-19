/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRhythmAvailability : NSObject {
    HKActiveWatchRemoteFeatureAvailabilityDataSource * _atrialFibrillationDetectionAvailabilityDataSource;
    NSNumber * _atrialFibrillationDetectionRescindedStatusCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    HKWatchAppAvailability * _ecgAppAvailability;
    HKActiveWatchRemoteFeatureAvailabilityDataSource * _electrocardiogramAvailabilityDataSource;
    NSNumber * _electrocardiogramRescindedStatusCache;
    int  _featureAvailabilityConditionsDidUpdateNotificationToken;
    HKHealthStore * _healthStore;
    HKObserverSet * _heartRhythmAvailabilityObservers;
    NSUserDefaults * _heartRhythmUserDefaults;
    HKKeyValueDomain * _keyValueDomain;
    HKMobileCountryCodeManager * _mobileCountryCodeManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _onboardingKeysReadLock;
    NSMutableSet * _onboardingKeysReadSet;
    int  _onboardingStateDidChangeNotificationToken;
    int  _userCharacteristicsDidChangeNotificationToken;
}

@property (nonatomic, retain) HKActiveWatchRemoteFeatureAvailabilityDataSource *atrialFibrillationDetectionAvailabilityDataSource;
@property (getter=isAtrialFibrillationDetectionDisabled, nonatomic, readonly) bool atrialFibrillationDetectionDisabled;
@property (getter=isAtrialFibrillationDetectionOnboardingCompleted, nonatomic, readonly) bool atrialFibrillationDetectionOnboardingCompleted;
@property (nonatomic, readonly) long long atrialFibrillationDetectionRescindedStatus;
@property (nonatomic, retain) HKWatchAppAvailability *ecgAppAvailability;
@property (nonatomic, retain) HKActiveWatchRemoteFeatureAvailabilityDataSource *electrocardiogramAvailabilityDataSource;
@property (nonatomic, readonly) NSDate *electrocardiogramFirstOnboardingCompletedDate;
@property (getter=isElectrocardiogramFirstRecordingCompleted, nonatomic) bool electrocardiogramFirstRecordingCompleted;
@property (getter=isElectrocardiogramOnboardingCompleted, nonatomic, readonly) bool electrocardiogramOnboardingCompleted;
@property (getter=isElectrocardiogramRecordingDisabled, nonatomic, readonly) bool electrocardiogramRecordingDisabled;
@property (nonatomic, readonly) long long electrocardiogramRecordingRescindedStatus;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKObserverSet *heartRhythmAvailabilityObservers;
@property (nonatomic, retain) NSUserDefaults *heartRhythmUserDefaults;
@property (nonatomic, retain) HKKeyValueDomain *keyValueDomain;
@property (nonatomic, retain) HKMobileCountryCodeManager *mobileCountryCodeManager;
@property (nonatomic, retain) NSMutableSet *onboardingKeysReadSet;
@property (nonatomic) int onboardingStateDidChangeNotificationToken;
@property (nonatomic) int userCharacteristicsDidChangeNotificationToken;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_ECG2SupportedCountriesOnDevice;
+ (id)_ECG2SupportedCountriesOnDevice:(id)arg1;
+ (long long)_atrialFibrillationDetectionRescindedStatusWithDataSource:(id)arg1;
+ (unsigned long long)_atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;
+ (id)_availabilityPlistURL;
+ (long long)_electrocardiogramRescindedStatusWithDataSource:(id)arg1;
+ (unsigned long long)_electrocardiogramSupportedStateForDeviceRegion:(id)arg1;
+ (id)_history:(id)arg1 addCurrentOnboardingVersionCompletedIfApplicable:(long long)arg2 countryCode:(id)arg3;
+ (bool)_isAtrialFibrillationDetectionSupportedOnPhone:(id)arg1;
+ (bool)_isECG1SupportedOnCompanionDevice:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (bool)_isECG2SupportedForCountryCode:(id)arg1 andPhoneDevice:(id)arg2;
+ (bool)_isECG2SupportedForCountryCode:(id)arg1 andWatchDevice:(id)arg2;
+ (bool)_isElectrocardiogramSupportedOnCompanionDevice:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (bool)_isElectrocardiogramSupportedOnPhone:(id)arg1;
+ (bool)_isElectrocardiogramSupportedOnPhone:(id)arg1 geolocatedCountryCode:(id)arg2;
+ (id)_onboardingCountryCodeKeyFromCompletedKey:(id)arg1;
+ (id)_onboardingHistoryKeyFromCompletedKey:(id)arg1;
+ (id)_onboardingHistoryWithVersionCompletedKey:(id)arg1 keyValueDomain:(id)arg2;
+ (id)activePairedDevice;
+ (id)atrialFibrillationDetectionNilAdjustedOnboardingCountryCode:(id)arg1 onboardingCompleted:(bool)arg2;
+ (long long)atrialFibrillationDetectionRescindedStatusForOnboardingCountryCode:(id)arg1;
+ (bool)atrialFibrillationDetectionSupportedForDevice:(id)arg1;
+ (unsigned long long)atrialFibrillationDetectionSupportedState;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForActiveWatch;
+ (unsigned long long)atrialFibrillationDetectionSupportedStateForWatch:(id)arg1;
+ (long long)currentAtrialFibrillationDetectionOnboardingVersion;
+ (id)currentDeviceRegionCode;
+ (long long)currentElectrocardiogramOnboardingVersion;
+ (Class)deviceRegionFeatureSupportedStateProviderForCompanionDevice:(id)arg1;
+ (Class)deviceRegionFeatureSupportedStateProviderForCurrentWatchOSDevice;
+ (id)electrocardiogramOnboardingHistoryMaxKnownWithKeyValueDomain:(id)arg1;
+ (bool)electrocardiogramSupportedForDevice:(id)arg1;
+ (unsigned long long)electrocardiogramSupportedState;
+ (unsigned long long)electrocardiogramSupportedStateForActiveWatch;
+ (unsigned long long)electrocardiogramSupportedStateForWatch:(id)arg1;
+ (id)featureAvailabilityUserDefaults;
+ (void)installElectrocardiogramAppOnActiveWatch:(id /* block */)arg1;
+ (bool)isAtrialFibrillationDetectionSettingEnabled;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnActiveWatch;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAllWatches;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnAnyWatch;
+ (bool)isAtrialFibrillationDetectionStateSupportedOrNeedsGeolocationOnWatch:(id)arg1;
+ (bool)isAtrialFibrillationDetectionSupportedOnPairedPhone;
+ (bool)isAtrialFibrillationDetectionSupportedOrNeedsGeolocation;
+ (bool)isAtrialFibrillationSupportedForOnboardingCountryCodeAndWatchOSVersion:(id)arg1;
+ (bool)isCompanionRegionCheckEnabledForActiveWatch;
+ (bool)isCompanionRegionCheckEnabledForDevice:(id)arg1;
+ (bool)isCompanionRegionCheckEnabledOnPairedPhone;
+ (bool)isECG1SupportedOnlyForCountryCode:(id)arg1;
+ (bool)isElectrocardiogramAppDeletableForActiveWatch;
+ (bool)isElectrocardiogramAppInstallableForLocale:(id)arg1;
+ (bool)isElectrocardiogramSupportedOnActiveWatch;
+ (bool)isElectrocardiogramSupportedOnAllWatches;
+ (bool)isElectrocardiogramSupportedOnAnyWatch;
+ (bool)isElectrocardiogramSupportedOnPairedPhone;
+ (bool)isElectrocardiogramSupportedOnPairedPhoneWithGeolocatedCountryCode:(id)arg1;
+ (bool)isElectrocardiogramSupportedOnWatch:(id)arg1;
+ (bool)isHeartRateEnabledInPrivacy;
+ (id)pairedDevices;
+ (bool)shouldInstallWatchApp;

- (void).cxx_destruct;
- (bool)_activePairedDevicesSupportECGAlgorithmVersionTwo:(id)arg1;
- (id)_ecg2AvailabilityWithPhoneDevice:(id)arg1;
- (id)_ecg2AvailabilityWithWatchDevice:(id)arg1;
- (id)_electrocardiogramFirstOnboardingCompletedDate;
- (id)_electrocardiogramOnboardingHistory;
- (id)_electrocardiogramOnboardingHistoryKnown;
- (void)_featureAvailabilityConditionsDidUpdate;
- (long long)_getOnboardingVersionForKey:(id)arg1;
- (bool)_isECG1SupportedForCountryCode:(id)arg1 watchOSVersion:(unsigned int)arg2 isWatchOSSeedBuild:(bool)arg3;
- (bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2;
- (bool)_isOnboardingCompletedForKey:(id)arg1 version:(long long)arg2 useCache:(bool)arg3;
- (void)_localeDidChange;
- (id)_makeOnboardingHistoryWithVersionCompleted:(long long)arg1 versionCompletedKey:(id)arg2 additionalValues:(id)arg3 countryCodeKey:(id)arg4;
- (bool)_meetsMinimumAgeRequirementForAtrialFibrillationDetectionWithCurrentDate:(id)arg1;
- (bool)_meetsMinimumAgeRequirementForElectrocardiogramWithCurrentDate:(id)arg1;
- (bool)_meetsMinimumAgeRequirementWithMinimumRequiredAge:(long long)arg1 currentDate:(id)arg2;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (void)_registerForNotifications;
- (void)_removeFirstOnboardingCompletedDatesForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)_resetElectrocardiogramRescindedStatusCacheWithLock:(bool)arg1;
- (void)_resetIsAtrialFibrillationDetectionRescindedStatusCacheWithLock:(bool)arg1;
- (void)_setAtrialFibrillationDetectionOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 inCountryCode:(id)arg2;
- (void)_setFirstOnboardingCompletedDate:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)_setOnboardingVersionCompleted:(long long)arg1 forKey:(id)arg2 additionalValues:(id)arg3 completion:(id /* block */)arg4;
- (bool)_shouldAdvertiseECG2DirectOnboardingWithWatchDevice:(id)arg1;
- (bool)_shouldAdvertiseECG2UpgradeWithDevice:(id)arg1;
- (bool)_shouldAdvertiseECGDirectOnboardingWithDevice:(id)arg1;
- (bool)_shouldAdvertiseElectrocardiogramUpgradeForDevice:(id)arg1;
- (bool)_shouldAdvertiseWithAdvertiseECGVersions:(id)arg1;
- (void)_triggerFeatureAvailabilityUpdateOnPhoneAndWatchWithDelay:(long long)arg1;
- (void)_unregisterForNotifications;
- (void)_updateOnboardingCompletionForKey:(id)arg1 andVersion:(long long)arg2;
- (bool)activePairedDevicesSupportElectrocardiogramAlgorithmVersion:(long long)arg1;
- (void)addHeartRhythmAvailabilityObserver:(id)arg1;
- (id)atrialFibrillationDetectionAvailabilityDataSource;
- (id)atrialFibrillationDetectionOnboardingCountryCode;
- (long long)atrialFibrillationDetectionRescindedStatus;
- (void)dealloc;
- (id)ecgAppAvailability;
- (void)electrocardiogramAppInstallStateOnActiveWatch:(id /* block */)arg1;
- (id)electrocardiogramAvailabilityDataSource;
- (id)electrocardiogramFirstOnboardingCompletedDate;
- (long long)electrocardiogramOnboardingCompletedVersionNoCache;
- (id)electrocardiogramOnboardingCountryCode;
- (id)electrocardiogramOnboardingHistoryType:(long long)arg1;
- (long long)electrocardiogramRecordingRescindedStatus;
- (int)featureAvailabilityConditionsDidUpdateNotificationToken;
- (id)healthStore;
- (id)heartRhythmAvailabilityObservers;
- (id)heartRhythmUserDefaults;
- (id)initWithHealthStore:(id)arg1;
- (bool)isAtrialFibrillationDetectionDisabled;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocation:(id /* block */)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)arg1;
- (void)isAtrialFibrillationDetectionOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(id /* block */)arg2;
- (bool)isAtrialFibrillationDetectionOnboardingCompleted;
- (bool)isAtrialFibrillationDetectionStateSupportedForOnboardingCountryCode:(id)arg1 onWatch:(id)arg2;
- (bool)isAtrialFibrillationDetectionStateSupportedOnActiveWatchForOnboardingCountryCode:(id)arg1;
- (bool)isAtrialFibrillationDetectionStateSupportedOnAnyWatchForOnboardingCountry:(id)arg1;
- (bool)isElectrocardiogramAppInstallAllowedForWatch:(id)arg1;
- (bool)isElectrocardiogramAvailableForOnboardingCountryCode:(id)arg1;
- (bool)isElectrocardiogramAvailableOnWatch:(id)arg1 countryCode:(id)arg2;
- (bool)isElectrocardiogramFirstRecordingCompleted;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocation:(id /* block */)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForActiveWatch:(id /* block */)arg1;
- (void)isElectrocardiogramOnboardingAvailableInCurrentLocationForWatch:(id)arg1 completion:(id /* block */)arg2;
- (bool)isElectrocardiogramOnboardingCompleted;
- (bool)isElectrocardiogramOnboardingCompletedForAnyOnboardingVersion;
- (bool)isElectrocardiogramOnboardingCompletedNoCache;
- (bool)isElectrocardiogramRecordingDisabled;
- (bool)isHeartAgeGatingEnabledOnActiveWatchWithCurrentDate:(id)arg1;
- (bool)isHeartAgeGatingEnabledOnWatch:(id)arg1 currentDate:(id)arg2;
- (id)keyValueDomain;
- (id)mobileCountryCodeManager;
- (void)notifyHeartRhythmAvailabilityDidUpdate;
- (id)onboardingKeysReadSet;
- (int)onboardingStateDidChangeNotificationToken;
- (void)removeHeartRhythmAvailabilityObserver:(id)arg1;
- (void)resetAtrialFibrillationDetectionOnboarding;
- (void)resetElectrocardiogramOnboarding;
- (void)setAllowInstallingElectrocardiogramWatchApp:(bool)arg1;
- (void)setAtrialFibrillationDetectionAvailabilityDataSource:(id)arg1;
- (void)setAtrialFibrillationDetectionOnboardingCompletedForCountryCode:(id)arg1;
- (void)setEcgAppAvailability:(id)arg1;
- (void)setElectrocardiogramAvailabilityDataSource:(id)arg1;
- (void)setElectrocardiogramFirstOnboardingCompletedDate:(id)arg1;
- (void)setElectrocardiogramFirstRecordingCompleted:(bool)arg1;
- (void)setElectrocardiogramOnboardingCompleted;
- (void)setElectrocardiogramOnboardingCompletedVersion:(long long)arg1 countryCode:(id)arg2;
- (void)setFeatureAvailabilityConditionsDidUpdateNotificationToken:(int)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHeartRhythmAvailabilityObservers:(id)arg1;
- (void)setHeartRhythmUserDefaults:(id)arg1;
- (void)setKeyValueDomain:(id)arg1;
- (void)setMobileCountryCodeManager:(id)arg1;
- (void)setOnboardingKeysReadSet:(id)arg1;
- (void)setOnboardingStateDidChangeNotificationToken:(int)arg1;
- (void)setUserCharacteristicsDidChangeNotificationToken:(int)arg1;
- (bool)shouldAdvertiseAtrialFibrillationDetectionForActiveWatch;
- (bool)shouldAdvertiseAtrialFibrillationDetectionForWatch:(id)arg1;
- (bool)shouldAdvertiseElectrocardiogramForActiveWatch;
- (bool)shouldAdvertiseElectrocardiogramForWatch:(id)arg1;
- (bool)shouldAdvertiseElectrocardiogramUpgradeForActivePhone;
- (bool)shouldAdvertiseElectrocardiogramUpgradeForActiveWatch;
- (void)unitTest_setElectrocardiogramOnboardingCompletedForVersion:(long long)arg1 countryCode:(id)arg2 completion:(id /* block */)arg3;
- (void)updateElectrocardiogramWatchAppInstallIsAllowed;
- (void)updateOnboardingCompletionVersionCache;
- (int)userCharacteristicsDidChangeNotificationToken;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)checkElectrocardiogramAppInstallStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)installElectrocardiogramAppAlertController:(id /* block */)arg1 cancel:(id /* block */)arg2;

@end