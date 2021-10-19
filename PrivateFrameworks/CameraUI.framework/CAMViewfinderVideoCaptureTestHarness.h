/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMViewfinderVideoCaptureTestHarness : CAMPerformanceTestHarness <CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate> {
    double  __videoDurationInSeconds;
    CAMViewfinderViewController * __viewfinderViewController;
}

@property (nonatomic, readonly) double _videoDurationInSeconds;
@property (nonatomic, retain) CAMViewfinderViewController *_viewfinderViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_videoDurationInSeconds;
- (id)_viewfinderViewController;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 videoDurationInSeconds:(double)arg3;
- (void)set_viewfinderViewController:(id)arg1;
- (void)startTesting;
- (void)viewfinderViewController:(id)arg1 didReceiveVideoRequestDidCompleteCapture:(id)arg2 withResponse:(id)arg3 error:(id)arg4;
- (void)viewfinderViewController:(id)arg1 didReceiveVideoRequestDidStartCapturing:(id)arg2;

@end