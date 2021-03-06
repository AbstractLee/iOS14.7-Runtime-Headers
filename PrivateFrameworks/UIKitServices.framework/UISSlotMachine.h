/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISSlotMachine : NSObject {
    unsigned long long  _authenticationMessageContext;
    NSMutableDictionary * _cachedRemoteContents;
    Class  _contentClass;
    unsigned long long  _options;
    CAContext * _remoteContext;
}

@property (nonatomic, readonly) NSSet *allTags;

- (void).cxx_destruct;
- (id)allTags;
- (id)initWithContentClass:(Class)arg1 authenticationMessageContext:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithContentClass:(Class)arg1 options:(unsigned long long)arg2;
- (id)remoteContentForStyle:(id)arg1 tag:(id)arg2;
- (void)removeRemoteContentForStyle:(id)arg1 tag:(id)arg2;
- (void)removeRemoteContentsForTag:(id)arg1;

@end
