/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCommandResult : NSObject {
    NSError * _error;
    MRPlayerPath * _playerPath;
    NSArray * _resultStatuses;
    unsigned int  _sendError;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly, copy) NSArray *handlerReturnStatuses;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, copy) NSArray *resultStatuses;
@property (nonatomic) unsigned int sendError;

+ (id)commandResultWithSendError:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)error;
- (id)handlerReturnStatuses;
- (id)initWithData:(id)arg1;
- (id)initWithHandlerStatuses:(id)arg1 sendError:(unsigned int)arg2;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithResultStatuses:(id)arg1 sendError:(unsigned int)arg2 playerPath:(id)arg3;
- (id)playerPath;
- (id)protobuf;
- (id)resultStatuses;
- (unsigned int)sendError;
- (void)setError:(id)arg1;
- (void)setResultStatuses:(id)arg1;
- (void)setSendError:(unsigned int)arg1;

@end