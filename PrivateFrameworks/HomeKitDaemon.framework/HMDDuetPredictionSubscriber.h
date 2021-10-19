/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDuetPredictionSubscriber : HMFObject {
    <HMDDuetPredictionSubscriberDataSource> * _dataSource;
    <HMDDuetSuggestionProvider> * _duetPredictionSuggester;
    int  _duetPredictionsChangedNotificationToken;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HMDDuetPredictionSubscriberDataSource> *dataSource;
@property (readonly) <HMDDuetSuggestionProvider> *duetPredictionSuggester;
@property int duetPredictionsChangedNotificationToken;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_fetchPredictionsFromDuetAndUpdateHomes;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)dataSource;
- (void)dealloc;
- (id)duetPredictionSuggester;
- (int)duetPredictionsChangedNotificationToken;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2 duetSuggestionProvider:(id)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDuetPredictionsChangedNotificationToken:(int)arg1;
- (id)workQueue;

@end