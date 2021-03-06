/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDeviceContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contextCollectorSource;
    AFPeerInfo * _deviceInfo;
    long long  _dirtyFlags;
    bool  _fromLocalDevice;
    NSUUID * _identifier;
    long long  _privacyClass;
    NSMutableDictionary * _serializedBackingStore;
}

@property (nonatomic, readonly) AFClockAlarmSnapshot *alarmSnapshot;
@property (nonatomic, readonly) AFDeviceContextMetadata *alarmSnapshotMetadata;
@property (nonatomic, readonly) NSString *contextCollectorSource;
@property (nonatomic, readonly) AFPeerInfo *deviceInfo;
@property (nonatomic, readonly) bool fromLocalDevice;
@property (nonatomic, readonly) long long heardVoiceTrigger;
@property (nonatomic, readonly) AFDeviceContextMetadata *heardVoiceTriggerMetadata;
@property (nonatomic, readonly) AFHomeAnnouncementSnapshot *homeAnnouncementSnapshot;
@property (nonatomic, readonly) AFDeviceContextMetadata *homeAnnouncementSnapshotMetadata;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) AFDeviceContextMetadata *locationMetadata;
@property (nonatomic, readonly) AFLocationSnapshot *locationSnapshot;
@property (nonatomic, readonly) AFDeviceContextMetadata *multiUserStateMetadata;
@property (nonatomic, readonly) AFMultiUserStateSnapshot *multiUserStateSnapshot;
@property (nonatomic, readonly) NSData *myriadAdvertisementContext;
@property (nonatomic, readonly) AFDeviceContextMetadata *playbackStateMetadata;
@property (nonatomic, readonly) AFMediaPlaybackStateSnapshot *playbackStateSnapshot;
@property (nonatomic, readonly) long long privacyClass;
@property (nonatomic, readonly) AFClockTimerSnapshot *timerSnapshot;
@property (nonatomic, readonly) AFDeviceContextMetadata *timerSnapshotMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_safeContextDictionary;
- (id)_serializedBackingStoreIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2;
- (bool)af_didHearVoiceTrigger;
- (id)af_serviceDeviceContextForKeys:(id)arg1;
- (id)af_serviceDeviceContextForKeys:(id)arg1 excludeContextExpiredBefore:(id)arg2 proximity:(long long)arg3;
- (id)alarmSnapshot;
- (id)alarmSnapshotMetadata;
- (id)allContextKeys;
- (id)contextCollectorSource;
- (id)contextMetadataForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceContextForDeviceContextKeys:(id)arg1 excludingMandatoryKeys:(id)arg2;
- (id)deviceInfo;
- (void)encodeWithCoder:(id)arg1;
- (bool)fromLocalDevice;
- (unsigned long long)hash;
- (long long)heardVoiceTrigger;
- (id)heardVoiceTriggerMetadata;
- (id)homeAnnouncementSnapshot;
- (id)homeAnnouncementSnapshotMetadata;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1 fromLocalDevice:(bool)arg2 contextCollectorSource:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)locationMetadata;
- (id)locationSnapshot;
- (id)multiUserStateMetadata;
- (id)multiUserStateSnapshot;
- (id)myriadAdvertisementContext;
- (id)partialSerializedBackingStoreIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2;
- (id)partiallyUpdatedContextForDeviceContextKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 fromDeviceContext:(id)arg3;
- (id)playbackStateMetadata;
- (id)playbackStateSnapshot;
- (long long)privacyClass;
- (id)serializedBackingStore;
- (id)serializedContextForKey:(id)arg1;
- (id)timerSnapshot;
- (id)timerSnapshotMetadata;

@end
