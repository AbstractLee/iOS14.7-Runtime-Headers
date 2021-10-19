/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMapsHomeSection : PBCodable <NSCopying> {
    GEOPDCollectionSuggestionResult * _collectionSuggestionResult;
    struct { 
        unsigned int has_sectionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_collectionSuggestionResult : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _sectionType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDCollectionSuggestionResult *collectionSuggestionResult;
@property (nonatomic, readonly) bool hasCollectionSuggestionResult;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasSectionType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int sectionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSectionType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)collectionSuggestionResult;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionSuggestionResult;
- (bool)hasName;
- (bool)hasSectionType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)sectionType;
- (id)sectionTypeAsString:(int)arg1;
- (void)setCollectionSuggestionResult:(id)arg1;
- (void)setHasSectionType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSectionType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end