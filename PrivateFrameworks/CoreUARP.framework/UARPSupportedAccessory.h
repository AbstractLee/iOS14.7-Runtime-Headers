/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPSupportedAccessory : NSObject {
    NSString * _appleModelNumber;
    NSMutableSet * _bsdNotificationsInternal;
    unsigned long long  _capabilities;
    UARPAccessoryHardwareID * _hardwareID;
    NSString * _mobileAssetAppleModelNumber;
    NSString * _productGroup;
    NSString * _productNumber;
    NSMutableSet * _supplementalAssetsInternal;
    bool  _supportsHeySiriCompact;
    bool  _supportsPowerLogging;
    bool  _supportsVoiceAssist;
}

@property (readonly) NSString *appleModelNumber;
@property (readonly) NSSet *bsdNotifications;
@property (readonly) unsigned long long capabilities;
@property (readonly) UARPAccessoryHardwareID *hardwareID;
@property (readonly) NSString *identifier;
@property (readonly) bool isMFi;
@property (readonly) NSString *mobileAssetAppleModelNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSSet *supplementalAssets;
@property bool supportsHeySiriCompact;
@property bool supportsPowerLogging;
@property bool supportsVoiceAssist;

+ (id)findByAppleModelNumber:(id)arg1;
+ (id)findByHardwareID:(id)arg1;
+ (id)supportedAccessories;
+ (id)supportedAccessoriesByTransport:(long long)arg1;

- (void).cxx_destruct;
- (void)addBSDNotificationName:(id)arg1;
- (void)addSupplementalAssetName:(id)arg1;
- (id)appleModelNumber;
- (id)bsdNotifications;
- (unsigned long long)capabilities;
- (id)description;
- (id)hardwareID;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBluetoothDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHDSDictionary:(id)arg1;
- (id)initWithHIDDictionary:(id)arg1;
- (id)initWithHardwareID:(id)arg1 appleModelNumber:(id)arg2 capabilities:(unsigned long long)arg3;
- (id)initWithHardwareID:(id)arg1 capabilities:(unsigned long long)arg2;
- (id)initWithHardwareID:(id)arg1 productGroup:(id)arg2 productNumber:(id)arg3 capabilities:(unsigned long long)arg4;
- (id)initWithUSBPDDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMFi;
- (id)mobileAssetAppleModelNumber;
- (id)productGroup;
- (id)productNumber;
- (void)setSupplementalMobileAssetAppleModelNumber:(id)arg1;
- (void)setSupportsHeySiriCompact:(bool)arg1;
- (void)setSupportsPowerLogging:(bool)arg1;
- (void)setSupportsVoiceAssist:(bool)arg1;
- (id)supplementalAssets;
- (bool)supportsHeySiriCompact;
- (bool)supportsPowerLogging;
- (bool)supportsVoiceAssist;

@end