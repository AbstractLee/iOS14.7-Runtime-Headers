/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHLibraryChangeset : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _addedTrackSet;
    NSMutableSet * _deletedTrackSet;
}

@property (nonatomic, readonly) NSArray *addedLibraryTracks;
@property (nonatomic, retain) NSMutableSet *addedTrackSet;
@property (nonatomic, readonly) NSArray *deletedLibraryTracks;
@property (nonatomic, retain) NSMutableSet *deletedTrackSet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addLibraryTracks:(id)arg1;
- (id)addedLibraryTracks;
- (id)addedTrackSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteLibraryTracks:(id)arg1;
- (id)deletedLibraryTracks;
- (id)deletedTrackSet;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryTracksToAdd:(id)arg1 libraryTracksToDelete:(id)arg2;
- (void)mergeChangeset:(id)arg1;
- (void)setAddedTrackSet:(id)arg1;
- (void)setDeletedTrackSet:(id)arg1;

@end
