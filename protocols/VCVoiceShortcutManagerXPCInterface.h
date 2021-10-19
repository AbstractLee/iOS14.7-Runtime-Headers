/* Generated by RuntimeBrowser.
 */

@protocol VCVoiceShortcutManagerXPCInterface <NSObject>

@required

- (void)addDefaultShortcutsIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)addVoiceShortcut:(void *)arg1 phrase:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: INShortcut *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VCVoiceShortcut *, NSError *, void*
- (void)checkTriggerStateWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)checkTriggerStateWithKeyPath:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)createShortcutWithRecordData:(void *)arg1 name:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)createSleepWorkflow:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: VCSleepWorkflow *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VCConfiguredSleepWorkflow *, NSError *, void*
- (void)deleteSleepWorkflowWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteTriggerWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteVoiceShortcutWithIdentifier:(void *)arg1 name:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissPresentedContentWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)drawGlyphs:(void *)arg1 withBackgroundColorValues:(void *)arg2 intoContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSArray *, NSArray *, WFRemoteImageDrawingContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enqueueDialogRequest:(void *)arg1 runningContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WFDialogRequest *, WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDialogResponse *, NSError *, void*
- (void)fireTriggerWithIdentifier:(void *)arg1 force:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)generateSingleUseTokenForWorkflowIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getAccessibilityWorkflowWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFAccessibilityWorkflow *, NSError *, void*
- (void)getAccessibilityWorkflowsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getConfiguredTriggerDescriptionsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getFirstUnsortedWorkflowWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFWorkflowDescriptor *, NSNumber *, NSError *, void*
- (void)getNumberOfVoiceShortcutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getResultsForWorkflowQuery:(void *)arg1 resultClassName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: WFWorkflowQuery *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, WFCoreDataResultState *, NSError *, void*
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(void *)arg1 hostBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getShortcutSuggestionsForAllAppsWithLimit:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSiriPodcastsDatabaseURLWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSecurityScopedURLWrapper *, NSError *, void*
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSleepActionSuggestionsForAllAppsWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(void *)arg1 shouldFilterBySleep:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getValueForDescriptor:(void *)arg1 resultClassName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WFDatabaseObjectDescriptor *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)getVoiceShortcutWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VCVoiceShortcut *, NSError *, void*
- (void)getVoiceShortcutWithPhrase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VCVoiceShortcut *, NSError *, void*
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getVoiceShortcutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)hasRunEventsInTheLast5DaysWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)obliterateShortcuts:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)refreshTriggerWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestDataMigration:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetDefaultShortcutFlagsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resumeWorkflowFromContext:(void *)arg1 presentationMode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WFWorkflowRunningContext *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, void*
- (void)runWorkflowWithRequest:(void *)arg1 context:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WFWorkflowRunRequest *, WFWorkflowRunningContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, void*
- (void)sendAceCommandDictionary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setInteger:(void *)arg1 forKey:(void *)arg2 inDomain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;
- (void)showSingleStepCompletionForWebClip:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFSpringBoardWebClipMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopRunningWorkflowWithRunningContext:(WFWorkflowRunningContext *)arg1;
- (void)unregisterTriggerWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateVoiceShortcutWithIdentifier:(void *)arg1 phrase:(void *)arg2 shortcut:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, INShortcut *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VCVoiceShortcut *, NSError *, void*

@end