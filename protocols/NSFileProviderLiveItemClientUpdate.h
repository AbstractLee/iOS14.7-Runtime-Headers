/* Generated by RuntimeBrowser.
 */

@protocol NSFileProviderLiveItemClientUpdate

@required

- (void)LIUpdateDeletedItem:(NSString *)arg1 name:(NSString *)arg2 how:(int)arg3 interestedItem:(NSString *)arg4;
- (void)LIUpdateDeletedName:(NSString *)arg1 item:(NSString *)arg2 how:(int)arg3 interestedItem:(NSString *)arg4;
- (void)LIUpdateDone:(NSString *)arg1;
- (void)LIUpdateHistoryResetItem:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)LIUpdateHistoryResetName:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)LIUpdateRenameFrom:(NSString *)arg1 fromName:(NSString *)arg2 fromID:(NSString *)arg3 intoItem:(NSString *)arg4 toName:(NSString *)arg5 overID:(NSString *)arg6;
- (void)LIUpdateUpdatedItem:(NSString *)arg1 name:(NSString *)arg2 interestedItem:(NSString *)arg3;
- (void)LIUpdateUpdatedName:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)LIUpdateVolumeWideDeletedName:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)LIUpdateVolumeWideUpdatedName:(NSString *)arg1 interestedItem:(NSString *)arg2;

@end