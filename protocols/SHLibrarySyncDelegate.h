/* Generated by RuntimeBrowser.
 */

@protocol SHLibrarySyncDelegate <NSObject>

@optional

- (void)library:(id <SHLibrarySync>)arg1 didChangeGroups:(NSArray *)arg2;
- (void)library:(id <SHLibrarySync>)arg1 didChangeTracks:(NSArray *)arg2;
- (void)library:(void *)arg1 didCompleteSyncWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: <SHLibrarySync> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)library:(id <SHLibrarySync>)arg1 didDeleteItemsWithIdentifier:(NSArray *)arg2;
- (void)library:(id <SHLibrarySync>)arg1 didProduceError:(NSError *)arg2 withFailedItemIdentifiers:(NSArray *)arg3;
- (void)libraryWillBeginSync:(id <SHLibrarySync>)arg1;

@end
