/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeechController : NSObject <CSAudioAlertProvidingDelegate, CSAudioConverterDelegate, CSAudioDecoderDelegate, CSAudioSessionControllerDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSContinuousVoiceTriggerDelegate, CSSmartSiriVolumeControllerDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate, CSSpeechManagerDelegate, CSVoiceTriggerAssetHandlerDelegate, CSXPCClientDelegate, SSRSpeakerRecognitionControllerDelegate> {
    unsigned long long  _activeChannel;
    <CSAudioAlertProviding> * _alertProvider;
    CSAsset * _asset;
    NSObject<OS_dispatch_queue> * _audibleFeedbackQueue;
    CSAudioConverter * _audioConverter;
    CSAudioDeviceInfo * _audioDeviceInfo;
    CSPlainAudioFileWriter * _audioFileWriter;
    <CSAudioMeterProviding> * _audioMeterProvider;
    <CSAudioMetricProviding> * _audioMetricProvider;
    CSAudioRecordContext * _audioRecordContext;
    double  _audioSessionActivationDelay;
    CSAudioStream * _audioStream;
    NSString * _bundleIdFromDictation;
    float  _cachedAvgPower;
    float  _cachedPeakPower;
    bool  _canPerformDelayedStop;
    NSObject<OS_dispatch_queue> * _contextResetQueue;
    CSContinuousVoiceTrigger * _continuousVoiceTrigger;
    CSAudioZeroCounter * _continuousZeroCounter;
    unsigned long long  _decoderProcessedSampleCountForTV;
    NSMutableDictionary * _decodersForTV;
    <CSSpeechControllerDelegate> * _delegate;
    bool  _deviceRoleIsStereo;
    bool  _didDeliverFirstSpeechPacket;
    bool  _didDeliverLastBuffer;
    CSAudioSampleRateConverter * _downsampler;
    NSUUID * _endpointId;
    NSMutableDictionary * _endpointerLatencyContext;
    CSEndpointerProxy * _endpointerProxy;
    bool  _isAlarmPlaying;
    bool  _isAudioSessionActivated;
    bool  _isMediaPlaying;
    bool  _isNarrowBand;
    bool  _isOpus;
    bool  _isRemoteVADAvailableStream;
    bool  _isSiriClientListening;
    bool  _isSoundPlaying;
    bool  _isTimerPlaying;
    CSLanguageDetector * _languageDetector;
    <CSLanguageDetectorDelegate> * _languageDetectorDelegate;
    NSDictionary * _lastRTSTriggerInfo;
    NSDictionary * _lastVoiceTriggerInfo;
    NSString * _logEventUUID;
    unsigned long long  _maxAllowedTrailingSamplesAfterSchedulingStop;
    CSMediaPlayingMonitor * _mediaPlayingMonitor;
    NSObject<OS_dispatch_queue> * _mediaPlayingObserverQueue;
    bool  _myriadPreventingTwoShotFeedback;
    CSAudioConverter * _narrowBandOpusConverter;
    bool  _needsPostGain;
    unsigned long long  _numAudioPacketToSiriClient;
    unsigned long long  _numTrailingSamplesAfterSchedulingStop;
    CSAudioConverter * _opusAudioConverter;
    id /* block */  _pendingAudioSessionActivationCompletion;
    unsigned long long  _pendingAudioSessionActivationReason;
    NSUUID * _pendingAudioSessionActivationToken;
    CSAudioPowerMeter * _powerMeter;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _recordEventUUID;
    NSDictionary * _requestedRecordSettings;
    CSStopRecordingOptions * _requestedStopRecordingOptions;
    CSSelectiveChannelAudioFileWriter * _serverLoggingWriter;
    <CSAudioSessionProviding> * _sessionProvider;
    bool  _setupStarted;
    bool  _shouldUseLanguageDetectorForCurrentRequest;
    <CSSpeakerIdentificationDelegate> * _speakerIdDelegate;
    SSRSpeakerRecognitionController * _speakerRecognitionController;
    NSDictionary * _speakerRecognitionScores;
    CSSpeechEndHostTimeEstimator * _speechEndHostTimeEstimator;
    NSArray * _ssrAssets;
    NSString * _ssvLogFilePath;
    <CSAudioStreamProviding> * _streamProvider;
    NSMutableArray * _trailingPktLatencies;
    NSMutableArray * _trailingPktSpeechLatencies;
    NSObject<OS_dispatch_group> * _twoShotAudibleFeedbackDecisionGroup;
    bool  _twoShotNotificationEnabled;
    SSRVoiceProfileManager * _voiceProfileManager;
    CSSmartSiriVolumeController * _volumeController;
    CSVolumeMonitor * _volumeMonitor;
    CSXPCClient * _xpcClient;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) <CSAudioAlertProviding> *alertProvider;
