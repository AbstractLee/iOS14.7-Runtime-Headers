/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCMHAGPUDeviceOps : MLCGPUDeviceOps {
    NSArray * _mhaAttentionBiasTensors;
    id  _mhaBiasAddKernel;
    id  _mhaDropoutForwardKernel;
    id  _mhaDropoutGradientKernel;
    id  _mhaDropoutSource;
    id  _mhaDropoutState;
    bool  _mhaHasAttentionMask;
    bool  _mhaHasAttnBias;
    bool  _mhaHasBias;
    bool  _mhaHasKeyMask;
    bool  _mhaHasZeroAttention;
    unsigned long long  _mhaHeadCount;
    NSMutableArray * _mhaInputProjResults;
    unsigned long long  _mhaKeyDimension;
    NSMutableArray * _mhaMatMulForwardKernels;
    NSMutableArray * _mhaMatMulGradientKernels;
    id  _mhaMatMulKernel;
    NSMutableArray * _mhaMatMulSecondaryGradientKernels;
    NSMutableArray * _mhaMatMulSourcesQKV;
    unsigned long long  _mhaModelDimension;
    NSMutableArray * _mhaMultiGPUChildOps;
    id  _mhaQKSoftmaxDeviceOps;
    id  _mhaQKSoftmaxResultMatrix;
    id  _mhaReduceSumKernel;
    NSMutableArray * _mhaSourcesQKV;
    unsigned long long  _mhaValueDimension;
}

@property (nonatomic, retain) NSArray *mhaAttentionBiasTensors;
@property (nonatomic, retain) id mhaBiasAddKernel;
@property (nonatomic, retain) id mhaDropoutForwardKernel;
@property (nonatomic, retain) id mhaDropoutGradientKernel;
@property (nonatomic, retain) id mhaDropoutSource;
@property (nonatomic, retain) id mhaDropoutState;
@property (nonatomic) bool mhaHasAttentionMask;
@property (nonatomic) bool mhaHasAttnBias;
@property (nonatomic) bool mhaHasBias;
@property (nonatomic) bool mhaHasKeyMask;
@property (nonatomic) bool mhaHasZeroAttention;
@property (nonatomic) unsigned long long mhaHeadCount;
@property (nonatomic, retain) NSMutableArray *mhaInputProjResults;
@property (nonatomic) unsigned long long mhaKeyDimension;
@property (nonatomic, retain) NSMutableArray *mhaMatMulForwardKernels;
@property (nonatomic, retain) NSMutableArray *mhaMatMulGradientKernels;
@property (nonatomic, retain) id mhaMatMulKernel;
@property (nonatomic, retain) NSMutableArray *mhaMatMulSecondaryGradientKernels;
@property (nonatomic, retain) NSMutableArray *mhaMatMulSourcesQKV;
@property (nonatomic) unsigned long long mhaModelDimension;
@property (nonatomic, retain) NSMutableArray *mhaMultiGPUChildOps;
@property (nonatomic, retain) id mhaQKSoftmaxDeviceOps;
@property (nonatomic, retain) id mhaQKSoftmaxResultMatrix;
@property (nonatomic, retain) id mhaReduceSumKernel;
@property (nonatomic, retain) NSMutableArray *mhaSourcesQKV;
@property (nonatomic) unsigned long long mhaValueDimension;

+ (id)deviceOps;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)mhaAttentionBiasTensors;
- (id)mhaBiasAddKernel;
- (id)mhaDropoutForwardKernel;
- (id)mhaDropoutGradientKernel;
- (id)mhaDropoutSource;
- (id)mhaDropoutState;
- (bool)mhaHasAttentionMask;
- (bool)mhaHasAttnBias;
- (bool)mhaHasBias;
- (bool)mhaHasKeyMask;
- (bool)mhaHasZeroAttention;
- (unsigned long long)mhaHeadCount;
- (id)mhaInputProjResults;
- (unsigned long long)mhaKeyDimension;
- (id)mhaMatMulForwardKernels;
- (id)mhaMatMulGradientKernels;
- (id)mhaMatMulKernel;
- (id)mhaMatMulSecondaryGradientKernels;
- (id)mhaMatMulSourcesQKV;
- (unsigned long long)mhaModelDimension;
- (id)mhaMultiGPUChildOps;
- (id)mhaQKSoftmaxDeviceOps;
- (id)mhaQKSoftmaxResultMatrix;
- (id)mhaReduceSumKernel;
- (id)mhaSourcesQKV;
- (unsigned long long)mhaValueDimension;
- (void)setMhaAttentionBiasTensors:(id)arg1;
- (void)setMhaBiasAddKernel:(id)arg1;
- (void)setMhaDropoutForwardKernel:(id)arg1;
- (void)setMhaDropoutGradientKernel:(id)arg1;
- (void)setMhaDropoutSource:(id)arg1;
- (void)setMhaDropoutState:(id)arg1;
- (void)setMhaHasAttentionMask:(bool)arg1;
- (void)setMhaHasAttnBias:(bool)arg1;
- (void)setMhaHasBias:(bool)arg1;
- (void)setMhaHasKeyMask:(bool)arg1;
- (void)setMhaHasZeroAttention:(bool)arg1;
- (void)setMhaHeadCount:(unsigned long long)arg1;
- (void)setMhaInputProjResults:(id)arg1;
- (void)setMhaKeyDimension:(unsigned long long)arg1;
- (void)setMhaMatMulForwardKernels:(id)arg1;
- (void)setMhaMatMulGradientKernels:(id)arg1;
- (void)setMhaMatMulKernel:(id)arg1;
- (void)setMhaMatMulSecondaryGradientKernels:(id)arg1;
- (void)setMhaMatMulSourcesQKV:(id)arg1;
- (void)setMhaModelDimension:(unsigned long long)arg1;
- (void)setMhaMultiGPUChildOps:(id)arg1;
- (void)setMhaQKSoftmaxDeviceOps:(id)arg1;
- (void)setMhaQKSoftmaxResultMatrix:(id)arg1;
- (void)setMhaReduceSumKernel:(id)arg1;
- (void)setMhaSourcesQKV:(id)arg1;
- (void)setMhaValueDimension:(unsigned long long)arg1;

@end