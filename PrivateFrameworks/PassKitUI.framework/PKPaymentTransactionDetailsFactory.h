/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionDetailsFactory : NSObject {
    PKContactResolver * _contactResolver;
    long long  _detailViewStyle;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentWebService * _peerPaymentWebService;
}

- (void).cxx_destruct;
- (id)_transactionFetcherWithTransactionSourceCollection:(id)arg1 transaction:(id)arg2;
- (bool)canShowTransactionHistoryForTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)detailViewControllerForTransaction:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5;
- (id)historyViewControllerForTransaction:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5;
- (void)historyViewControllerForTransaction:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 completion:(id /* block */)arg6;
- (id)initWithContactResolver:(id)arg1 peerPaymentWebService:(id)arg2 paymentServiceDataProvider:(id)arg3 detailViewStyle:(long long)arg4;

@end
