/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLGPUDebugFunction : MTLToolsFunction {
    struct unordered_map<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>>> { 
        struct __hash_table<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>>> { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> *>>> { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> *>>> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *>>> { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, std::__1::hash<unsigned int>, true>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout>>>, std::__1::equal_to<unsigned int>, true>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  argumentLayouts;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  argumentLayoutsMutex;
}

+ (id)convertUserType:(id)arg1;
+ (id)internalArrayTypeFromUserArrayType:(id)arg1;
+ (id)internalStructTypeFromUserStructType:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFunction:(id)arg1 library:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 binaryArchives:(id)arg4;

@end
