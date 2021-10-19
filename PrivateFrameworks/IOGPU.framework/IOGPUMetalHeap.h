/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
 */

@interface IOGPUMetalHeap : _MTLHeap {
    struct MTLRangeAllocator { 
        struct MTLRangeAllocatorElement {} *elements; 
        unsigned int numElements; 
        unsigned long long capacity; 
        unsigned long long capacityIncrement; 
        unsigned long long defaultAlignmentMask; 
    }  _allocator;
    IOGPUMetalDevice<MTLDevice> * _device;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    IOGPUMetalResource * _resource;
    unsigned long long  _size;
}

@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hazardTrackingMode;
@property (copy) NSString *label;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) long long type;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long usedSize;

- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (void)deallocHeapSubResource;
- (id)device;
- (id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned int x_1_3_4; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_15_2_2; } x_1_1_15; } x1; }*)arg4 argsSize:(unsigned int)arg5;
- (id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned int x_1_1_11; unsigned long long x_1_1_12; unsigned long long x_1_1_13; unsigned long long x_1_1_14; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned int x_1_3_4; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; unsigned int x_2_3_4; unsigned long long x_2_3_5[2]; } x_15_2_2; } x_1_1_15; } x1; }*)arg4 argsSize:(unsigned int)arg5 desc:(id)arg6;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)newSubResourceAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 alignment:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)newSubResourceWithLength:(unsigned long long)arg1 alignment:(unsigned long long)arg2 options:(unsigned long long)arg3 offset:(unsigned long long*)arg4;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)unpinMemoryAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)usedSize;

@end