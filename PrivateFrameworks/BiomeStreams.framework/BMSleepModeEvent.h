/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMSleepModeEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    unsigned long long  _sleepModeState;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sleepModeState;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSleepModeState:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)serialize;
- (unsigned long long)sleepModeState;

@end