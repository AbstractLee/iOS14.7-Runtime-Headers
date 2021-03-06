/* Generated by RuntimeBrowser.
 */

@protocol VCVideoCaptureServer <VCVideoSink>

@required

- (int)getCaptureFrameRate;
- (void)handleCaptureEvent:(NSString *)arg1;
- (void)handleCaptureEvent:(NSString *)arg1 subType:(NSString *)arg2;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 orientation:(int)arg3;
- (void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 switching:(bool)arg3 camera:(int)arg4 videoMirrored:(bool)arg5;
- (void)setCFAvailabilityChange:(bool)arg1;
- (void)setCameraZoomAvailable:(bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)setCaptureFrameRate:(int)arg1;

@end
