/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSetupFlowConfiguration : NSObject {
    NSArray * _bundlesIDsToConsent;
    bool  _canShowSupportedAppsButton;
    VSIdentityProvider * _identityProvider;
    VSAppDescription * _msoAppDescription;
    NSString * _preferredAppID;
    NSString * _providerAccountUsername;
    bool  _shouldOfferAuthenticationFlow;
    bool  _shouldOfferSTBAuthenticationFlow;
    bool  _shouldOfferSoleAuthenticationFlow;
    bool  _shouldSkipSetupEntirely;
    NSArray * _supportedApps;
    NSDictionary * _vouchersByBundleID;
}

@property (nonatomic, copy) NSArray *bundlesIDsToConsent;
@property (nonatomic) bool canShowSupportedAppsButton;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, retain) VSAppDescription *msoAppDescription;
@property (nonatomic, copy) NSString *preferredAppID;
@property (nonatomic, copy) NSString *providerAccountUsername;
@property (nonatomic) bool shouldOfferAuthenticationFlow;
@property (nonatomic) bool shouldOfferSTBAuthenticationFlow;
@property (nonatomic) bool shouldOfferSoleAuthenticationFlow;
@property (nonatomic) bool shouldSkipSetupEntirely;
@property (nonatomic, retain) NSArray *supportedApps;
@property (nonatomic, copy) NSDictionary *vouchersByBundleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundlesIDsToConsent;
- (bool)canShowSupportedAppsButton;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identityProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)msoAppDescription;
- (id)preferredAppID;
- (id)providerAccountUsername;
- (void)setBundlesIDsToConsent:(id)arg1;
- (void)setCanShowSupportedAppsButton:(bool)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setMsoAppDescription:(id)arg1;
- (void)setPreferredAppID:(id)arg1;
- (void)setProviderAccountUsername:(id)arg1;
- (void)setShouldOfferAuthenticationFlow:(bool)arg1;
- (void)setShouldOfferSTBAuthenticationFlow:(bool)arg1;
- (void)setShouldOfferSoleAuthenticationFlow:(bool)arg1;
- (void)setShouldSkipSetupEntirely:(bool)arg1;
- (void)setSupportedApps:(id)arg1;
- (void)setVouchersByBundleID:(id)arg1;
- (bool)shouldOfferAuthenticationFlow;
- (bool)shouldOfferSTBAuthenticationFlow;
- (bool)shouldOfferSoleAuthenticationFlow;
- (bool)shouldSkipSetupEntirely;
- (id)supportedApps;
- (id)vouchersByBundleID;

@end
