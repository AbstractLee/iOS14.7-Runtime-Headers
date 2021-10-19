/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMReplicaEntry : NSObject {
    <REMReplicaManagerClient> * _client;
    REMClockElementList * _clockElementList;
    bool  _inUse;
    unsigned int  _replicaUUIDIndex;
}

@property (nonatomic) <REMReplicaManagerClient> *client;
@property (nonatomic, retain) REMClockElementList *clockElementList;
@property (nonatomic) bool inUse;
@property (nonatomic) unsigned int replicaUUIDIndex;

- (void).cxx_destruct;
- (id)client;
- (id)clockElementList;
- (id)description;
- (void)encodeIntoEntryArchive:(struct ReplicaEntry { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<replica_manager::VectorTimestampElement> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (bool)hasEqualPersistedPropertiesAs:(id)arg1;
- (bool)inUse;
- (id)initWithEntryArchive:(const struct ReplicaEntry { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<replica_manager::VectorTimestampElement> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; }*)arg1;
- (id)initWithReplicaUUIDIndex:(unsigned int)arg1 clockElementList:(id)arg2 inUse:(bool)arg3 forClient:(id)arg4;
- (id)persistenceDescription;
- (unsigned int)replicaUUIDIndex;
- (void)setClient:(id)arg1;
- (void)setClockElementList:(id)arg1;
- (void)setInUse:(bool)arg1;
- (void)setReplicaUUIDIndex:(unsigned int)arg1;

@end