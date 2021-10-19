/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    struct { 
        unsigned int voiceGender : 1; 
        unsigned int voiceAccent : 1; 
    }  _has;
    bool  _hasVoiceName;
    int  _voiceAccent;
    int  _voiceGender;
    NSString * _voiceName;
}

@property (nonatomic) bool hasVoiceAccent;
@property (nonatomic) bool hasVoiceGender;
@property (nonatomic) bool hasVoiceName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int voiceAccent;
@property (nonatomic) int voiceGender;
@property (nonatomic, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasVoiceAccent;
- (bool)hasVoiceGender;
- (bool)hasVoiceName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasVoiceAccent:(bool)arg1;
- (void)setHasVoiceGender:(bool)arg1;
- (void)setHasVoiceName:(bool)arg1;
- (void)setVoiceAccent:(int)arg1;
- (void)setVoiceGender:(int)arg1;
- (void)setVoiceName:(id)arg1;
- (int)voiceAccent;
- (int)voiceGender;
- (id)voiceName;
- (void)writeTo:(id)arg1;

@end