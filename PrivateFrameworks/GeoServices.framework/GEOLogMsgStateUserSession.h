/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {
    GEOLocalTime * _eventTime;
    struct { 
        unsigned int has_navSessionId : 1; 
        unsigned int has_sessionId : 1; 
        unsigned int has_navSessionRelativeTimestamp : 1; 
        unsigned int has_relativeTimestamp : 1; 
        unsigned int has_sessionEpoch : 1; 
        unsigned int has_sequenceNumber : 1; 
    }  _flags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _navSessionId;
    double  _navSessionRelativeTimestamp;
    double  _relativeTimestamp;
    unsigned int  _sequenceNumber;
    unsigned long long  _sessionEpoch;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
}

@property (nonatomic, retain) GEOLocalTime *eventTime;
@property (nonatomic, readonly) bool hasEventTime;
@property (nonatomic) bool hasNavSessionId;
@property (nonatomic) bool hasNavSessionRelativeTimestamp;
@property (nonatomic) bool hasRelativeTimestamp;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionEpoch;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } navSessionId;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventTime;
- (bool)hasEventTime;
- (bool)hasNavSessionId;
- (bool)hasNavSessionRelativeTimestamp;
- (bool)hasRelativeTimestamp;
- (bool)hasSequenceNumber;
- (bool)hasSessionEpoch;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })navSessionId;
- (double)navSessionRelativeTimestamp;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)relativeTimestamp;
- (unsigned int)sequenceNumber;
- (unsigned long long)sessionEpoch;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setEventTime:(id)arg1;
- (void)setHasNavSessionId:(bool)arg1;
- (void)setHasNavSessionRelativeTimestamp:(bool)arg1;
- (void)setHasRelativeTimestamp:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionEpoch:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setNavSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNavSessionRelativeTimestamp:(double)arg1;
- (void)setRelativeTimestamp:(double)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionEpoch:(unsigned long long)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
