/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface _PK_OneShotXPC : NSObject {
    NSXPCConnection * _pkBrowseConnection;
}

@property (nonatomic, retain) NSXPCConnection *pkBrowseConnection;

+ (void)doOneShot:(id /* block */)arg1;
+ (bool)withTimeout:(int)arg1 doSyncronousOneShot:(id /* block */)arg2;

- (void)dealloc;
- (id)init;
- (id)pkBrowseConnection;
- (void)setPkBrowseConnection:(id)arg1;

@end