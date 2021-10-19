/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMediaSearch : PBCodable <NSCopying, NSSecureCoding, _INPBMediaSearch> {
    _INPBString * _albumName;
    _INPBString * _artistName;
    NSArray * _genreNames;
    struct { 
        unsigned int mediaType : 1; 
        unsigned int reference : 1; 
        unsigned int sortOrder : 1; 
    }  _has;
    _INPBString * _mediaIdentifier;
    _INPBString * _mediaName;
    int  _mediaType;
    NSArray * _moodNames;
    int  _reference;
    _INPBDateTimeRange * _releaseDate;
    int  _sortOrder;
}

@property (nonatomic, retain) _INPBString *albumName;
@property (nonatomic, retain) _INPBString *artistName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *genreNames;
@property (nonatomic, readonly) unsigned long long genreNamesCount;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasArtistName;
@property (nonatomic, readonly) bool hasMediaIdentifier;
@property (nonatomic, readonly) bool hasMediaName;
@property (nonatomic) bool hasMediaType;
@property (nonatomic) bool hasReference;
@property (nonatomic, readonly) bool hasReleaseDate;
@property (nonatomic) bool hasSortOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *mediaIdentifier;
@property (nonatomic, retain) _INPBString *mediaName;
@property (nonatomic) int mediaType;
@property (nonatomic, copy) NSArray *moodNames;
@property (nonatomic, readonly) unsigned long long moodNamesCount;
@property (nonatomic) int reference;
@property (nonatomic, retain) _INPBDateTimeRange *releaseDate;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;

+ (Class)genreNamesType;
+ (Class)moodNamesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsMediaType:(id)arg1;
- (int)StringAsReference:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)addGenreNames:(id)arg1;
- (void)addMoodNames:(id)arg1;
- (id)albumName;
- (id)artistName;
- (void)clearGenreNames;
- (void)clearMoodNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)genreNames;
- (id)genreNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)genreNamesCount;
- (bool)hasAlbumName;
- (bool)hasArtistName;
- (bool)hasMediaIdentifier;
- (bool)hasMediaName;
- (bool)hasMediaType;
- (bool)hasReference;
- (bool)hasReleaseDate;
- (bool)hasSortOrder;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaIdentifier;
- (id)mediaName;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (id)moodNames;
- (id)moodNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)moodNamesCount;
- (bool)readFrom:(id)arg1;
- (int)reference;
- (id)referenceAsString:(int)arg1;
- (id)releaseDate;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setGenreNames:(id)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasReference:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setMediaIdentifier:(id)arg1;
- (void)setMediaName:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setMoodNames:(id)arg1;
- (void)setReference:(int)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end