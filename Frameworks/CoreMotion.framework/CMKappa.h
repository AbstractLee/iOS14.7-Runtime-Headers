/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMKappa : NSObject {
    CMKappaInternal * _internal;
}

@property (nonatomic, readonly) CMKappaInternal *_internal;

+ (bool)areStatsAvailable;

- (id)_internal;
- (void)dealloc;
- (int)getState;
- (id)init;
- (void)sendAPCmd:(int)arg1;
- (void)sendAPConfigNumFastAccel:(int)arg1 numAccel:(int)arg2 numPressure:(int)arg3 numDM:(int)arg4 numAudio:(int)arg5 timeout:(int)arg6;
- (void)sendCmd:(int)arg1;
- (void)sendConfigNumFastAccel:(int)arg1 numAccel:(int)arg2 numPressure:(int)arg3 numDM:(int)arg4 numAudio:(int)arg5 timeout:(int)arg6;
- (id)sendStatsDataToUrl:(id)arg1;
- (void)sendStatsDataToUrl:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)startKappaUpdatesForItem:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)stopKappaUpdates;

@end
