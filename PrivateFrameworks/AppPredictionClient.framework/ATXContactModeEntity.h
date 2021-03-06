/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol> {
    NSString * _bundleId;
    NSString * _cnContactId;
    NSString * _displayName;
    bool  _isIncomingInteraction;
    bool  _isOutgoingInteraction;
    NSString * _rawIdentifier;
    NSString * _stableContactIdentifier;
    ATXModeEntityScore * scoreMetadata;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *cnContactId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isIncomingInteraction;
@property (nonatomic) bool isOutgoingInteraction;
@property (nonatomic, retain) NSString *rawIdentifier;
@property (nonatomic, retain) ATXModeEntityScore *scoreMetadata;
@property (nonatomic, retain) NSString *stableContactIdentifier;
@property (readonly) Class superclass;

+ (id)cnContactIdsOfFavoriteContacts;
+ (bool)supportsSecureCoding;
+ (id)vipContactEmailAddresses;

- (void).cxx_destruct;
- (id)bundleId;
- (id)cnContactId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 rawIdentifier:(id)arg2 cnContactId:(id)arg3 stableContactIdentifier:(id)arg4 isOutgoingInteraction:(bool)arg5 isIncomingInteraction:(bool)arg6 bundleId:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isFavoriteContactGivenCNContactIdsOfFavorites:(id)arg1;
- (bool)isIncomingInteraction;
- (bool)isOutgoingInteraction;
- (bool)isVIPContactGivenVIPs:(id)arg1;
- (id)rawIdentifier;
- (id)scoreMetadata;
- (void)setBundleId:(id)arg1;
- (void)setCnContactId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIsIncomingInteraction:(bool)arg1;
- (void)setIsOutgoingInteraction:(bool)arg1;
- (void)setRawIdentifier:(id)arg1;
- (void)setScoreMetadata:(id)arg1;
- (void)setStableContactIdentifier:(id)arg1;
- (id)stableContactIdentifier;

@end
