/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {
    GEOPDFeatureBuilding * _featureBuilding;
    GEOPDFeaturePOI * _featurePoi;
    GEOPDFeatureVenue * _featureVenue;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_featureBuilding : 1; 
        unsigned int read_featurePoi : 1; 
        unsigned int read_featureVenue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDFeatureBuilding *featureBuilding;
@property (nonatomic, retain) GEOPDFeaturePOI *featurePoi;
@property (nonatomic, retain) GEOPDFeatureVenue *featureVenue;
@property (nonatomic, readonly) bool hasFeatureBuilding;
@property (nonatomic, readonly) bool hasFeaturePoi;
@property (nonatomic, readonly) bool hasFeatureVenue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureBuilding;
- (id)featurePoi;
- (id)featureVenue;
- (bool)hasFeatureBuilding;
- (bool)hasFeaturePoi;
- (bool)hasFeatureVenue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureBuilding:(id)arg1;
- (void)setFeaturePoi:(id)arg1;
- (void)setFeatureVenue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end