@property (nonatomic, retain) CSAsset *asset;
@property (nonatomic, retain) CSAudioDeviceInfo *audioDeviceInfo;
@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic, retain) <CSAudioMeterProviding> *audioMeterProvider;
@property (nonatomic, retain) <CSAudioMetricProviding> *audioMetricProvider;
@property (nonatomic, retain) CSAudioRecordContext *audioRecordContext;
@property (nonatomic) double audioSessionActivationDelay;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) NSString *bundleIdFromDictation;
@property (nonatomic) float cachedAvgPower;
@property (nonatomic) float cachedPeakPower;
@property (nonatomic) bool canPerformDelayedStop;
@property (nonatomic, retain) CSContinuousVoiceTrigger *continuousVoiceTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decoderProcessedSampleCountForTV;
@property (nonatomic, retain) NSMutableDictionary *decodersForTV;
@property (nonatomic) <CSSpeechControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceRoleIsStereo;
@property (nonatomic) bool didDeliverFirstSpeechPacket;
@property (nonatomic) bool didDeliverLastBuffer;
@property (nonatomic) bool duckOthersOption;
@property (nonatomic, readonly) <CSEndpointAnalyzer> *endpointAnalyzer;
@property (nonatomic, copy) NSUUID *endpointId;
@property (nonatomic, retain) NSMutableDictionary *endpointerLatencyContext;
@property (nonatomic, retain) CSEndpointerProxy *endpointerProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAlarmPlaying;
@property (nonatomic) bool isAudioSessionActivated;
@property (nonatomic) bool isMediaPlaying;
@property (nonatomic) bool isNarrowBand;
@property (nonatomic) bool isOpus;
@property (nonatomic) bool isRemoteVADAvailableStream;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic) bool isSoundPlaying;
@property (nonatomic) bool isTimerPlaying;
@property (nonatomic, retain) CSLanguageDetector *languageDetector;
@property (nonatomic) <CSLanguageDetectorDelegate> *languageDetectorDelegate;
@property (nonatomic, retain) NSString *logEventUUID;
@property (nonatomic) unsigned long long maxAllowedTrailingSamplesAfterSchedulingStop;
@property (nonatomic, retain) CSMediaPlayingMonitor *mediaPlayingMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaPlayingObserverQueue;
@property (nonatomic) bool myriadPreventingTwoShotFeedback;
@property (nonatomic) bool needsPostGain;
@property (nonatomic) unsigned long long numAudioPacketToSiriClient;
@property (nonatomic) unsigned long long numTrailingSamplesAfterSchedulingStop;
@property (nonatomic, copy) id /* block */ pendingAudioSessionActivationCompletion;
@property (nonatomic) unsigned long long pendingAudioSessionActivationReason;
@property (nonatomic, retain) NSUUID *pendingAudioSessionActivationToken;
@property (nonatomic, retain) CSAudioPowerMeter *powerMeter;
@property (nonatomic, retain) NSString *recordEventUUID;
@property (nonatomic, retain) CSStopRecordingOptions *requestedStopRecordingOptions;
@property (nonatomic, retain) CSSelectiveChannelAudioFileWriter *serverLoggingWriter;
@property (nonatomic, retain) <CSAudioSessionProviding> *sessionProvider;
@property (nonatomic) bool setupStarted;
@property (nonatomic) bool shouldUseLanguageDetectorForCurrentRequest;
@property (nonatomic) <CSSpeakerIdentificationDelegate> *speakerIdDelegate;
@property (nonatomic, retain) SSRSpeakerRecognitionController *speakerRecognitionController;
@property (nonatomic, retain) NSDictionary *speakerRecognitionScores;
@property (nonatomic, retain) CSSpeechEndHostTimeEstimator *speechEndHostTimeEstimator;
@property (nonatomic, retain) NSArray *ssrAssets;
@property (nonatomic, retain) NSString *ssvLogFilePath;
@property (nonatomic, retain) <CSAudioStreamProviding> *streamProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *trailingPktLatencies;
@property (nonatomic, retain) NSMutableArray *trailingPktSpeechLatencies;
@property (nonatomic) bool twoShotNotificationEnabled;
@property (nonatomic, retain) SSRVoiceProfileManager *voiceProfileManager;
@property (nonatomic, retain) CSSmartSiriVolumeController *volumeController;
@property (nonatomic, retain) CSVolumeMonitor *volumeMonitor;
@property (nonatomic, retain) CSXPCClient *xpcClient;

