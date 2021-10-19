/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKContactlessPaymentSessionManagerTransactionContext : NSObject {
    unsigned long long  _action;
    bool  _authenticationRequested;
    NSArray * _displayablePassItems;
    NPKPaymentBarcode * _paymentBarcode;
    NSString * _paymentMethodDescription;
    PKPaymentTransaction * _paymentTransaction;
    NSString * _transactionDescription;
    PKPass * _transactionPass;
    unsigned long long  _transactionStatus;
    unsigned long long  _transactionType;
    PKPass * _valueAddedServicePass;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) bool authenticationRequested;
@property (nonatomic, retain) NSArray *displayablePassItems;
@property (nonatomic, retain) NPKPaymentBarcode *paymentBarcode;
@property (nonatomic, retain) NSString *paymentMethodDescription;
@property (nonatomic, retain) PKPaymentTransaction *paymentTransaction;
@property (nonatomic, retain) NSString *transactionDescription;
@property (nonatomic, retain) PKPass *transactionPass;
@property (nonatomic) unsigned long long transactionStatus;
@property (nonatomic) unsigned long long transactionType;
@property (nonatomic, retain) PKPass *valueAddedServicePass;

+ (id)_NPKTransactionContextActionDescriptionForNPKTransactionContextAction:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)action;
- (bool)authenticationRequested;
- (id)description;
- (id)displayablePassItems;
- (void)forceToTransitTypeTransactionWithTransactionStatus:(unsigned long long)arg1;
- (id)init;
- (id)paymentBarcode;
- (id)paymentMethodDescription;
- (id)paymentTransaction;
- (void)setAction:(unsigned long long)arg1;
- (void)setAuthenticationRequested:(bool)arg1;
- (void)setDisplayablePassItems:(id)arg1;
- (void)setPaymentBarcode:(id)arg1;
- (void)setPaymentMethodDescription:(id)arg1;
- (void)setPaymentTransaction:(id)arg1;
- (void)setTransactionDescription:(id)arg1;
- (void)setTransactionPass:(id)arg1;
- (void)setTransactionStatus:(unsigned long long)arg1;
- (void)setTransactionType:(unsigned long long)arg1;
- (void)setValueAddedServicePass:(id)arg1;
- (id)transactionDescription;
- (id)transactionPass;
- (unsigned long long)transactionStatus;
- (unsigned long long)transactionType;
- (void)updateWithConcreteTransactions:(id)arg1 ephemeralTransaction:(id)arg2 updatedPassTransitItems:(id)arg3 paymentApplication:(id)arg4;
- (id)valueAddedServicePass;

@end