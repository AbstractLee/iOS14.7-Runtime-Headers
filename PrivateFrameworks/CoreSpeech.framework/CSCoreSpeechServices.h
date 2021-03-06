/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSCoreSpeechServices : NSObject

+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* block */)arg2;
+ (id)getCoreSpeechServiceConnection;
+ (id)getCoreSpeechXPCConnection;
+ (void)getCurrentVoiceTriggerLocaleWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
+ (long long)getFirstPassRunningMode;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestUpdatedSATAudio;
+ (void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(id /* block */)arg3;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 accessoryRTModelType:(long long)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(id /* block */)arg6;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 accessoryRTModelType:(long long)arg3 endpointId:(id)arg4 downloadedModels:(id)arg5 preinstalledModels:(id)arg6 completion:(id /* block */)arg7;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id /* block */)arg5;

@end
