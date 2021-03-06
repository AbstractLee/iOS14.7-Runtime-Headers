/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabase : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDAssertionObserver, HDContentProtectionObserver, HDDatabaseCorruptionEventStoreDelegate, HDDatabaseJournalDelegate, HDDatabaseMigrationTransactionDelegate, HDDiagnosticObject, HDHFDataStoreDelegate, HDHealthDaemonReadyObserver, HDHealthDatabase, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider> {
    NSMutableSet * _activeDatabases;
    NSConditionLock * _activeDatabasesLock;
    HDAssertionManager * _assertionManager;
    NSOperationQueue * _asynchronousOperationQueue;
    HDDatabaseJournal * _cloudSyncJournal;
    HDContentProtectionManager * _contentProtectionManager;
    long long  _corruptedMigrationAttemptsCount;
    NSMutableDictionary * _databaseJournalMergeObserverSetByType;
    NSDictionary * _databasePoolForType;
    bool  _didRunPostMigrationUpdates;
    NSMutableDictionary * _extendedTransactions;
    NSMutableArray * _firstUnlockBlocks;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasFaultedForCorruptionError;
    bool  _hasFlushedProtectedData;
    _Atomic bool  _hasPendingSecondaryJournalMerge;
    HDHFDataStore * _hfDataStore;
    _Atomic bool  _invalidated;
    bool  _isObservingContentProtection;
    HDDatabaseJournal * _journal;
    NSObject<OS_dispatch_group> * _journalGroup;
    NSObject<OS_dispatch_queue> * _journalQueue;
    NSHashTable * _migratedDatabases;
    long long  _observedContentProtectionState;
    double  _offsetTimeInterval;
    unsigned long long  _pendingJournalMerges;
    HDProfile * _profile;
    NSString * _profileDirectoryPath;
    NSDate * _protectedDataFlushDeadlineDate;
    NSObject<OS_dispatch_source> * _protectedDataFlushDeadlineTimer;
    double  _protectedDataFlushInterval;
    HKObserverSet * _protectedDataObservers;
    NSObject<OS_dispatch_queue> * _protectedDataQueue;
    long long  _protectedDataState;
    NSLock * _schemaMigrationLock;
    NSObject<OS_dispatch_queue> * _secondaryJournalMergeQueue;
    NSObject<OS_dispatch_queue> * _serialAsynchronousQueue;
    bool  _shouldNotifyFirstUnlockObservers;
    NSString * _threadLocalIgnoreTransactionContextKey;
    NSString * _threadLocalTransactionContextKey;
    NSString * _threadLocalTransactionKey;
    id /* block */  _unitTest_didWaitForJournalMergeHandler;
    NSLock * _writeLock;
}

@property (nonatomic, retain) NSMutableSet *activeDatabases;
@property (nonatomic, retain) NSConditionLock *activeDatabasesLock;
@property (nonatomic, retain) HDAssertionManager *assertionManager;
@property (nonatomic, retain) NSOperationQueue *asynchronousOperationQueue;
@property (nonatomic, readonly) HDDatabaseJournal *cloudSyncJournal;
@property (nonatomic, readonly) HDContentProtectionManager *contentProtectionManager;
@property (nonatomic) long long corruptedMigrationAttemptsCount;
@property (getter=isDataProtectedByFirstUnlockAvailable, nonatomic, readonly) bool dataProtectedByFirstUnlockAvailable;
@property (nonatomic, retain) NSDictionary *databasePoolForType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRunPostMigrationUpdates;
@property (nonatomic, retain) NSMutableDictionary *extendedTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) bool invalidated;
@property (nonatomic, readonly) HDDatabaseJournal *journal;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *journalGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *journalQueue;
@property (nonatomic, retain) NSHashTable *migratedDatabases;
@property (nonatomic) double offsetTimeInterval;
@property (nonatomic) unsigned long long pendingJournalMerges;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, readonly, copy) NSString *profileDirectoryPath;
@property (getter=isProtectedDataAvailable, nonatomic, readonly) bool protectedDataAvailable;
@property (nonatomic) double protectedDataFlushInterval;
@property (nonatomic, retain) NSLock *schemaMigrationLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *secondaryJournalMergeQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *threadLocalIgnoreTransactionContextKey;
@property (nonatomic, readonly, copy) NSString *threadLocalTransactionContextKey;
@property (nonatomic, readonly, copy) NSString *threadLocalTransactionKey;
@property (nonatomic, copy) id /* block */ unitTest_didWaitForJournalMergeHandler;

