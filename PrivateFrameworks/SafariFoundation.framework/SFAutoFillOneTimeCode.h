/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFAutoFillOneTimeCode : NSObject {
    NSString * _GUID;
    NSString * _detectedCode;
    NSString * _displayCode;
    NSString * _domain;
    NSString * _embeddedDomain;
    NSString * _handle;
    NSString * _machineReadableCode;
    long long  _source;
    NSDate * _timestamp;
    NSString * _user;
}

@property (nonatomic, readonly, copy) NSString *GUID;
@property (nonatomic, readonly, copy) NSURL *_domainBoundEmbeddedURL;
@property (nonatomic, readonly, copy) NSURL *_domainBoundTopLevelURL;
@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *detectedCode;
@property (nonatomic, readonly, copy) NSString *displayCode;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *embeddedDomain;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly, copy) NSString *machineReadableCode;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSString *user;

- (void).cxx_destruct;
- (id)GUID;
- (id)_domainBoundEmbeddedURL;
- (id)_domainBoundTopLevelURL;
- (long long)_matchURL:(id)arg1 withBoundDomainURL:(id)arg2;
- (id)_secureURLForDomain:(id)arg1;
- (id)_stringForSource:(long long)arg1;
- (id)code;
- (id)description;
- (id)detectedCode;
- (id)displayCode;
- (id)domain;
- (id)embeddedDomain;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithIMCoreDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedSubtitleForContext:(long long)arg1;
- (id)localizedTitleForContext:(long long)arg1;
- (id)machineReadableCode;
- (long long)matchBoundDomainsWithFrameURLs:(id)arg1;
- (long long)matchDomainWithURL:(id)arg1;
- (long long)source;
- (id)timestamp;
- (id)user;

@end
