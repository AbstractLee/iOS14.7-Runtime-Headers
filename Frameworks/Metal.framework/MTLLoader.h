/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLLoader : NSObject {
    NSObject<OS_dispatch_queue> * _claimQueue;
    struct unordered_map<MTLLoadedFile *, id, std::__1::hash<MTLLoadedFile *>, std::__1::equal_to<MTLLoadedFile *>, std::__1::allocator<std::__1::pair<MTLLoadedFile *const, id>>> { 
        struct __hash_table<std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true>, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLLoadedFile *, id>>> { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *>>> { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLLoadedFile *, id>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::hash<MTLLoadedFile *>, true>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<MTLLoadedFile *, std::__1::__hash_value_type<MTLLoadedFile *, id>, std::__1::equal_to<MTLLoadedFile *>, true>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _claims;
    struct LoaderGlobalState { id x1; id x2; struct unordered_map<FileIdentifier, MTLLoadedFile *, FileIdentifier::Hash, std::__1::equal_to<FileIdentifier>, std::__1::allocator<std::__1::pair<const FileIdentifier, MTLLoadedFile *>>> { struct __hash_table<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, std::__1::__unordered_map_hasher<FileIdentifier, std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, FileIdentifier::Hash, true>, std::__1::__unordered_map_equal<FileIdentifier, std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, std::__1::equal_to<FileIdentifier>, true>, std::__1::allocator<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>>> { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> *>>> { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> *>>> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<FileIdentifier, MTLLoadedFile *>, void *> *> *>> { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _global;
}

+ (id)canonicalURL:(id)arg1;
+ (bool)deserializeMachOContainerWithHandler:(id /* block */)arg1 reader:(id /* block */)arg2;
+ (bool)deserializeMachOWrapperWithType:(long long)arg1 payloadHandler:(id /* block */)arg2 reader:(id /* block */)arg3;
+ (bool)deserializeUniversalBinaryHeaderWithHandler:(id /* block */)arg1 reader:(id /* block */)arg2 bytes:(unsigned long long)arg3;
+ (bool)serializeMachOContainerWithSlice:(struct MTLLoaderSliceIdentifier { int x1; int x2; })arg1 payload:(const struct MTLLoaderMachOPayload { id x1; struct { unsigned char x_2_1_1[32]; } x2; bool x3; unsigned long long x4; id x5; id x6; id x7; id x8; id x9; }*)arg2 count:(unsigned int)arg3 writer:(id /* block */)arg4;
+ (bool)serializeMachOWrapperWithType:(long long)arg1 slice:(struct MTLLoaderSliceIdentifier { int x1; int x2; })arg2 payload:(const struct MTLLoaderMachOPayload { id x1; struct { unsigned char x_2_1_1[32]; } x2; bool x3; unsigned long long x4; id x5; id x6; id x7; id x8; id x9; }*)arg3 writer:(id /* block */)arg4;
+ (bool)serializePaddingForOffset:(unsigned long long)arg1 writer:(id /* block */)arg2;
+ (bool)serializeUniversalBinaryHeaderWithSlice:(const struct MTLLoaderSliceIdentifier { int x1; int x2; }*)arg1 offset:(const unsigned long long*)arg2 length:(const unsigned long long*)arg3 count:(unsigned int)arg4 writer:(id /* block */)arg5;
+ (struct MTLLoaderSliceIdentifier { int x1; int x2; })sliceIDForAIR:(const struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)arg1;
+ (struct MTLLoaderSliceIdentifier { int x1; int x2; })sliceIDForDescriptors;
+ (struct MTLLoaderSliceIdentifier { int x1; int x2; })sliceIDForDevice:(id)arg1 andDriverVersion:(unsigned long long*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)associateLoadedFile:(id)arg1 withObject:(id)arg2;
- (oneway void)dealloc;
- (void)disassociateLoadedFile:(id)arg1 withObject:(id)arg2;
- (void)executeBlockForLoadedFile:(id)arg1 withAssociatedObject:(id)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)loadFileWithURL:(id)arg1 error:(id*)arg2;
- (id)loadLibrariesWithDevice:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3;
- (void)releaseLoadedFile:(id)arg1;

@end
