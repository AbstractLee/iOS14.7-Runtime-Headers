/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
 */

@interface PCHomeKitIdentifier : NSObject <NSSecureCoding> {
    NSUUID * _accessoryID;
    long long  _assetType;
    NSString * _deviceName;
    NSUUID * _homeID;
}

@property (nonatomic, readonly, copy) NSUUID *accessoryID;
@property (nonatomic) long long assetType;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, readonly, copy) NSUUID *homeID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryID;
- (long long)assetType;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeID;
- (id)initWithAccessoryID:(id)arg1 homeID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAssetType:(long long)arg1;
- (void)setDeviceName:(id)arg1;

@end