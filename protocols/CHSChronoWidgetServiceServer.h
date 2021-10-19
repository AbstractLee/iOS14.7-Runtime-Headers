/* Generated by RuntimeBrowser.
 */

@protocol CHSChronoWidgetServiceServer <NSObject>

@required

- (CHSURLSessionToken *)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)addClient:(id <CHSChronoWidgetServiceClient>)arg1;
- (oneway void)applicationWithBundleIdentifierEnteredForeground:(NSString *)arg1;
- (oneway void)expireLocationGracePeriods;
- (oneway void)flushPowerlog;
- (void)reloadTimelineForAvocadoWithIdentifier:(NSString *)arg1 inBundleWithIdentifier:(NSString *)arg2 error:(id*)arg3;
- (void)removeClient:(id <CHSChronoWidgetServiceClient>)arg1;
- (oneway void)setConfiguredWidgetContainerDescriptors:(NSArray *)arg1;
- (oneway void)setMetricsSpecification:(CHSWidgetMetricsSpecification *)arg1;
- (NSData *)widgetEnvironmentDataForBundleIdentifier:(NSString *)arg1;

@end