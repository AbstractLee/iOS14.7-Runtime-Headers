/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioClientManager : NSObject {
    NSMutableDictionary * _clientList;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)getAudioClientWithProcessId:(id)arg1 create:(bool)arg2;
- (id)init;
- (void)registerBlocksForService;
- (void)secureMicrophoneEngagedNotification;
- (void)unregisterBlocksForService;

@end
