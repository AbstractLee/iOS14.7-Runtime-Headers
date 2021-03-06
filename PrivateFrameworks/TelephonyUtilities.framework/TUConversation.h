/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversation : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipants;
    bool  _audioEnabled;
    NSString * _avcSessionIdentifier;
    long long  _avcSessionToken;
    TUContactsDataProvider * _contactsDataProvider;
    TUConversationReport * _conversationReport;
    NSURL * _debugLink;
    NSUUID * _groupUUID;
    bool  _hasJoined;
    TUHandle * _initiator;
    TUConversationMember * _localMember;
    bool  _locallyCreated;
    long long  _maxVideoDecodesAllowed;
    NSString * _messagesGroupName;
    NSUUID * _messagesGroupUUID;
    NSSet * _participantHandles;
    NSSet * _remoteMembers;
    NSObject * _reportingHierarchySubToken;
    NSObject * _reportingHierarchyToken;
    long long  _state;
    bool  _videoEnabled;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, copy) NSSet *activeRemoteParticipants;
@property (getter=isAudioEnabled, nonatomic) bool audioEnabled;
@property (nonatomic, copy) NSString *avcSessionIdentifier;
@property (nonatomic) long long avcSessionToken;
@property (nonatomic, readonly) TUContactsDataProvider *contactsDataProvider;
@property (nonatomic, copy) TUConversationReport *conversationReport;
@property (nonatomic, copy) NSURL *debugLink;
@property (nonatomic, readonly) NSUUID *groupUUID;
@property (getter=hasJoined, nonatomic) bool hasJoined;
@property (nonatomic, retain) TUHandle *initiator;
@property (nonatomic, retain) TUConversationMember *localMember;
@property (getter=isLocallyCreated, nonatomic) bool locallyCreated;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (nonatomic, copy) NSString *messagesGroupName;
@property (nonatomic, retain) NSUUID *messagesGroupUUID;
@property (nonatomic, copy) NSSet *participantHandles;
@property (nonatomic, copy) NSSet *remoteMembers;
@property (nonatomic, retain) NSObject *reportingHierarchySubToken;
@property (nonatomic, retain) NSObject *reportingHierarchyToken;
@property (nonatomic) long long state;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

+ (id)emptyConversationWithGroupUUID:(id)arg1;
+ (id)numberFormatter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activeRemoteParticipants;
- (id)avcSessionIdentifier;
- (long long)avcSessionToken;
- (id)bundleIdentifier;
- (id)contactNamesByHandleWithContactsDataSource:(id)arg1;
- (id)contactsDataProvider;
- (id)conversationReport;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugLink;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)groupUUID;
- (id)handles;
- (bool)hasJoined;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;
- (id)initiator;
- (id)initiatorLocalizedName;
- (bool)isAudioEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversation:(id)arg1;
- (bool)isLocallyCreated;
- (bool)isRepresentedByRemoteMembers:(id)arg1;
- (bool)isVideoEnabled;
- (id)localMember;
- (long long)maxVideoDecodesAllowed;
- (id)messagesGroupName;
- (id)messagesGroupUUID;
- (id)participantHandles;
- (id)remoteMembers;
- (id)reportingHierarchySubToken;
- (id)reportingHierarchyToken;
- (void)setActiveRemoteParticipants:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAvcSessionIdentifier:(id)arg1;
- (void)setAvcSessionToken:(long long)arg1;
- (void)setConversationReport:(id)arg1;
- (void)setDebugLink:(id)arg1;
- (void)setHasJoined:(bool)arg1;
- (void)setInitiator:(id)arg1;
- (void)setLocalMember:(id)arg1;
- (void)setLocallyCreated:(bool)arg1;
- (void)setMaxVideoDecodesAllowed:(long long)arg1;
- (void)setMessagesGroupName:(id)arg1;
- (void)setMessagesGroupUUID:(id)arg1;
- (void)setParticipantHandles:(id)arg1;
- (void)setRemoteMembers:(id)arg1;
- (void)setReportingHierarchySubToken:(id)arg1;
- (void)setReportingHierarchyToken:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (long long)state;

@end
