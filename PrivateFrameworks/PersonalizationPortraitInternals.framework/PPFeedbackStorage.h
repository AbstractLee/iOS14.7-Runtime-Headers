/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPFeedbackStorage : NSObject {
    PPLocalConnectionsStore * _connectionsStoreOverride;
    PPLocalContactStore * _contactStoreOverride;
    PPSQLDatabase * _db;
    PPLocalEventStore * _eventStoreOverride;
    PPLocalLocationStore * _locationStoreOverride;
    PPLocalNamedEntityStore * _namedEntityStoreOverride;
    PPLocalQuickTypeBroker * _quickTypeBrokerOverride;
    PPLocalTopicStore * _topicStoreOverride;
}

+ (void)logFeedback:(id)arg1 domain:(unsigned char)arg2 domainStatus:(unsigned char)arg3;
+ (id)storeTypeDescription:(unsigned char)arg1;
+ (void)transformOfferedItemsIntoEngagementAndRejection:(id)arg1;

- (void).cxx_destruct;
- (bool)_clearPendingFeedbackRecordsWithStoreType:(unsigned char)arg1 limit:(int)arg2;
- (void)_emitMaxRowCountEvent;
- (id)connectionsStore;
- (id)contactStore;
- (bool)deleteAllPendingFeedbackOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (id)eventStore;
- (void)filterPendingFeedbackItems:(id)arg1 storeType:(unsigned char)arg2 timestamp:(double)arg3 clientIdentifier:(id)arg4 clientBundleId:(id)arg5 mappingId:(id)arg6;
- (id)init;
- (id)initWithDatabase:(id)arg1 namedEntityStoreOverride:(id)arg2 topicStoreOverride:(id)arg3 locationStoreOverride:(id)arg4 quickTypeBrokerOverride:(id)arg5 contactStoreOverride:(id)arg6 eventStoreOverride:(id)arg7 connectionsStoreOverride:(id)arg8;
- (id)locationStore;
- (id)mappedTopicsPendingFeedbackWithShouldContinueBlock:(id /* block */)arg1;
- (id)namedEntityStore;
- (id)pendingTopicFeedback;
- (bool)processPendingFeedbackWithStoreType:(unsigned char)arg1 shouldContinueBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)quickTypeBroker;
- (bool)storePendingFeedback:(id)arg1 storeType:(unsigned char)arg2 error:(id*)arg3;
- (id)topicStore;

@end
