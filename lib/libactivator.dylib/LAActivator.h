/* Generated by RuntimeBrowser
   Image: /usr/lib/libactivator.dylib
 */

@interface LAActivator : NSObject {
    NSMutableDictionary * _cachedListenerDescriptions;
    NSMutableDictionary * _cachedListenerGroups;
    NSMutableDictionary * _cachedListenerTitles;
    NSDictionary * _cachedPreferences;
    NSArray * _configurableListenerNames;
    int  _preference_notify_token;
    unsigned long long  _preferences_change_count;
}

@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; } _objectStatistics;
@property (getter=isAlive, nonatomic, readonly) bool alive;
@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic, readonly) NSArray *availableEventModes;
@property (nonatomic, readonly) NSArray *availableEventNames;
@property (nonatomic, readonly) NSArray *availableListenerNames;
@property (nonatomic, readonly) NSArray *availableProfileNames;
@property (nonatomic, readonly) NSString *currentEventMode;
@property (nonatomic, readonly) NSString *currentEventModeUnderneathLockScreen;
@property (nonatomic, copy) NSString *currentProfileName;
@property (getter=isDangerousToSendEvents, nonatomic, readonly) bool dangerousToSendEvents;
@property (nonatomic, readonly) NSString *displayIdentifierForCurrentApplication;
@property (getter=isRunningInsideSpringBoard, nonatomic, readonly) bool runningInsideSpringBoard;
@property (nonatomic, readonly) bool supportsUnlockingDeviceToSendEvents;
@property (nonatomic, readonly) int version;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (id)_allPreferences;
- (void)_backgroundCacheListenerData;
- (void)_cacheAllListenerMetadata;
- (id)_cachedAndSortedListeners;
- (bool)_canImportPreferences;
- (bool)_canOpenURL:(id)arg1;
- (id)_configurableListenerNames;
- (id)_configurationForEvent:(id)arg1;
- (id)_configurationForListener:(id)arg1;
- (bool)_debuggingLocalizationBundle;
- (void)_deleteExportedPreferences;
- (id)_directImageForListenerName:(id)arg1 usingTemplate:(id)arg2;
- (void)_dropMetadataCache;
- (void)_exportPreferences;
- (id)_getObjectForPreference:(id)arg1;
- (void)_importPreferences;
- (id)_incompatibleListenersForEventWithName:(id)arg1 andModes:(id)arg2;
- (id)_localizedTitleForListenerName:(id)arg1;
- (void)_makeRoomInIconCacheForListenerName:(id)arg1;
- (struct { unsigned int x1; unsigned int x2; })_objectStatistics;
- (void)_resetPreferences;
- (bool)_setObject:(id)arg1 forPreference:(id)arg2;
- (void)_updateEvent:(id)arg1 withConfiguration:(id)arg2;
- (void)_updateListener:(id)arg1 withConfiguration:(id)arg2;
- (void)addListenerAssignment:(id)arg1 toEvent:(id)arg2;
- (bool)applicationWithDisplayIdentifierIsBlacklisted:(id)arg1;
- (void)assignEvent:(id)arg1 toListenerWithName:(id)arg2;
- (void)assignEvent:(id)arg1 toListenersWithNames:(id)arg2;
- (id)assignedListenerNameForEvent:(id)arg1;
- (id)assignedListenerNamesForEvent:(id)arg1;
- (id)assignmentWarningForEventWithName:(id)arg1;
- (int)authorizationStatus;
- (id)availableEventModes;
- (id)availableEventNames;
- (id)availableListenerNames;
- (id)availableProfileNames;
- (id)cachedSmallIconForListenerName:(id)arg1;
- (id)compatibleEventModesForListenerWithName:(id)arg1;
- (id)compatibleModesForEventWithName:(id)arg1;
- (Class)configurationViewControllerClassForEventWithName:(id)arg1;
- (Class)configurationViewControllerClassForListenerWithName:(id)arg1;
- (id)configurationViewControllerClassNameForEventWithName:(id)arg1 bundle:(id*)arg2;
- (id)configurationViewControllerClassNameForListenerWithName:(id)arg1 bundle:(id*)arg2;
- (id)configurationViewControllerForEventWithName:(id)arg1;
- (id)configurationViewControllerForListenerWithName:(id)arg1;
- (id)currentEventMode;
- (id)currentEventModeUnderneathLockScreen;
- (id)currentProfileName;
- (id)description;
- (id)displayIdentifierForCurrentApplication;
- (bool)eventWithName:(id)arg1 isCompatibleWithMode:(id)arg2;
- (bool)eventWithNameIsHidden:(id)arg1;
- (bool)eventWithNameRequiresAssignment:(id)arg1;
- (bool)eventWithNameSupportsConfiguration:(id)arg1;
- (bool)eventWithNameSupportsRemoval:(id)arg1;
- (bool)eventWithNameSupportsUnlockingDeviceToSend:(id)arg1;
- (id)eventsAssignedToListenerWithName:(id)arg1;
- (id)exclusiveAssignmentGroupsForListenerName:(id)arg1;
- (bool)hasEventWithName:(id)arg1;
- (bool)hasListenerWithName:(id)arg1;
- (bool)hasSeenListenerWithName:(id)arg1;
- (id)iconForListenerName:(id)arg1;
- (id)imageForListenerName:(id)arg1 usingTemplate:(id)arg2;
- (id)infoDictionaryValueOfKey:(id)arg1 forListenerWithName:(id)arg2;
- (bool)isAlive;
- (bool)isDangerousToSendEvents;
- (bool)isRunningInsideSpringBoard;
- (id)listenerForEvent:(id)arg1;
- (id)listenerForName:(id)arg1;
- (bool)listenerNamesAreMutuallyCompatible:(id)arg1;
- (bool)listenerWithName:(id)arg1 isCompatibleWithEventName:(id)arg2;
- (bool)listenerWithName:(id)arg1 isCompatibleWithMode:(id)arg2;
- (bool)listenerWithNameNeedsPoweredDisplay:(id)arg1;
- (bool)listenerWithNameRequiresAssignment:(id)arg1;
- (bool)listenerWithNameSupportsConfiguration:(id)arg1;
- (bool)listenerWithNameSupportsRemoval:(id)arg1;
- (id)localizedDescriptionForEventMode:(id)arg1;
- (id)localizedDescriptionForEventName:(id)arg1;
- (id)localizedDescriptionForListenerName:(id)arg1;
- (id)localizedGroupForEventName:(id)arg1;
- (id)localizedGroupForListenerName:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)localizedTitleForEventMode:(id)arg1;
- (id)localizedTitleForEventName:(id)arg1;
- (id)localizedTitleForListenerName:(id)arg1;
- (id)localizedTitleForListenerNames:(id)arg1;
- (void)registerEventDataSource:(id)arg1 forEventName:(id)arg2;
- (void)registerListener:(id)arg1 forName:(id)arg2;
- (void)removeEventWithName:(id)arg1;
- (void)removeListenerAssignment:(id)arg1 fromEvent:(id)arg2;
- (void)requestAuthorization;
- (void)requestRemovalForListenerWithName:(id)arg1;
- (void)sendAbortEvent:(id)arg1 toListenerWithName:(id)arg2;
- (void)sendAbortEvent:(id)arg1 toListenersWithNames:(id)arg2;
- (void)sendAbortToListener:(id)arg1;
- (void)sendDeactivateEventToListeners:(id)arg1;
- (void)sendEvent:(id)arg1 toListenerWithName:(id)arg2;
- (void)sendEvent:(id)arg1 toListenerWithName:(id)arg2 completion:(id /* block */)arg3;
- (void)sendEvent:(id)arg1 toListenersWithNames:(id)arg2;
- (void)sendEvent:(id)arg1 toListenersWithNames:(id)arg2 completion:(id /* block */)arg3;
- (void)sendEventToListener:(id)arg1;
- (void)sendPreviewEventToListenerWithName:(id)arg1;
- (void)setApplicationWithDisplayIdentifier:(id)arg1 isBlacklisted:(bool)arg2;
- (void)setCurrentProfileName:(id)arg1;
- (id)smallIconForListenerName:(id)arg1;
- (bool)supportsUnlockingDeviceToSendEvents;
- (void)unassignEvent:(id)arg1;
- (id)uncachedSmallIconForListenerName:(id)arg1;
- (void)unregisterEventDataSourceWithEventName:(id)arg1;
- (void)unregisterListenerWithName:(id)arg1;
- (int)version;

@end
