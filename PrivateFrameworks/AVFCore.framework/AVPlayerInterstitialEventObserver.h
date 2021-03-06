/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVPlayerInterstitialEventObserver : NSObject {
    AVPlayer * _primaryPlayer;
    AVWeakReference * _weakReference;
}

@property (readonly) AVPlayerInterstitialEvent *currentEvent;
@property (readonly) NSArray *events;
@property (nonatomic, readonly) AVQueuePlayer *interstitialPlayer;
@property (nonatomic, readonly) AVPlayer *primaryPlayer;

+ (id)interstitialEventObserverWithPrimaryPlayer:(id)arg1;

- (void).cxx_destruct;
- (void)_addObserverListeners;
- (void)_removeObserverListeners;
- (id)currentEvent;
- (void)dealloc;
- (id)events;
- (id)init;
- (id)initWithPrimaryPlayer:(id)arg1;
- (id)interstitialPlayer;
- (id)primaryPlayer;

@end
