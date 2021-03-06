/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPAAudioQualityDictionary : PBCodable <NSCopying> {
    long long  _bitDepth;
    long long  _bitRate;
    NSString * _channelLayoutDescription;
    unsigned int  _codec;
    struct { 
        unsigned int bitDepth : 1; 
        unsigned int bitRate : 1; 
        unsigned int sampleRate : 1; 
        unsigned int codec : 1; 
        unsigned int isSpatialized : 1; 
    }  _has;
    bool  _isSpatialized;
    long long  _sampleRate;
}

@property (nonatomic) long long bitDepth;
@property (nonatomic) long long bitRate;
@property (nonatomic, retain) NSString *channelLayoutDescription;
@property (nonatomic) unsigned int codec;
@property (nonatomic) bool hasBitDepth;
@property (nonatomic) bool hasBitRate;
@property (nonatomic, readonly) bool hasChannelLayoutDescription;
@property (nonatomic) bool hasCodec;
@property (nonatomic) bool hasIsSpatialized;
@property (nonatomic) bool hasSampleRate;
@property (nonatomic) bool isSpatialized;
@property (nonatomic) long long sampleRate;

- (void).cxx_destruct;
- (long long)bitDepth;
- (long long)bitRate;
- (id)channelLayoutDescription;
- (unsigned int)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBitDepth;
- (bool)hasBitRate;
- (bool)hasChannelLayoutDescription;
- (bool)hasCodec;
- (bool)hasIsSpatialized;
- (bool)hasSampleRate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSpatialized;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)sampleRate;
- (void)setBitDepth:(long long)arg1;
- (void)setBitRate:(long long)arg1;
- (void)setChannelLayoutDescription:(id)arg1;
- (void)setCodec:(unsigned int)arg1;
- (void)setHasBitDepth:(bool)arg1;
- (void)setHasBitRate:(bool)arg1;
- (void)setHasCodec:(bool)arg1;
- (void)setHasIsSpatialized:(bool)arg1;
- (void)setHasSampleRate:(bool)arg1;
- (void)setIsSpatialized:(bool)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
