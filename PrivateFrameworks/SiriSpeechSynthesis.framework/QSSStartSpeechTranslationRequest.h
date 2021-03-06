/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
 */

@interface QSSStartSpeechTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartSpeechTranslationRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) long long opt_in_status;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) bool restricted_mode;
@property (nonatomic, readonly) QSSStartSpeechRequest *start_speech_request;
@property (nonatomic, readonly) NSArray *text_to_speech_requests;
@property (nonatomic, readonly) NSArray *translation_locale_pairs;
@property (nonatomic, readonly) QSSTranslationRequest *translation_request;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartSpeechTranslationRequest> { unsigned int x1; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator {} *x_1_1_1; bool x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; char *x_1_1_6; char *x_1_1_7; char *x_1_1_8; } x1; unsigned int x2; unsigned short x3; bool x4; bool x5; unsigned long long x6; bool x7; bool x8; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String>>> {} *x9; }*)arg1;
- (id)app_id;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartSpeechTranslationRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)opt_in_status;
- (id)request_id;
- (bool)restricted_mode;
- (id)start_speech_request;
- (id)text_to_speech_requests;
- (id)translation_locale_pairs;
- (id)translation_request;

@end
