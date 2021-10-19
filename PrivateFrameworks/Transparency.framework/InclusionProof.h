/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface InclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyManagedDataStore *dataStore;
@property (nonatomic) bool hasMapEntry;
@property (nonatomic) bool hasPerApplicationTreeEntry;
@property (nonatomic) bool hasTopLevelTreeEntry;
@property (nonatomic, retain) MapEntry *mapEntry;
@property (readonly) NSDictionary *metadata;
@property (nonatomic, retain) LogEntry *perApplicationTreeEntry;
@property (nonatomic, retain) LogEntry *topLevelTreeEntry;
@property (nonatomic, copy) NSData *uriVrfoutput;
@property (retain) KTInclusionProofVerifier *verifier;

+ (id)descriptor;

- (id)dataStore;
- (id)mapLeafWithError:(id*)arg1;
- (id)metadata;
- (void)setDataStore:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 key:(id)arg2;
- (void)setVerifier:(id)arg1;
- (id)verifier;
- (unsigned long long)verifyWithError:(id*)arg1;

@end