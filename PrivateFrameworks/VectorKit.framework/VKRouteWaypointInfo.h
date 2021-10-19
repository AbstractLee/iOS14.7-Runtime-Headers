/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRouteWaypointInfo : NSObject {
    unsigned long long  _legIndex;
    bool  _needsRestyle;
    unsigned char  _type;
    GEOComposedWaypoint * _waypoint;
}

@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic) bool needsRestyle;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) GEOComposedWaypoint *waypoint;

+ (id)newRouteWaypointForWaypoint:(id)arg1 legIndex:(unsigned long long)arg2;

- (void)dealloc;
- (id)initWithWaypoint:(id)arg1 legIndex:(unsigned long long)arg2 waypointType:(unsigned char)arg3;
- (unsigned long long)legIndex;
- (bool)needsRestyle;
- (void)setNeedsRestyle:(bool)arg1;
- (id)styleAttributes;
- (unsigned char)type;
- (id)waypoint;

@end