+ (bool)isSmartSiriVolumeAvailable;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(bool)arg2 assetProviderType:(unsigned long long)arg3;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (bool)_activateAudioSessionWithReason:(unsigned long long)arg1 delay:(double)arg2 delayRequested:(bool)arg3 error:(id*)arg4;
- (bool)_activateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (void)_addAcousticSLInfo;
- (void)_audioStreamProvdider:(id)arg1 audioBufferAvailable:(id)arg2;
- (bool)_canPlayPhaticDuringMediaPlayback;
- (void)_cancelPendingAudioSessionActivateForReason:(id)arg1;
- (id)_contextToString:(id)arg1;
- (void)_createAudioPowerMeterIfNeeded;
- (bool)_createAudioProviderFromXPCWithContext:(id)arg1;
- (void)_createLanguageDetectorIfNeeded;
- (long long)_currentAudioRecorderSampleRate;
- (void)_deviceAudioLoggingWithFileWriter:(id)arg1;
- (void)_didStopForReason:(long long)arg1;
- (bool)_doActivateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (id)_fetchAudioDecoderForTV:(unsigned int)arg1;
- (bool)_fetchAudioProviderWithContext:(id)arg1;
- (id)_fetchFallbackAudioSessionReleaseProviding;
- (bool)_fetchLastTriggerInfo;
- (id)_getSpeechIdentifier;
- (void)_initializeAlarmState;
- (void)_initializeMediaPlayingState;
- (void)_initializeTimerState;
- (bool)_isDelayedDuckingSupportedContext;
- (bool)_isRecordRouteBuiltinMic;
- (id)_languageDetectorOptionFromSettings:(id)arg1;
- (bool)_lazyActivateAudioSessionWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (void)_logRecordingStopErrorIfNeeded:(long long)arg1;
- (id)_mapScoresToSharedSiriId:(id)arg1;
- (void)_performPendingAudioSessionActivateForReason:(id)arg1;
- (unsigned long long)_phaticPlaybackReason;
- (id)_processSpeakerRecognitionResult:(id)arg1;
- (void)_refreshSpeakerRecognitionAssets;
- (void)_scheduleActivateAudioSessionWithDelay:(double)arg1 sessionActivateReason:(unsigned long long)arg2 scheduleReason:(id)arg3 validator:(id /* block */)arg4 completion:(id /* block */)arg5;
- (float)_scheduledPhaticDelay;
- (void)_setSoundPlayingState;
- (bool)_setupAudioConverter:(bool)arg1 isNarrowBand:(bool)arg2;
- (void)_setupDownsamplerIfNeeded;
- (void)_setupSpeakerRecognitionController;
- (bool)_shouldFetchAcousticSLResult;
- (bool)_shouldFetchRaiseToSpeakInfo;
- (bool)_shouldFetchVoiceTriggerInfo;
- (bool)_shouldResetContextAtPrepare;
- (bool)_shouldSchedulePhaticAtStartRecording;
- (bool)_shouldSetStartSampleCount;
- (bool)_shouldSetStartSampleCountForRTS;
- (bool)_shouldTrackLaunchLatency;
- (bool)_shouldUseLanguageDetector:(id)arg1;
- (void)_startPhaticDecision;
- (void)_teardownAudioProviderIfNeeded;
- (unsigned long long)activeChannel;
- (id)alertProvider;
- (unsigned long long)alertStartTime;
- (id)asset;
- (void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5;
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 wasBuffered:(bool)arg7 receivedNumChannels:(unsigned int)arg8;
- (id)audioDeviceInfo;
- (id)audioFileWriter;
- (id)audioMeterProvider;
- (id)audioMetricProvider;
- (id)audioRecordContext;
- (double)audioSessionActivationDelay;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)audioSessionProvider:(id)arg1 didChangeContext:(bool)arg2;
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(bool)arg2;
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)audioSessionProviderBeginInterruption:(id)arg1;
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioSessionProviderEndInterruption:(id)arg1;
- (id)audioStream;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForOutputReference;
- (void)beginWaitingForMyriad;
- (id)bundleIdFromDictation;
- (float)cachedAvgPower;
- (float)cachedPeakPower;
- (bool)canPerformDelayedStop;
- (void)cancelCurrentLanguageDetectorRequest;
- (id)continuousVoiceTrigger;
- (void)continuousVoiceTrigger:(id)arg1 detectedSilenceAfterVoiceTriggerAt:(double)arg2;
- (void)continuousVoiceTrigger:(id)arg1 detectedVoiceTriggerResult:(id)arg2;
- (unsigned long long)decoderProcessedSampleCountForTV;
- (id)decodersForTV;
- (id)delegate;
- (bool)deviceRoleIsStereo;
- (bool)didDeliverFirstSpeechPacket;
- (bool)didDeliverLastBuffer;
- (void)didTTSVolumeChange:(id)arg1 forReason:(unsigned long long)arg2;
- (bool)duckOthersOption;
- (void)endWaitingForMyriadWithDecision:(unsigned long long)arg1;
- (id)endpointAnalyzer;
- (id)endpointId;
- (id)endpointerLatencyContext;
- (id)endpointerModelVersion;
- (id)endpointerProxy;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })getLPCMAudioStreamBasicDescription;
- (double)getRecordBufferDuration;
- (float)getSmartSiriVolume;
- (id)init;
- (id)initWithEndpointId:(id)arg1;
- (bool)initializeRecordSessionWithContext:(id)arg1;
- (bool)initializeRecordSessionWithRecordContext:(id)arg1;
- (bool)isAlarmPlaying;
- (bool)isAudioSessionActivated;
- (bool)isBuiltInVoiceTriggered;
- (bool)isHearstVoiceTriggered;
- (bool)isJarvisVoiceTriggered;
- (bool)isMediaPlaying;
- (bool)isNarrowBand;
- (bool)isOpus;
- (bool)isRTSTriggered;
- (bool)isRecording;
- (bool)isRemoteVADAvailableStream;
- (bool)isSiriClientListening;
- (bool)isSmartSiriVolumeAvailable;
- (bool)isSoundPlaying;
- (bool)isTimerPlaying;
- (void)keywordDetectorDidDetectKeyword;
- (id)languageDetector;
- (id)languageDetectorDelegate;
- (void)languageDetectorSetMostRecentRecognitionLanguage:(id)arg1;
- (double)lastEndOfVoiceActivityTime;
- (id)logEventUUID;
- (unsigned long long)maxAllowedTrailingSamplesAfterSchedulingStop;
- (id)mediaPlayingMonitor;
- (id)mediaPlayingObserverQueue;
- (id)metrics;
- (bool)myriadPreventingTwoShotFeedback;
- (bool)needsPostGain;
- (unsigned long long)numAudioPacketToSiriClient;
- (unsigned long long)numTrailingSamplesAfterSchedulingStop;
- (unsigned long long)outputReferenceChannel;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForOutputReference;
- (id /* block */)pendingAudioSessionActivationCompletion;
- (unsigned long long)pendingAudioSessionActivationReason;
- (id)pendingAudioSessionActivationToken;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointer;
- (id)playbackRoute;
- (id)powerMeter;
- (void)preheat;
- (bool)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (bool)prewarmAudioSession;
- (void)processServerEndpointFeatures:(id)arg1;
- (id)recordDeviceInfo;
- (id)recordEventUUID;
- (id)recordRoute;
- (id)recordSettings;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (id)requestedStopRecordingOptions;
- (void)reset;
- (void)resetAudioSession;
- (void)resetEndpointer;
- (id)serverLoggingWriter;
- (id)sessionProvider;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAlertProvider:(id)arg1;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)setAsset:(id)arg1;
- (void)setAudioDeviceInfo:(id)arg1;
- (void)setAudioFileWriter:(id)arg1;
- (void)setAudioMeterProvider:(id)arg1;
- (void)setAudioMetricProvider:(id)arg1;
- (void)setAudioRecordContext:(id)arg1;
- (void)setAudioSessionActivationDelay:(double)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setBundleIdFromDictation:(id)arg1;
- (void)setCachedAvgPower:(float)arg1;
- (void)setCachedPeakPower:(float)arg1;
- (void)setCanPerformDelayedStop:(bool)arg1;
- (void)setContinuousVoiceTrigger:(id)arg1;
- (bool)setCurrentContext:(id)arg1 error:(id*)arg2;
- (bool)setCurrentRecordContext:(id)arg1 error:(id*)arg2;
- (void)setDecoderProcessedSampleCountForTV:(unsigned long long)arg1;
- (void)setDecodersForTV:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceRoleIsStereo:(bool)arg1;
- (void)setDidDeliverFirstSpeechPacket:(bool)arg1;
- (void)setDidDeliverLastBuffer:(bool)arg1;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setEndpointAnalyzerDelegate:(id)arg1;
- (void)setEndpointId:(id)arg1;
- (void)setEndpointerLatencyContext:(id)arg1;
- (void)setEndpointerProxy:(id)arg1;
- (void)setIsAlarmPlaying:(bool)arg1;
- (void)setIsAudioSessionActivated:(bool)arg1;
- (void)setIsMediaPlaying:(bool)arg1;
- (void)setIsNarrowBand:(bool)arg1;
- (void)setIsOpus:(bool)arg1;
- (void)setIsRemoteVADAvailableStream:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setIsSoundPlaying:(bool)arg1;
- (void)setIsTimerPlaying:(bool)arg1;
- (void)setLanguageDetector:(id)arg1;
- (void)setLanguageDetectorDelegate:(id)arg1;
- (void)setLanguageDetectorInteractionID:(id)arg1;
- (void)setLogEventUUID:(id)arg1;
- (void)setMaxAllowedTrailingSamplesAfterSchedulingStop:(unsigned long long)arg1;
- (void)setMediaPlayingMonitor:(id)arg1;
- (void)setMediaPlayingObserverQueue:(id)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setMyriadPreventingTwoShotFeedback:(bool)arg1;
- (void)setNeedsPostGain:(bool)arg1;
- (void)setNumAudioPacketToSiriClient:(unsigned long long)arg1;
- (void)setNumTrailingSamplesAfterSchedulingStop:(unsigned long long)arg1;
- (void)setPendingAudioSessionActivationCompletion:(id /* block */)arg1;
- (void)setPendingAudioSessionActivationReason:(unsigned long long)arg1;
- (void)setPendingAudioSessionActivationToken:(id)arg1;
- (void)setPowerMeter:(id)arg1;
- (bool)setRecordBufferDuration:(double)arg1;
- (void)setRecordEventUUID:(id)arg1;
- (void)setRequestedStopRecordingOptions:(id)arg1;
- (void)setServerLoggingWriter:(id)arg1;
- (void)setSessionProvider:(id)arg1;
- (void)setSetupStarted:(bool)arg1;
- (void)setShouldUseLanguageDetectorForCurrentRequest:(bool)arg1;
- (void)setSpeakerIdDelegate:(id)arg1;
- (void)setSpeakerRecognitionController:(id)arg1;
- (void)setSpeakerRecognitionScores:(id)arg1;
- (void)setSpeechEndHostTimeEstimator:(id)arg1;
- (void)setSsrAssets:(id)arg1;
- (void)setSsvLogFilePath:(id)arg1;
- (void)setStreamProvider:(id)arg1;
- (void)setSynchronousCallbackEnabled:(bool)arg1;
- (void)setTrailingPktLatencies:(id)arg1;
- (void)setTrailingPktSpeechLatencies:(id)arg1;
- (void)setTwoShotNotificationEnabled:(bool)arg1;
- (void)setVoiceProfileManager:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setVolumeMonitor:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (bool)setupStarted;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(id /* block */)arg2;
- (bool)shouldUseLanguageDetectorForCurrentRequest;
- (id)speakerIdDelegate;
- (id)speakerRecognitionController;
- (void)speakerRecognitionController:(id)arg1 hasSpeakerInfo:(id)arg2;
- (void)speakerRecognitionFinishedProcessing:(id)arg1 withFinalSpeakerInfo:(id)arg2;
- (id)speakerRecognitionScores;
- (id)speechEndHostTimeEstimator;
- (id)ssrAssets;
- (id)ssvLogFilePath;
- (void)startController;
- (bool)startRecording:(id*)arg1;
- (bool)startRecordingWithSettings:(id)arg1 error:(id*)arg2;
- (void)stopEndpointer;
- (void)stopRecording;
- (void)stopRecordingWithOptions:(id)arg1;
- (id)streamProvider;
- (id)trailingPktLatencies;
- (id)trailingPktSpeechLatencies;
- (bool)twoShotNotificationEnabled;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)updateMeters;
- (id)voiceProfileManager;
- (void)voiceTriggerAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;
- (id)voiceTriggerInfo;
- (id)volumeController;
- (id)volumeMonitor;
- (id)xpcClient;

@end