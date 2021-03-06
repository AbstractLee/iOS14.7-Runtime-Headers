/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAudioFormatProtobuf : PBCodable <NSCopying> {
    NSString * _audioChannelLayoutDescription;
    long long  _bitDepth;
    long long  _bitrate;
    unsigned int  _channelLayout;
    unsigned int  _codec;
    NSString * _groupID;
    struct { 
        unsigned int bitDepth : 1; 
        unsigned int bitrate : 1; 
        unsigned int sampleRate : 1; 
        unsigned int channelLayout : 1; 
        unsigned int codec : 1; 
        unsigned int tier : 1; 
        unsigned int multiChannel : 1; 
        unsigned int spatialized : 1; 
    }  _has;
    bool  _multiChannel;
    long long  _sampleRate;
    bool  _spatialized;
    NSString * _stableVariantID;
    int  _tier;
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
