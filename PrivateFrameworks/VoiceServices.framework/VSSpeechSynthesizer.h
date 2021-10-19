/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {
    NSUUID * _accessoryID;
    unsigned int  _audioSessionID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _clientBundleIdentifier;
    <VSSpeechSynthesizerDelegate> * _delegate;
    NSMutableDictionary * _durationRequests;
    NSString * _identifier;
    NSString * _language;
    float  _pitch;
    NSObject<OS_dispatch_queue> * _queue;
    float  _rate;
    struct { 
        unsigned int delegateStart : 1; 
        unsigned int delegateFinish : 1; 
        unsigned int delegateFinishWithPhonemesSpoken : 1; 
        unsigned int delegatePause : 1; 
        unsigned int delegateContinue : 1; 
        unsigned int delegateWillSpeak : 1; 
        unsigned int delegateStartWithRequest : 1; 
        unsigned int delegateFinishWithRequest : 1; 
        unsigned int delegateFinishWithPhonemesSpokenWithRequest : 1; 
        unsigned int delegateSuccessWithInstrumentMetrics : 1; 
        unsigned int delegatePauseWithRequest : 1; 
        unsigned int delegateContinueWithRequest : 1; 
        unsigned int delegateWillSpeakWithRequest : 1; 
        unsigned int delegateStreamSynthesisAudioData : 1; 
        unsigned int willUseInput : 1; 
    }  _synthesizerFlags;
    NSString * _voice;
    float  _volume;
    VSSpeechConnection * _xpcConnection;
}

@property (nonatomic, copy) NSUUID *accessoryID;
@property (nonatomic) <VSSpeechSynthesizerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *durationRequests;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic, retain) NSString *voice;
@property (nonatomic) float volume;

+ (id)_getVoiceResourceForLanguage:(id)arg1;
+ (id)characterClassCountForUtterance:(id)arg1 language:(id)arg2;
+ (id)errorWithReason:(id)arg1;
+ (bool)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 completion:(id /* block */)arg3;
+ (bool)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 completion:(id /* block */)arg3;
+ (bool)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 previewType:(long long)arg3 completion:(id /* block */)arg4;
+ (id)sharedInstance;
+ (void)stopPlayingVoicePreview;
+ (id)validateAudioCachingRequest:(id)arg1;
+ (id)validateAudioRequest:(id)arg1;
+ (id)validatePrewarmRequest:(id)arg1;
+ (id)validateRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_continueSpeakingRequest;
- (id)_pauseSpeakingRequestAtNextBoundary:(long long)arg1 synchronously:(bool)arg2;
- (void)_setDelegate:(id)arg1;
- (id)_stopSpeakingPresynthesizedAudioRequest:(id)arg1 synchronously:(bool)arg2;
- (id)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(bool)arg3;
- (id)accessoryID;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableLanguageCodes;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)arg1;
- (id)cachePresynthesizedAudioRequest:(id)arg1;
- (void)cancelAudioRequest:(id)arg1;
- (void)cancelDownloads:(id /* block */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)cleanUnusedAssets:(id /* block */)arg1;
- (void)connection:(id)arg1 invalidatedWithError:(id)arg2;
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(bool)arg3 error:(id)arg4;
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didGenerateAudioChunk:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4;
- (bool)continueSpeakingWithError:(id*)arg1;
- (id)delegate;
- (id)durationRequests;
- (void)endAudioPowerUpdate;
- (double)estimateDurationOfRequest:(id)arg1;
- (void)estimateDurationOfRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)forwardStreamObject:(id)arg1;
- (void)getAutoDownloadedVoiceAssets:(id /* block */)arg1;
- (void)getLocalVoiceAssets:(id /* block */)arg1;
- (void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(id /* block */)arg2;
- (void)getLocalVoiceResources:(id /* block */)arg1;
- (void)getLogToFile:(id /* block */)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(id /* block */)arg5;
- (void)getVoiceInfoForLanguageCode:(id)arg1 name:(id)arg2 footprint:(long long)arg3 gender:(long long)arg4 type:(long long)arg5 reply:(id /* block */)arg6;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initForInputFeedback;
- (id)initWithAccessoryID:(id)arg1;
- (void)invokeDaemon:(id /* block */)arg1;
- (bool)isSpeaking;
- (bool)isSystemSpeaking;
- (void)killDaemon;
- (id)language;
- (float)maximumRate;
- (float)minimumRate;
- (bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(bool)arg2 error:(id*)arg3;
- (float)pitch;
- (void)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 completion:(id /* block */)arg3;
- (void)playVoicePreviewForLanguageCode:(id)arg1 voiceName:(id)arg2 previewType:(long long)arg3 completion:(id /* block */)arg4;
- (id)prewarmIfNeededWithRequest:(id)arg1;
- (bool)queryPhaticCapability:(id)arg1;
- (float)rate;
- (void)setAccessoryID:(id)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDurationRequests:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLogToFile:(bool)arg1;
- (void)setMaintainInactivePersistentConnection:(bool)arg1;
- (void)setMaintainPersistentConnection:(bool)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (id)startSpeakingPresynthesizedAudioRequest:(id)arg1;
- (id)startSpeakingRequest:(id)arg1;
- (id)startSynthesizingRequest:(id)arg1;
- (void)stopPlayingVoicePreview;
- (bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(bool)arg2 error:(id*)arg3;
- (bool)stopSpeakingPresynthesizedAudioSynchronously:(bool)arg1 error:(id*)arg2;
- (void)triggerCellularDownloadedVoiceAssets:(id)arg1;
- (void)useSharedAudioSession:(bool)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (id)voice;
- (float)volume;

@end