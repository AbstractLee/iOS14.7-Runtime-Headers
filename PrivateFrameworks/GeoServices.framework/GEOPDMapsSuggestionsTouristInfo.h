/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMapsSuggestionsTouristInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_isTourist : 1; 
    }  _flags;
    double  _isTourist;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsTourist;
@property (nonatomic) double isTourist;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsTourist;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)isTourist;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTourist:(bool)arg1;
- (void)setIsTourist:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
