/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMuninRoad : NSObject {
    NSString * _roadName;
}

@property (nonatomic, readonly) NSString *roadName;

- (void)dealloc;
- (id)description;
- (id)initWithLocalizedName:(const char *)arg1;
- (id)initWithMuninRoadEdge:(const struct MuninRoadEdge { struct { /* ? */ } *x1; float x2; struct basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; struct StdAllocator<char, mdm::Allocator> { struct Allocator {} *x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_2_1[2]; } x_4_1_1; struct Matrix<double, 2, 1> { double x_2_2_1[2]; } x_4_1_2; } x4; unsigned long long x5; unsigned long long x6; struct MuninJunction {} *x7; struct MuninJunction {} *x8; bool x9; }*)arg1 localize:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)roadName;

@end