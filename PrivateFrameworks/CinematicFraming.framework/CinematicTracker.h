/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface CinematicTracker : NSObject {
    NSMutableArray * _allTracks;
    <CinematicTrackerDelegate> * _delegate;
    NSMutableDictionary * _oidToTrackMap;
    CinematicFramingSessionOptions * _options;
    unsigned long long  _trackIndexCounter;
    NSMutableArray * _tracksOidMappings;
}

@property (nonatomic) <CinematicTrackerDelegate> *delegate;
@property (nonatomic, retain) CinematicFramingSessionOptions *options;
@property (nonatomic, readonly) NSArray *tracks;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)options;
- (void)processDetections:(id)arg1 ofType:(long long)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)processInput:(id)arg1 inView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)removeTrackOfType:(long long)arg1 atIndex:(int)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)resetTracksFramingProperties;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (id)tracks;
- (void)updateBodyFacePairsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
