/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.MagazineFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving, TSPluginDelegate> {
    void _persistedConfigurationDate;
    void accessQueue;
    void categoriesModule;
    void delegate;
    void featureAvailability;
    void feedService;
    void feedServiceConfigFetcher;
    void lastRefreshDate;
    void myMagazinesModule;
    void paywallFactory;
    void paywallModule;
    void pluginManager;
    void readingHistory;
    void readingList;
    void subscriptionService;
}

- (void).cxx_destruct;
- (id)init;
- (void)plugin:(id)arg1 didResizePluginModel:(id)arg2;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (void)readingList:(id)arg1 didAddArticles:(id)arg2 removeArticles:(id)arg3 eventInitiationLevel:(long long)arg4;

@end