+ (id)allCurrentAndFutureEntityClasses;
+ (id)allEntityClassesWithBehavior:(id)arg1;
+ (id)createDatabaseConnectionWithURL:(id)arg1;
+ (long long)unitTest_createOrMigrateDatabaseAtDirectoryURL:(id)arg1 schemaProviders:(id)arg2 behavior:(id)arg3 error:(id*)arg4;
+ (bool)unitTest_prepareUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)HFDSizeInBytes;
- (void)HFDataStore:(id)arg1 detectedCorruptionOfType:(long long)arg2 code:(int)arg3 error:(id)arg4 shouldPromptUser:(bool)arg5 initialRebuildState:(long long)arg6 updatedRebuildState:(long long)arg7;
- (long long)HFDataStore:(id)arg1 integerForKey:(id)arg2;
- (void)HFDataStore:(id)arg1 setInteger:(long long)arg2 forKey:(id)arg3;
- (void)HFDataStoreDetectedOutOfSpace:(id)arg1;
- (void)HFDataStoreDidPerformRebuild:(id)arg1 didDecompressArchivedHFD:(bool)arg2 didOpenArchivedHFD:(bool)arg3 didOpenMovedAsideHFD:(bool)arg4 recoveryAnalytics:(id)arg5 duration:(double)arg6;
- (id)_URLForWALForDatabaseAtURL:(id)arg1;
- (bool)_allowProtectedDataAccessWhileLockedWithTransaction:(id)arg1;
- (bool)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)_canAttachProtectedDatabaseForTransaction:(id)arg1 error:(id*)arg2;
- (void)_checkInDatabase:(id)arg1 type:(long long)arg2 flushImmediately:(bool)arg3;
- (id)_checkOutDatabaseForTransaction:(id)arg1 databaseType:(long long)arg2 error:(id*)arg3;
- (id)_cloudSyncJournalDirectoryPath;
- (id)_createAndVerifyDatabaseConnectionWithType:(long long)arg1 error:(id*)arg2;
- (id)_createDatabaseConnectionWithType:(long long)arg1;
- (id)_currentDatabaseJournal;
- (long long)_fileSizeForURL:(id)arg1 error:(id*)arg2;
- (bool)_isDatabaseValidWithError:(id*)arg1;
- (id)_journalDirectoryPath;
- (id)_journalForType:(long long)arg1;
- (bool)_journalQueue_performJournalMergeAndCleanup;
- (void)_mergeSecondaryJournals;
- (bool)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id*)arg2;
- (id)_newCorruptionEventStore;
- (id)_newDataStoreForPath:(id)arg1;
- (id)_newDatabaseConnectionWithType:(long long)arg1 error:(id*)arg2;
- (long long)_performMigrationWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3;
- (void)_performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)_protectedDataQueue_beginObservingContentProtection;
- (void)_protectedDataQueue_cancelProtectedDataFlushTimer;
- (void)_protectedDataQueue_flushProtectedDataIfNecessary;
- (bool)_protectedDataQueue_isProtectedDataFlushDeadlinePassed;
- (void)_protectedDataQueue_mergeJournalAsynchronously;
- (long long)_protectedDataState;
- (void)_reportDatabaseMigrationStatus:(long long)arg1 component:(long long)arg2 schemaVersion:(long long)arg3 error:(id)arg4;
- (void)_reportMigrationResultIfNecessaryForStatus:(long long)arg1 database:(id)arg2 protectedDatabase:(bool)arg3 error:(id)arg4;
- (void)_reportSQLiteCorruption:(id)arg1 forDatabase:(long long)arg2 shouldPrompt:(bool)arg3;
- (bool)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_threadLocalTransaction;
- (id)_threadLocalTransactionContext;
- (void)_triggerHFDRebuildMaintenanceTask;
- (bool)_waitForMergesWithCurrentJournal:(id)arg1 error:(id*)arg2;
- (bool)accessHighFrequencyDataStoreWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)activeDatabases;
- (id)activeDatabasesLock;
- (id)activeTransactionForCurrentThreadForHFDataStore:(id)arg1;
- (void)addDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 queue:(id)arg3;
- (bool)addJournalEntries:(id)arg1 error:(id*)arg2;
- (bool)addJournalEntry:(id)arg1 error:(id*)arg2;
- (void)addProtectedDataObserver:(id)arg1;
- (void)addProtectedDataObserver:(id)arg1 queue:(id)arg2;
- (id)allEntityClassesWithProtectionClass:(long long)arg1;
- (id)assertionManager;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)asynchronousOperationQueue;
- (id)beginExtendedTransactionWithContext:(id)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4;
- (void)beginObservingContentProtection;
- (void)checkInDatabase:(id)arg1 type:(long long)arg2;
- (id)checkOutProtectedDatabase:(id)arg1 highFrequencyDataStore:(id*)arg2 error:(id*)arg3;
- (id)checkOutUnprotectedDatabase:(id)arg1 error:(id*)arg2;
- (id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id*)arg3;
- (id)cloudSyncJournal;
- (id)contentProtectionManager;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (long long)corruptedMigrationAttemptsCount;
- (void)daemonReady:(id)arg1;
- (void)databaseJournalMergeDidComplete:(id)arg1;
- (void)databasePool:(id)arg1 didFlushDatabases:(id)arg2;
- (id)databasePoolForDatabaseType:(long long)arg1;
- (id)databasePoolForType;
- (id)databaseSizeInBytesExcludingHFD;
- (id)databaseSizeInBytesForTypeUnprotected:(bool)arg1 WAL:(bool)arg2;
- (long long)databaseTypeForDatabasePool:(id)arg1;
- (id)databaseURLForType:(long long)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)didMigrateHFDataStore:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3 success:(bool)arg4 error:(id)arg5;
- (bool)didRunPostMigrationUpdates;
- (bool)discardHighFrequencyDataStoreWithError:(id*)arg1;
- (id)extendedDatabaseTransactionForIdentifier:(id)arg1;
- (id)extendedTransactions;
- (void)finalizeExtendedTransactionForIdentifier:(id)arg1;
- (id)highFrequencyDataStoreURL;
- (id)initWithProfile:(id)arg1;
- (void)invalidateAndWait;
- (bool)invalidated;
- (bool)isDataProtectedByFirstUnlockAvailable;
- (bool)isProtectedDataAvailable;
- (id)journal;
- (unsigned long long)journalChapterCountForType:(long long)arg1;
- (id)journalGroup;
- (id)journalQueue;
- (id)mainDatabaseURL;
- (bool)migrateDataForHFDataStore:(id)arg1 from:(const struct DataStore { struct BlockAccessFile { struct TransactionalFile { struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_1_3_1; struct __shared_weak_count {} *x_1_3_2; } x_1_2_1; struct WriteAheadLog { struct mutex { struct _opaque_pthread_mutex_t { long long x_1_5_1; BOOL x_1_5_2[56]; } x_1_4_1; } x_2_3_1; struct condition_variable { struct _opaque_pthread_cond_t { long long x_1_5_1; BOOL x_1_5_2[40]; } x_2_4_1; } x_2_3_2; struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_3_4_1; struct __shared_weak_count {} *x_3_4_2; } x_2_3_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_8_1; unsigned long long x_1_8_2; unsigned long long x_1_8_3; } x_1_7_1; struct __short { BOOL x_2_8_1[23]; struct { unsigned char x_2_9_1; } x_2_8_2; } x_1_7_2; struct __raw { unsigned long long x_3_8_1[3]; } x_1_7_3; } x_1_6_1; } x_1_5_1; } x_4_4_1; } x_2_3_4; struct shared_ptr<health::VirtualFile> { struct VirtualFile {} *x_5_4_1; struct __shared_weak_count {} *x_5_4_2; } x_2_3_5; } x_1_2_2; } x_1_1_1; } x1; }*)arg2 to:(struct DataStore { struct BlockAccessFile { struct TransactionalFile { struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_1_3_1; struct __shared_weak_count {} *x_1_3_2; } x_1_2_1; struct WriteAheadLog { struct mutex { struct _opaque_pthread_mutex_t { long long x_1_5_1; BOOL x_1_5_2[56]; } x_1_4_1; } x_2_3_1; struct condition_variable { struct _opaque_pthread_cond_t { long long x_1_5_1; BOOL x_1_5_2[40]; } x_2_4_1; } x_2_3_2; struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x_3_4_1; struct __shared_weak_count {} *x_3_4_2; } x_2_3_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_8_1; unsigned long long x_1_8_2; unsigned long long x_1_8_3; } x_1_7_1; struct __short { BOOL x_2_8_1[23]; struct { unsigned char x_2_9_1; } x_2_8_2; } x_1_7_2; struct __raw { unsigned long long x_3_8_1[3]; } x_1_7_3; } x_1_6_1; } x_1_5_1; } x_4_4_1; } x_2_3_4; struct shared_ptr<health::VirtualFile> { struct VirtualFile {} *x_5_4_1; struct __shared_weak_count {} *x_5_4_2; } x_2_3_5; } x_1_2_2; } x_1_1_1; } x1; }*)arg3 recoveryAnalytics:(id)arg4 error:(id*)arg5;
- (id)migratedDatabases;
- (void)migrationTransaction:(id)arg1 didCreateDatabasesWithIdentifier:(id)arg2;
- (void)migrationTransaction:(id)arg1 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(id)arg2 protectedIdentifier:(id)arg3;
- (id)newDatabaseForDatabasePool:(id)arg1 error:(id*)arg2;
- (void)obliterateWithReason:(id)arg1 preserveCopy:(bool)arg2;
- (double)offsetTimeInterval;
- (unsigned long long)pendingJournalMerges;
- (void)performAsynchronously:(id /* block */)arg1;
- (void)performAsynchronouslySerial:(id /* block */)arg1;
- (bool)performHighPriorityTransactionsWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)performTransactionWithContext:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(id /* block */)arg1;
- (void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(id /* block */)arg2;
- (bool)performWithJournalType:(long long)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)performWithTransactionContext:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)profile;
- (id)profileDirectoryPath;
- (id)progressForJournalMergeWithType:(long long)arg1;
- (double)protectedDataFlushInterval;
- (id)protectedDatabaseURL;
- (void)removeDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2;
- (void)removeProtectedDataObserver:(id)arg1;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (void)requestRebuildTransactionForHFDataStore:(id)arg1;
- (id)schemaMigrationLock;
- (id)secondaryJournalMergeQueue;
- (void)setActiveDatabases:(id)arg1;
- (void)setActiveDatabasesLock:(id)arg1;
- (void)setAssertionManager:(id)arg1;
- (void)setAsynchronousOperationQueue:(id)arg1;
- (void)setCorruptedMigrationAttemptsCount:(long long)arg1;
- (void)setDatabasePoolForType:(id)arg1;
- (void)setDidRunPostMigrationUpdates:(bool)arg1;
- (void)setExtendedTransactions:(id)arg1;
- (void)setJournalGroup:(id)arg1;
- (void)setJournalQueue:(id)arg1;
- (void)setMigratedDatabases:(id)arg1;
- (void)setOffsetTimeInterval:(double)arg1;
- (void)setPendingJournalMerges:(unsigned long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setProtectedDataFlushInterval:(double)arg1;
- (void)setSchemaMigrationLock:(id)arg1;
- (void)setSecondaryJournalMergeQueue:(id)arg1;
- (void)setUnitTest_didWaitForJournalMergeHandler:(id /* block */)arg1;
- (id)store:(id)arg1 objectForKey:(id)arg2;
- (void)store:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 shouldPerformTransaction:(bool)arg2 timeout:(double)arg3 error:(id*)arg4;
- (id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id*)arg3;
- (id)threadLocalIgnoreTransactionContextKey;
- (id)threadLocalTransactionContextKey;
- (id)threadLocalTransactionKey;
- (id)unitTest_currentTransaction;
- (id /* block */)unitTest_didWaitForJournalMergeHandler;
- (void)unitTest_setContentProtectionStateAndWait:(long long)arg1;

@end
