/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    int  _builtInMicrophonePosition;
    bool  _builtInMicrophoneStereoAudioCaptureEnabled;
}

@property (nonatomic) int builtInMicrophonePosition;
@property (nonatomic) bool builtInMicrophoneStereoAudioCaptureEnabled;

- (int)builtInMicrophonePosition;
- (bool)builtInMicrophoneStereoAudioCaptureEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBuiltInMicrophonePosition:(int)arg1;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(bool)arg1;

@end