/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSession : HDSyncSession {
    NSSet * _excludedSyncStores;
    HDCloudSyncSequenceRecord * _sequenceRecord;
}

@property (nonatomic, retain) HDCloudSyncSequenceRecord *sequenceRecord;

- (void).cxx_destruct;
- (id)excludedSyncStores;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)sequenceRecord;
- (void)setExcludedSyncStores:(id)arg1;
- (void)setSequenceRecord:(id)arg1;

@end