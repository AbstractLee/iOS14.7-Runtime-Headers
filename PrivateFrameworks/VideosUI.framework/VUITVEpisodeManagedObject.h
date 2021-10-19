/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUITVEpisodeManagedObject : VUIVideoManagedObject

@property (nonatomic, copy) NSNumber *episodeNumberInSeason;
@property (nonatomic, copy) NSNumber *episodeNumberInSeries;
@property (nonatomic, copy) NSNumber *fractionalEpisodeNumberInSeason;
@property (nonatomic, retain) VUITVSeasonManagedObject *season;
@property (nonatomic, retain) VUITVSeriesManagedObject *series;

+ (id)fetchRequest;

@end