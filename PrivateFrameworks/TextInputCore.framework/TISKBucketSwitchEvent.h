/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKBucketSwitchEvent : TISKEvent {
    TISKSessionSamples * _sessionSamples;
}

@property (nonatomic, retain) TISKSessionSamples *sessionSamples;

- (void).cxx_destruct;
- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (id)privateDescription;
- (void)reportToSession:(id)arg1;
- (id)sessionSamples;
- (void)setSessionSamples:(id)arg1;

@end
