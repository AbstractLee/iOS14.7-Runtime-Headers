/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVSpanMatchResult : NSObject <NSCopying> {
    CKVocabularyItemMetadata * _metadata;
    NSSet * _spanMatches;
}

@property (nonatomic, readonly) CKVocabularyItemMetadata *metadata;
@property (nonatomic, readonly) NSSet *spanMatches;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMetadata:(id)arg1 spanMatches:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpanMatchResult:(id)arg1;
- (id)metadata;
- (id)spanMatches;

@end