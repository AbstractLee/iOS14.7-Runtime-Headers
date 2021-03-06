/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    struct Anchor { int x1; struct Coordinate2D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_2_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_2_1_2; } x2; struct Geocentric<double> { double x_3_1_1[3]; } x3; double x4; struct MercatorTile { unsigned char x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; struct AnchorManager {} *x6; bool x7; } * _anchor;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationStartCoordinate;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _currentAnimationStartCoordinate;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct shared_ptr<gdc::Camera> { struct Camera {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_12_1_1; } x12; } * _globeView;
    VKCameraRegionRestriction * _regionRestriction;
}

@property (nonatomic) struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct shared_ptr<gdc::Camera> { struct Camera {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; bool x10; /* Warning: unhandled struct encoding: '{basic_string<char' */ struct x11; }*globeView; /* unknown property attribute:  std::__1::__cxx_atomic_base_impl<altitude::TextureMap *>>=A^{TextureMap}}}{function<altitude::TextureMap *()>={__value_func<altitude::TextureMap *()>={type=[24C]}^{__base<altitude::TextureMap *()>}}}}} */
@property (nonatomic, retain) VKCameraRegionRestriction *regionRestriction;

- (struct Matrix<int, 2, 1> { int x1[2]; })_centerCursor;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveEdgeInsets;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3 isInitial:(bool)arg4;
- (struct Matrix<int, 2, 1> { int x1[2]; })_nonOffsetCenterCursor;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (void)dealloc;
- (struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct shared_ptr<gdc::Camera> { struct Camera {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_12_1_1; } x12; }*)globeView;
- (id)init;
- (id)regionRestriction;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct shared_ptr<gdc::Camera> { struct Camera {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (void)setRegionRestriction:(id)arg1;

@end
