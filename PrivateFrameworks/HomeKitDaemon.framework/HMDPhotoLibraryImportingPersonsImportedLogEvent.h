/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {
    long long  _numberOfNamedImportedPersons;
    long long  _totalNumberOfImportedPersons;
}

@property (readonly) long long numberOfNamedImportedPersons;
@property (readonly) long long totalNumberOfImportedPersons;

- (id)eventName;
- (id)initWithTotalNumberOfImportedPersons:(long long)arg1 numberOfNamedImportedPersons:(long long)arg2;
- (long long)numberOfNamedImportedPersons;
- (id)serializedEvent;
- (long long)totalNumberOfImportedPersons;

@end
