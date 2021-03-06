/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
 */

@interface QSSRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RequestStatsResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *bool_stats;
@property (nonatomic, readonly) NSArray *double_stats;
@property (nonatomic, readonly) NSArray *int32_stats;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *request_locale;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RequestStatsResponse> { unsigned int x1; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator {} *x_1_1_1; bool x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; char *x_1_1_6; char *x_1_1_7; char *x_1_1_8; } x1; unsigned int x2; unsigned short x3; bool x4; bool x5; unsigned long long x6; bool x7; bool x8; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String>>> {} *x9; }*)arg1;
- (id)bool_stats;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)double_stats;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)int32_stats;
- (id)language;
- (id)request_locale;
- (id)speech_id;

@end
