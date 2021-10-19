/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendCommandResultProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int sendError : 1; 
    }  _has;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    int  _sendError;
    NSMutableArray * _statuses;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end