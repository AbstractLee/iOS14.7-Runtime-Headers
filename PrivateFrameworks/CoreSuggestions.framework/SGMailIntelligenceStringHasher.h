/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMailIntelligenceStringHasher : NSObject {
    NSData * _rotatingSalt;
    NSData * _salt;
}

@property (nonatomic, retain) NSData *rotatingSalt;

+ (long long)hashedString:(id)arg1 salts:(id)arg2;
+ (id)rotatingSaltForDate:(id)arg1;
+ (long long)truncatedSHA256:(id)arg1 salts:(id)arg2;

- (void).cxx_destruct;
- (long long)hashedString:(id)arg1;
- (id)init;
- (id)rotatingSalt;
- (void)setRotatingSalt:(id)arg1;
- (long long)truncatedSHA256:(id)arg1;

@end
