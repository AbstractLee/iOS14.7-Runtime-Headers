/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKStrokeRenderMask : NSObject <NSCopying> {
    struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> { 
        struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *__begin_; 
        struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *__end_; 
        struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> { 
            struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *__value_; 
        } __end_cap_; 
    }  _maskPaths;
    <PKStrokeRenderCache> * _renderCache;
    PKStroke * _stroke;
}

@property (nonatomic, readonly) <PKStrokeRenderCache> *renderCache;
@property (nonatomic, readonly) PKStroke *stroke;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStroke:(id)arg1 renderCache:(id)arg2 maskPaths:(const struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *x_3_1_1; } x3; }*)arg3;
- (const struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *x1; struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *x2; struct __compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> { struct vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> {} *x_3_1_1; } x3; }*)maskPaths;
- (id)renderCache;
- (id)stroke;

@end
