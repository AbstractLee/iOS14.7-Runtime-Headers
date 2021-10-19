/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinHealth.framework/FinHealth
 */

@interface FHTransactionDetails : NSObject {
    FHMerchantDetails * _merchantCategory;
    unsigned long long * _suggestionCategory;
    NSDecimalNumber * _transactionAmount;
    NSDate * _transactionDate;
    NSString * _transactionIdentifier;
}

@property (nonatomic) FHMerchantDetails *merchantCategory;
@property (nonatomic) unsigned long long*suggestionCategory;
@property (nonatomic, copy) NSDecimalNumber *transactionAmount;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic, copy) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (id)merchantCategory;
- (void)setMerchantCategory:(id)arg1;
- (void)setSuggestionCategory:(unsigned long long*)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (unsigned long long*)suggestionCategory;
- (id)transactionAmount;
- (id)transactionDate;
- (id)transactionIdentifier;

@end