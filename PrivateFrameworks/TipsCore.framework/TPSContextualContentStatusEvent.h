/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSContextualContentStatusEvent : TPSContextualEvent {
    NSString * _contentID;
    long long  _statusType;
}

@property (nonatomic, copy) NSString *contentID;
@property (nonatomic) long long statusType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)minObservationCount;
- (void)setContentID:(id)arg1;
- (void)setStatusType:(long long)arg1;
- (long long)statusType;
- (void)updateStatusTypeIfOutOfBound;

@end