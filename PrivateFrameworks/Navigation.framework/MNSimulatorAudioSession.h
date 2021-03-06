/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSimulatorAudioSession : NSObject <MNAudioSession> {
    id  _delegate;
    bool  _isSpeaking;
    MNTraceRouteSimulator * _simulator;
    unsigned long long  _voiceGuidanceLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MNTraceRouteSimulator *simulator;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long voiceGuidanceLevel;

- (void).cxx_destruct;
- (void)beginSession;
- (void)clearAllAnnouncements;
- (id)delegate;
- (void)endSession;
- (id)initWithSimulator:(id)arg1;
- (bool)isSpeaking;
- (bool)isVoiceGuidanceEnabled;
- (void)prepareToAnnounce;
- (void)setDelegate:(id)arg1;
- (void)setSimulator:(id)arg1;
- (void)setVoiceGuidanceLevel:(unsigned long long)arg1;
- (id)simulator;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(bool)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (void)stop;
- (bool)vibrateForPrompt:(unsigned long long)arg1;
- (unsigned long long)voiceGuidanceLevel;

@end
