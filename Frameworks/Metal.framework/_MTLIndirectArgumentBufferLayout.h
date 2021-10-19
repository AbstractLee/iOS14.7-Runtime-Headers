/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLIndirectArgumentBufferLayout : NSObject {
    struct _MTLIndirectArgumentBufferLayoutPrivate { id x1; struct unordered_map<unsigned long, _MTLIndirectArgumentBufferLayout *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, _MTLIndirectArgumentBufferLayout *>>> { struct __hash_table<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>>> { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *>>> { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *>>> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, _MTLIndirectArgumentBufferLayout *>, void *> *> *>> { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; } * _private;
}

@property (readonly) unsigned long long alignment;
@property (readonly) bool bufferLayoutMatchesFrontEndLayout;
@property (nonatomic, readonly) <MTLDeviceSPI> *device;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned int hashMask;
@property (readonly) unsigned int hashOffset;
@property (readonly) unsigned int hashSignature;
@property (readonly) unsigned int hashValue;

- (unsigned long long)alignment;
- (id)bufferLayoutForResourceAtIndex:(unsigned long long)arg1;
- (bool)bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)device;
- (unsigned long long)encodedLength;
- (unsigned int)hashMask;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (unsigned int)hashValue;
- (id)init;
- (void)setStructType:(id)arg1 withDevice:(id)arg2;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;

@end