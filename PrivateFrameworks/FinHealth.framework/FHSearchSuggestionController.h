/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinHealth.framework/FinHealth
 */

@interface FHSearchSuggestionController : NSObject {
    NSXPCConnection * _connection;
    <FHSuggestionDelegate> * _delegate;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <FHSuggestionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_sendAllTransactionFeatures:(bool)arg1;
- (void)aggregateFeaturesWithHandler:(id /* block */)arg1;
- (id)clientConnection;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllData:(id /* block */)arg1;
- (void)deleteDataForPassesWithSourceIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteTransactionByTransactionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)featuresWithCompletion:(id /* block */)arg1;
- (void)getSerializedTrialValues:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)reevaluateTransactionFeatures;
- (void)sendAllTransactionFeatures;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)transactionUpdated:(id)arg1 deferFeatureComputation:(bool)arg2 completion:(id /* block */)arg3;
- (void)transactionsRequireSyncing;

@end
