/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
 */

@interface CVNLPCaptionModelBase : NSObject {
    CVNLPCaptionPerformance * _perfResults;
    CVNLPCaptionRuntimeParameters * _runTimeParams;
}

@property (nonatomic, readonly) CVNLPCaptionPerformance *perfResults;
@property (nonatomic, readonly) CVNLPCaptionRuntimeParameters *runTimeParams;

- (void).cxx_destruct;
- (unsigned long long)_blob_size:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (void)_copy_data_from_blob:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1 to:(struct vector<float, std::__1::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float>> { float *x_3_1_1; } x3; }*)arg2;
- (void)_copy_data_from_blob:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1 toPtr:(float*)arg2;
- (void)_copy_data_to_blob:(float*)arg1 to:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg2;
- (void)_copy_data_to_blob_repeated:(id)arg1 to:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg2;
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;
- (id)perfResults;
- (id)performanceResults;
- (id)runTimeParams;

@end