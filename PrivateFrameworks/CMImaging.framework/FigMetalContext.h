/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface FigMetalContext : NSObject {
    FigMetalAllocator * _allocator;
    bool  _allowCommandBufferCommitsOnlyByForceCommit;
    <MTLCommandBuffer> * _commandBuffer;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    bool  _dryRun;
    <MTLBuffer> * _fullRangeVertexBuf;
    MTLVertexDescriptor * _fullRangeVertexDesc;
    <MTLLibrary> * _library;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
}

@property (nonatomic, retain) FigMetalAllocator *allocator;
@property (nonatomic) bool allowCommandBufferCommitsOnlyByForceCommit;
@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) bool dryRun;
@property (nonatomic, retain) FigMetalExecutionStatus *executionStatus;
@property (nonatomic, retain) <MTLBuffer> *fullRangeVertexBuf;
@property (nonatomic, retain) MTLVertexDescriptor *fullRangeVertexDesc;
@property (nonatomic, retain) <MTLLibrary> *library;
@property (nonatomic, retain) <MTLPipelineLibrarySPI> *pipelineLibrary;

+ (id)createMetalDevice;

- (void).cxx_destruct;
- (id)CreateMetalTextureFromFile:(const char *)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2;
- (bool)ReadMetalTextureFromFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2;
- (bool)WriteMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (id)allocator;
- (bool)allowCommandBufferCommitsOnlyByForceCommit;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 plane:(unsigned long long)arg6;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(unsigned long long)arg4 alignmentFactor:(unsigned long long)arg5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 usage:(unsigned long long)arg3 textureSize:(struct CGSize { double x1; double x2; })arg4 plane:(unsigned long long)arg5;
- (id)commandBuffer;
- (id)commandQueue;
- (void)commit;
- (void)commitAndWait;
- (int)commonInitWithOptionalCommandQueue:(id)arg1;
- (id)computePipelineStateFor:(id)arg1 constants:(id)arg2;
- (id)create2DTextureFromBuffer:(id)arg1 offset:(unsigned long long)arg2 width:(int)arg3 height:(int)arg4 format:(unsigned long long)arg5 usage:(unsigned long long)arg6;
- (id)device;
- (bool)dryRun;
- (id)executionStatus;
- (void)forceCommit;
- (id)fullRangeVertexBuf;
- (id)fullRangeVertexDesc;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1;
- (id)init;
- (int)initRangeVertex;
- (id)initWithLibraryData:(char *)arg1 ofSize:(unsigned long long)arg2 andOptionalCommandQueue:(id)arg3;
- (id)initWithbundle:(id)arg1 andOptionalCommandQueue:(id)arg2;
- (void)insertDebugCaptureBoundary;
- (id)library;
- (id)pipelineLibrary;
- (void)prewarmInternalMetalShadersForFormatsList:(id)arg1;
- (id)rebindTex:(id)arg1 format:(unsigned long long)arg2 usage:(unsigned long long)arg3 plane:(int)arg4 xFactor:(int)arg5;
- (void)setAllocator:(id)arg1;
- (void)setAllowCommandBufferCommitsOnlyByForceCommit:(bool)arg1;
- (void)setCommandBuffer:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDryRun:(bool)arg1;
- (void)setExecutionStatus:(id)arg1;
- (void)setFullRangeVertexBuf:(id)arg1;
- (void)setFullRangeVertexDesc:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPipelineLibrary:(id)arg1;
- (int)setQueuePriority:(int)arg1;
- (void)waitForIdle;
- (void)waitForSchedule;

@end