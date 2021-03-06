/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandEvent : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible> {
    MPRemoteCommand * _command;
    NSString * _commandID;
    NSString * _contextID;
    NSDictionary * _mediaRemoteOptions;
    double  _timestamp;
}

@property (nonatomic, readonly) MPRemoteCommand *command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)command;
- (id)commandID;
- (id)contentItemID;
- (id)contextID;
- (id)description;
- (id)init;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)interfaceID;
- (unsigned int)mediaRemoteCommandType;
- (id)mediaRemoteOptions;
- (long long)playbackQueueOffset;
- (id)sourceID;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;
- (id)serverCopy;
- (id)userIdentity;

@end
