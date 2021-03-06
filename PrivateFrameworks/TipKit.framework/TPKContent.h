/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
 */

@interface TPKContent : NSObject <NSCopying, NSSecureCoding> {
    long long  _customizationID;
    NSArray * _dismissalEvents;
    NSString * _identifier;
    long long  _version;
}

@property (nonatomic, readonly) long long customizationID;
@property (nonatomic, readonly) NSArray *dismissalEvents;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customizationID;
- (id)debugDescription;
- (id)description;
- (id)dismissalEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)version;

@end
