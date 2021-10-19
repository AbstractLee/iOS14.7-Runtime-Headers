/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAudioSpectrumAnalyzer : NSObject {
    struct opaqueMTAudioProcessingTap { } * _audioProcessingTap;
    NSMutableArray * _observers;
    MPCPlaybackEngine * _playbackEngine;
    MPCAudioSpectrumAnalyzer * _selfRef;
    _MPCAudioSpectrumAnalyzerStorage * _storage;
}

@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, retain) MPCAudioSpectrumAnalyzer *selfRef;
@property (nonatomic, retain) _MPCAudioSpectrumAnalyzerStorage *storage;

- (void).cxx_destruct;
- (void)_analyzeSamples:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberFrames:(long long)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)_createAudioTap;
- (void)_destroyAudioTap;
- (void)_itemInsertedNotification:(id)arg1;
- (void)_prepareTap:(struct opaqueMTAudioProcessingTap { }*)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3;
- (bool)_shouldAttachAudioTap;
- (void)addObserver:(id)arg1;
- (void)configurePlayerItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)observers;
- (id)playbackEngine;
- (void)removeObserver:(id)arg1;
- (id)selfRef;
- (void)setObservers:(id)arg1;
- (void)setSelfRef:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end