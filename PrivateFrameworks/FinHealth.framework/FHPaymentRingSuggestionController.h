/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FinHealth.framework/FinHealth
 */

@interface FHPaymentRingSuggestionController : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)clientConnection;
- (id)connection;
- (void)generatePaymentRingSuggestion:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;

@end
