/* Generated by RuntimeBrowser.
 */

@protocol CSVoiceTriggerDelegate <NSObject>

@required

- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1 deviceId:(NSString *)arg2;

@optional

- (void)keywordDetectorDidDetectKeyword;
- (void)raiseToSpeakDetected:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectKeyword:(void *)arg1 deviceId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1 deviceId:(NSString *)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidRejected:(NSDictionary *)arg1;
- (void)voiceTriggerGotSuperVector:(NSData *)arg1;

@end
