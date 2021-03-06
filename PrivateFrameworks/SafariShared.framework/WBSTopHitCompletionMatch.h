/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    bool  _shouldPreload;
}

- (id)initWithBookmarkAndHistoryCompletionMatch:(struct Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch {} *x1; }*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 shouldPreload:(bool)arg4;
- (bool)isTopHit;
- (id)parsecDomainIdentifier;
- (bool)shouldPreload;

@end
