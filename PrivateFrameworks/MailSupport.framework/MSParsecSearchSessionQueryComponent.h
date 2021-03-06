/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSParsecSearchSessionQueryComponent : NSObject {
    bool  _cannedSuggestion;
    NSString * _category;
    NSString * _queryString;
    NSString * _scope;
}

@property (nonatomic, readonly) bool cannedSuggestion;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic, readonly) NSString *scope;

+ (id)_structuredQueryForComponents:(id)arg1 hasCurrentMailboxScope:(bool)arg2 languages:(id)arg3;
+ (id)freeTextQueryComponentWithString:(id)arg1;
+ (id)suggestionAtomQueryComponentWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(bool)arg4;

- (void).cxx_destruct;
- (id)_structuredQueryComponentWithLanguages:(id)arg1;
- (bool)cannedSuggestion;
- (id)category;
- (id)initWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(bool)arg4;
- (id)queryString;
- (id)scope;

@end
