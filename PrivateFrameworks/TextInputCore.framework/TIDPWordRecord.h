/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIDPWordRecord : NSObject {
    NSString * _word;
    NSNumber * _wordPosition;
}

@property (nonatomic, copy) NSString *word;
@property (nonatomic, retain) NSNumber *wordPosition;

+ (id)word:(id)arg1 atPosition:(id)arg2;

- (void).cxx_destruct;
- (void)setWord:(id)arg1;
- (void)setWordPosition:(id)arg1;
- (id)toDPWordRecord;
- (id)word;
- (id)wordPosition;

@end