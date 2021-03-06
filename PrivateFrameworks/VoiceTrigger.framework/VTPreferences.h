/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPreferences : NSObject

+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (id)sharedPreferences;

- (id)_VTSATBasePath;
- (id)_VTSATCachePath;
- (id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)arg1;
- (bool)_gibraltarHasBuiltInMic;
- (bool)_isLocalVoiceTriggerAvailable;
- (bool)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2;
- (id)_languageCode;
- (id)_localeIdentifier;
- (void)_setVoiceTriggerEnabled:(bool)arg1 sender:(id)arg2;
- (void)_setVoiceTriggerEnabled:(bool)arg1 sender:(id)arg2 endpointId:(id)arg3;
- (bool)_storeModeEnabled;
- (bool)_voiceTriggerEnabled;
- (bool)_voiceTriggerEnabledForEndpointId:(id)arg1;
- (id)audioInjectionFilePath;
- (bool)corespeechDaemonEnabled;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1;
- (void)discardAllSATEnrollment;
- (void)discardSATEnrollmentForLanguageCode:(id)arg1;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1;
- (bool)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (bool)gestureSubscriptionEnabled;
- (id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1;
- (id)getSATEnrollmentPath;
- (bool)hasExplicitlySetVoiceTriggerEnabled;
- (bool)hasVoiceProfileIniCloudForLanguageCode:(id)arg1;
- (id)init;
- (bool)isMultiPhraseVTEnabled;
- (bool)isRemoteVoiceTriggerAvailable;
- (bool)isSATAvailable;
- (bool)isSATEnrolledForLanguageCode:(id)arg1;
- (bool)isSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (bool)isVoiceTriggerAvailable;
- (id)localizedTriggerPhrase;
- (id)localizedTriggerPhraseForLanguageCode:(id)arg1;
- (void)markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (bool)onetimeRemoteAssetQueryRanSuccessfully;
- (bool)phraseSpotterEnabled;
- (bool)secondPassAudioLoggingEnabled;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (void)setOnetimeRemoteAssetQueryRanSuccessfully:(bool)arg1;
- (void)setPhraseSpotterEnabled:(bool)arg1;
- (void)setPhraseSpotterEnabled:(bool)arg1 sender:(id)arg2;
- (void)setSecondPassAudioLoggingEnabled:(bool)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1 sender:(id)arg2;
- (void)setVoiceTriggerEnabled:(bool)arg1 sender:(id)arg2 endpointId:(id)arg3;
- (void)setVoiceTriggerEnabledWhenChargerConnected:(bool)arg1;
- (void)setVoiceTriggerEnabledWhenChargerDisconnected:(bool)arg1;
- (void)synchronize;
- (bool)useSiriActivationSPIForiOS;
- (bool)useSiriActivationSPIForwatchOS;
- (bool)voiceTriggerEnabled;
- (bool)voiceTriggerEnabledForEndpointId:(id)arg1;
- (bool)voiceTriggerEnabledWhenChargerConnected;
- (bool)voiceTriggerEnabledWhenChargerDisconnected;
- (bool)voiceTriggerInCoreSpeech;

@end
