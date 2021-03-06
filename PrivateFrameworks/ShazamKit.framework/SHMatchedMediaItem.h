/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding> {
    SHSyncedLyrics * _syncedLyrics;
}

@property (nonatomic, readonly) float frequencySkew;
@property (nonatomic, readonly) long long matchScore;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) SHSyncedLyrics *syncedLyrics;
@property (nonatomic, readonly, copy) NSString *syncedLyricsSnippet;
@property (nonatomic, readonly) float timeSkew;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_updateSyncedLyricsInMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)frequencySkew;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchedMediaItemDictionary:(id)arg1;
- (id)initWithMatchedMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2;
- (id)initWithResultDictionary:(id)arg1;
- (long long)matchScore;
- (double)offset;
- (id)syncedLyrics;
- (id)syncedLyricsSnippet;
- (float)timeSkew;

@end
