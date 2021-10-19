/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraph : NSObject {
    struct OpBuilder { struct MLIRContext {} *x1; struct Block {} *x2; struct ilist_iterator<llvm::ilist_detail::node_options<mlir::Operation, false, false, void>, false, false> { struct ilist_node_impl<llvm::ilist_detail::node_options<mlir::Operation, false, false, void>> {} *x_3_1_1; } x3; struct Listener {} *x4; } * _builder;
    unsigned long long  _compilerOptions;
    struct MLIRContext { 
        struct unique_ptr<mlir::MLIRContextImpl, std::__1::default_delete<mlir::MLIRContextImpl>> { 
            struct __compressed_pair<mlir::MLIRContextImpl *, std::__1::default_delete<mlir::MLIRContextImpl>> { 
                struct MLIRContextImpl {} *__value_; 
            } __ptr_; 
        } impl; 
    }  _context;
    NSMutableArray * _executableCache;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _graphMutex;
    struct OwningModuleRef { 
        struct ModuleOp { 
            struct Operation {} *state; 
        } module; 
    }  _module;
    NSMutableArray * _operations;
    unsigned long long  _options;
    NSMutableArray * _placeholderArray;
    NSMutableDictionary * _placeholderMap;
    struct MPSSymbolTable { struct StringMap<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, llvm::MallocAllocator> { struct StringMapEntryBase {} **x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; struct MallocAllocator { } x_1_1_6; } x1; } * _symbolTable;
    NSMutableArray * _traininableHighLevelOpVariables;
    NSMutableArray * _variableOps;
    NSMutableDictionary * _variableOpsMap;
}

@property unsigned long long compilerOptions;
@property unsigned long long options;
@property (nonatomic, readonly) NSArray *placeholderTensors;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)absoluteWithTensor:(id)arg1 name:(id)arg2;
- (id)acosWithTensor:(id)arg1 name:(id)arg2;
- (id)acoshWithTensor:(id)arg1 name:(id)arg2;
- (id)adamAssignWithInputVariableTensor:(id)arg1 momentumVariableTensor:(id)arg2 velocityVariableTensor:(id)arg3 updates:(id)arg4 name:(id)arg5;
- (id)adamUpdateWithCurrentLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 epsilonTensor:(id)arg4 valuesTensor:(id)arg5 momentumTensor:(id)arg6 velocityTensor:(id)arg7 gradientTensor:(id)arg8 name:(id)arg9;
- (id)adamUpdateWithLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 epsilonTensor:(id)arg4 beta1PowerTensor:(id)arg5 beta2PowerTensor:(id)arg6 valuesTensor:(id)arg7 momentumTensor:(id)arg8 velocityTensor:(id)arg9 gradientTensor:(id)arg10 name:(id)arg11;
- (id)adamUpdateWithLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 epsilonTensor:(id)arg4 iterationTensor:(id)arg5 valuesTensor:(id)arg6 momentumTensor:(id)arg7 velocityTensor:(id)arg8 gradientTensor:(id)arg9 name:(id)arg10;
- (id)additionWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)applyAdamWithCurrentLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 epsilonTensor:(id)arg4 variable:(id)arg5 momentumVariable:(id)arg6 velocityVariable:(id)arg7 gradientTensor:(id)arg8 name:(id)arg9;
- (id)applyAdamWithLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 epsilonTensor:(id)arg4 beta1PowerTensor:(id)arg5 beta2PowerTensor:(id)arg6 variable:(id)arg7 momentumVariable:(id)arg8 velocityVariable:(id)arg9 gradientTensor:(id)arg10 name:(id)arg11;
- (id)applyAdamWithLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 epsilonTensor:(id)arg4 iterationTensor:(id)arg5 variable:(id)arg6 momentumVariable:(id)arg7 velocityVariable:(id)arg8 gradientTensor:(id)arg9 name:(id)arg10;
- (id)applyStochasticGradientDescentWithLearningRateTensor:(id)arg1 variable:(id)arg2 gradientTensor:(id)arg3 name:(id)arg4;
- (id)asinWithTensor:(id)arg1 name:(id)arg2;
- (id)asinhWithTensor:(id)arg1 name:(id)arg2;
- (id)assignVariable:(id)arg1 withValueOfTensor:(id)arg2 name:(id)arg3;
- (id)atan2WithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)atanWithTensor:(id)arg1 name:(id)arg2;
- (id)atanhWithTensor:(id)arg1 name:(id)arg2;
- (id)avgPooling2DGradientWithGradientTensor:(id)arg1 sourceTensor:(id)arg2 descriptor:(id)arg3 name:(id)arg4;
- (id)avgPooling2DLayerWithTensor:(id)arg1 kernelSizes:(id)arg2 strides:(id)arg3 paddingStyle:(unsigned long long)arg4 dataLayout:(unsigned long long)arg5 name:(id)arg6;
- (id)avgPooling2DWithSourceTensor:(id)arg1 descriptor:(id)arg2 name:(id)arg3;
- (id)batchNormalizationLayerWithTensor:(id)arg1 batchNormalizationGammaInitializer:(id)arg2 batchNormalizationBetaInitializer:(id)arg3 batchNormalizationMeanInitializer:(id)arg4 batchNormalizationVarianceInitializer:(id)arg5 batchNormalizationEpsilon:(double)arg6 dataLayout:(unsigned long long)arg7 name:(id)arg8;
- (id)broadcastGradientArgsForPrimaryTensor:(id)arg1 withSecondaryTensor:(id)arg2 name:(id)arg3;
- (id)broadcastTensor:(id)arg1 toShape:(id)arg2 name:(id)arg3;
- (id)broadcastTensor:(id)arg1 toShapeTensor:(id)arg2 name:(id)arg3;
- (id)castTensor:(id)arg1 toType:(unsigned int)arg2 name:(id)arg3;
- (id)ceilWithTensor:(id)arg1 name:(id)arg2;
- (id)clampWithTensor:(id)arg1 minValueTensor:(id)arg2 maxValueTensor:(id)arg3 name:(id)arg4;
- (id)compileWithDevice:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4;
- (unsigned long long)compilerOptions;
- (id)concatTensor:(id)arg1 withTensor:(id)arg2 dimension:(unsigned long long)arg3 name:(id)arg4;
- (id)concatTensors:(id)arg1 dimension:(unsigned long long)arg2 name:(id)arg3;
- (id)constantWithData:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3;
- (id)constantWithScalar:(double)arg1 dataType:(unsigned int)arg2;
- (id)constantWithScalar:(double)arg1 shape:(id)arg2 dataType:(unsigned int)arg3;
- (id)convolution2DDataGradientWithIncomingGradientTensor:(id)arg1 weightsTensor:(id)arg2 outputShape:(id)arg3 forwardConvolutionDescriptor:(id)arg4 name:(id)arg5;
- (id)convolution2DDataGradientWithIncomingGradientTensor:(id)arg1 weightsTensor:(id)arg2 outputShapeTensor:(id)arg3 forwardConvolutionDescriptor:(id)arg4 name:(id)arg5;
- (id)convolution2DLayerWithTensor:(id)arg1 kernelSizes:(id)arg2 outputChannelCount:(unsigned long long)arg3 strides:(id)arg4 activationType:(unsigned int)arg5 weightsInitializer:(id)arg6 biasesInitializer:(id)arg7 batchNormalizationGammaInitializer:(id)arg8 batchNormalizationBetaInitializer:(id)arg9 batchNormalizationMeanInitializer:(id)arg10 batchNormalizationVarianceInitializer:(id)arg11 batchNormalizationEpsilon:(double)arg12 paddingStyle:(unsigned long long)arg13 dataLayout:(unsigned long long)arg14 weightsLayout:(unsigned long long)arg15 name:(id)arg16;
- (id)convolution2DLayerWithTensor:(id)arg1 kernelSizes:(id)arg2 outputChannelCount:(unsigned long long)arg3 strides:(id)arg4 activationType:(unsigned int)arg5 weightsInitializer:(id)arg6 biasesInitializer:(id)arg7 paddingStyle:(unsigned long long)arg8 dataLayout:(unsigned long long)arg9 weightsLayout:(unsigned long long)arg10 name:(id)arg11;
- (id)convolution2DLayerWithTensor:(id)arg1 kernelSizes:(id)arg2 outputChannelCount:(unsigned long long)arg3 strides:(id)arg4 dilationRates:(id)arg5 groups:(unsigned long long)arg6 activationType:(unsigned int)arg7 weightsInitializer:(id)arg8 biasesInitializer:(id)arg9 batchNormalizationGammaInitializer:(id)arg10 batchNormalizationBetaInitializer:(id)arg11 batchNormalizationMeanInitializer:(id)arg12 batchNormalizationVarianceInitializer:(id)arg13 batchNormalizationEpsilon:(double)arg14 paddingStyle:(unsigned long long)arg15 dataLayout:(unsigned long long)arg16 weightsLayout:(unsigned long long)arg17 name:(id)arg18;
- (id)convolution2DWeightsGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 outputShape:(id)arg3 forwardConvolutionDescriptor:(id)arg4 name:(id)arg5;
- (id)convolution2DWeightsGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 outputShapeTensor:(id)arg3 forwardConvolutionDescriptor:(id)arg4 name:(id)arg5;
- (id)convolution2DWithDefaultBatchNormalizationLayerWithTensor:(id)arg1 kernelSizes:(id)arg2 outputChannelCount:(unsigned long long)arg3 strides:(id)arg4 activationType:(unsigned int)arg5 weightsInitializer:(id)arg6 biasesInitializer:(id)arg7 paddingStyle:(unsigned long long)arg8 dataLayout:(unsigned long long)arg9 weightsLayout:(unsigned long long)arg10 name:(id)arg11;
- (id)convolution2DWithSourceTensor:(id)arg1 weightsTensor:(id)arg2 descriptor:(id)arg3 name:(id)arg4;
- (id)convolutionTranspose2DDataGradientWithIncomingGradientTensor:(id)arg1 weightsTensor:(id)arg2 outputShape:(id)arg3 forwardConvolutionDescriptor:(id)arg4 name:(id)arg5;
- (id)convolutionTranspose2DWeightsGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 outputShape:(id)arg3 forwardConvolutionDescriptor:(id)arg4 name:(id)arg5;
- (id)convolutionTranspose2DWithSourceTensor:(id)arg1 weightsTensor:(id)arg2 outputShape:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (id)cosWithTensor:(id)arg1 name:(id)arg2;
- (id)coshWithTensor:(id)arg1 name:(id)arg2;
- (id)currentLearningRateWithLearningRateTensor:(id)arg1 beta1Tensor:(id)arg2 beta2Tensor:(id)arg3 beta1PowerTensor:(id)arg4 beta2PowerTensor:(id)arg5 name:(id)arg6;
- (void)dealloc;
- (id)debugDescription;
- (id)depthwiseConvolution2DDataGradientWithIncomingGradientTensor:(id)arg1 weightsTensor:(id)arg2 outputShape:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (id)depthwiseConvolution2DDataGradientWithIncomingGradientTensor:(id)arg1 weightsTensor:(id)arg2 outputShapeTensor:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (id)depthwiseConvolution2DWeightsGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 outputShape:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (id)depthwiseConvolution2DWeightsGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 outputShapeTensor:(id)arg3 descriptor:(id)arg4 name:(id)arg5;
- (id)depthwiseConvolution2DWithSourceTensor:(id)arg1 weightsTensor:(id)arg2 descriptor:(id)arg3 name:(id)arg4;
- (id)dimensionSizeOfTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)dimensionSizeOfTensor:(id)arg1 axesTensor:(id)arg2 name:(id)arg3;
- (id)divisionNoNaNWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)divisionWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)dropoutTensor:(id)arg1 rate:(double)arg2 name:(id)arg3;
- (id)dropoutTensor:(id)arg1 rateTensor:(id)arg2 name:(id)arg3;
- (void)dump;
- (void)encodeToCommandBuffer:(id)arg1 feeds:(id)arg2 targetOperations:(id)arg3 resultsDictionary:(id)arg4 executionDescriptor:(id)arg5;
- (id)encodeToCommandBuffer:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4 executionDescriptor:(id)arg5;
- (id)equalWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)erfWithTensor:(id)arg1 name:(id)arg2;
- (id)exponentBase10WithTensor:(id)arg1 name:(id)arg2;
- (id)exponentBase2WithTensor:(id)arg1 name:(id)arg2;
- (id)exponentWithTensor:(id)arg1 name:(id)arg2;
- (id)floorModuloWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)floorWithTensor:(id)arg1 name:(id)arg2;
- (id)fullyConnectedLayerWithTensor:(id)arg1 outputChannelCount:(unsigned long long)arg2 activationType:(unsigned int)arg3 weightsInitializer:(id)arg4 biasesInitializer:(id)arg5 name:(id)arg6;
- (id)gatherNDWithUpdatesTensor:(id)arg1 indicesTensor:(id)arg2 batchDimensions:(unsigned long long)arg3 name:(id)arg4;
- (id)gatherWithUpdatesTensor:(id)arg1 indicesTensor:(id)arg2 axis:(unsigned long long)arg3 batchDimensions:(unsigned long long)arg4 name:(id)arg5;
- (id)gradientForPrimaryTensor:(id)arg1 withSecondaryTensor:(id)arg2 name:(id)arg3;
- (id)gradientForPrimaryTensor:(id)arg1 withTensors:(id)arg2 name:(id)arg3;
- (id)greaterThanOrEqualToWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)greaterThanWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)identityTensor:(id)arg1 name:(id)arg2;
- (id)identityWithTensor:(id)arg1 name:(id)arg2;
- (id)init;
- (id)isFiniteWithTensor:(id)arg1 name:(id)arg2;
- (id)isInfiniteWithTensor:(id)arg1 name:(id)arg2;
- (id)isNaNWithTensor:(id)arg1 name:(id)arg2;
- (id)lessThanOrEqualToWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)lessThanWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)logarithmBase10WithTensor:(id)arg1 name:(id)arg2;
- (id)logarithmBase2WithTensor:(id)arg1 name:(id)arg2;
- (id)logarithmWithTensor:(id)arg1 name:(id)arg2;
- (id)logicalANDWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)logicalNANDWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)logicalNORWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)logicalORWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)logicalXNORWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)logicalXORWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)mathOpsWithTensors:(id)arg1 mathOpType:(unsigned long long)arg2 name:(id)arg3;
- (id)matrixMultiplicationPrimaryGradientWithIncomingGradientTensor:(id)arg1 primaryTensor:(id)arg2 secondaryTensor:(id)arg3 name:(id)arg4;
- (id)matrixMultiplicationSecondaryGradientWithIncomingGradientTensor:(id)arg1 primaryTensor:(id)arg2 secondaryTensor:(id)arg3 name:(id)arg4;
- (id)matrixMultiplicationWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)maxPooling2DGradientWithGradientTensor:(id)arg1 sourceTensor:(id)arg2 descriptor:(id)arg3 name:(id)arg4;
- (id)maxPooling2DLayerWithTensor:(id)arg1 kernelSizes:(id)arg2 strides:(id)arg3 paddingStyle:(unsigned long long)arg4 dataLayout:(unsigned long long)arg5 name:(id)arg6;
- (id)maxPooling2DWithSourceTensor:(id)arg1 descriptor:(id)arg2 name:(id)arg3;
- (id)maximumWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)meanOfTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)minimumWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)moduloWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)momentumUpdateWithBetaTensor:(id)arg1 momentumTensor:(id)arg2 gradientTensor:(id)arg3 name:(id)arg4;
- (id)multiplicationWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)negativeWithTensor:(id)arg1 name:(id)arg2;
- (id)normalizationBetaGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 reductionAxes:(id)arg3 name:(id)arg4;
- (id)normalizationGammaGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 meanTensor:(id)arg3 varianceTensor:(id)arg4 reductionAxes:(id)arg5 epsilon:(float)arg6 name:(id)arg7;
- (id)normalizationGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 meanTensor:(id)arg3 varianceTensor:(id)arg4 gammaTensor:(id)arg5 gammaGradientTensor:(id)arg6 betaGradientTensor:(id)arg7 reductionAxes:(id)arg8 epsilon:(float)arg9 name:(id)arg10;
- (id)normalizationWithTensor:(id)arg1 meanTensor:(id)arg2 varianceTensor:(id)arg3 gammaTensor:(id)arg4 betaTensor:(id)arg5 epsilon:(float)arg6 name:(id)arg7;
- (id)notEqualWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)notWithTensor:(id)arg1 name:(id)arg2;
- (id)oneHotWithIndicesTensor:(id)arg1 depth:(unsigned long long)arg2 axis:(unsigned long long)arg3 dataType:(unsigned int)arg4 name:(id)arg5;
- (id)oneHotWithIndicesTensor:(id)arg1 depth:(unsigned long long)arg2 axis:(unsigned long long)arg3 dataType:(unsigned int)arg4 onValue:(double)arg5 offValue:(double)arg6 name:(id)arg7;
- (id)oneHotWithIndicesTensor:(id)arg1 depth:(unsigned long long)arg2 axis:(unsigned long long)arg3 name:(id)arg4;
- (id)oneHotWithIndicesTensor:(id)arg1 depth:(unsigned long long)arg2 dataType:(unsigned int)arg3 name:(id)arg4;
- (id)oneHotWithIndicesTensor:(id)arg1 depth:(unsigned long long)arg2 dataType:(unsigned int)arg3 onValue:(double)arg4 offValue:(double)arg5 name:(id)arg6;
- (id)oneHotWithIndicesTensor:(id)arg1 depth:(unsigned long long)arg2 name:(id)arg3;
- (id)operationWithName:(id)arg1;
- (unsigned long long)options;
- (id)padGradientWithIncomingGradientTensor:(id)arg1 inputTensor:(id)arg2 paddingMode:(long long)arg3 paddingTensor:(id)arg4 constantValuesTensor:(id)arg5 name:(id)arg6;
- (id)padGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 paddingMode:(long long)arg3 leftPadding:(id)arg4 rightPadding:(id)arg5 name:(id)arg6;
- (id)padGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 paddingMode:(long long)arg3 paddingTensor:(id)arg4 name:(id)arg5;
- (id)padTensor:(id)arg1 paddingMode:(long long)arg2 paddingTensor:(id)arg3 constantValuesTensor:(id)arg4 name:(id)arg5;
- (id)padTensor:(id)arg1 withPaddingMode:(long long)arg2 leftPadding:(id)arg3 rightPadding:(id)arg4 constantValue:(double)arg5 name:(id)arg6;
- (id)paddingTensorWithLeftPadding:(id)arg1 rightPadding:(id)arg2;
- (id)placeholderTensors;
- (id)placeholderWithShape:(id)arg1 dataType:(unsigned int)arg2 name:(id)arg3;
- (id)placeholderWithShape:(id)arg1 name:(id)arg2;
- (id)powerWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)randomUniformTensorWithShape:(id)arg1 name:(id)arg2;
- (id)randomUniformTensorWithShape:(id)arg1 seed:(unsigned long long)arg2 name:(id)arg3;
- (id)randomUniformTensorWithShapeTensor:(id)arg1 name:(id)arg2;
- (id)randomUniformTensorWithShapeTensor:(id)arg1 seed:(unsigned long long)arg2 name:(id)arg3;
- (id)rankOfTensor:(id)arg1 name:(id)arg2;
- (id)reLUGradientWithIncomingGradient:(id)arg1 sourceTensor:(id)arg2 name:(id)arg3;
- (id)reLUWithTensor:(id)arg1 name:(id)arg2;
- (id)readVariable:(id)arg1 name:(id)arg2;
- (id)reciprocalWithTensor:(id)arg1 name:(id)arg2;
- (id)reductionMaximumWithTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)reductionMaximumWithTensor:(id)arg1 axis:(long long)arg2 name:(id)arg3;
- (id)reductionMinimumWithTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)reductionMinimumWithTensor:(id)arg1 axis:(long long)arg2 name:(id)arg3;
- (id)reductionProductWithTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)reductionProductWithTensor:(id)arg1 axis:(long long)arg2 name:(id)arg3;
- (id)reductionSumWithTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)reductionSumWithTensor:(id)arg1 axesTensor:(id)arg2 name:(id)arg3;
- (id)reductionSumWithTensor:(id)arg1 axis:(long long)arg2 name:(id)arg3;
- (id)reshapeTensor:(id)arg1 withShape:(id)arg2 name:(id)arg3;
- (id)reshapeTensor:(id)arg1 withShapeTensor:(id)arg2 name:(id)arg3;
- (id)resizeTensor:(id)arg1 size:(id)arg2 mode:(unsigned long long)arg3 centerResult:(bool)arg4 alignCorners:(bool)arg5 layout:(unsigned long long)arg6 name:(id)arg7;
- (id)resizeWithGradientTensor:(id)arg1 input:(id)arg2 mode:(unsigned long long)arg3 centerResult:(bool)arg4 alignCorners:(bool)arg5 layout:(unsigned long long)arg6 name:(id)arg7;
- (id)reverseSquareRootWithTensor:(id)arg1 name:(id)arg2;
- (id)rintWithTensor:(id)arg1 name:(id)arg2;
- (id)roundWithTensor:(id)arg1 name:(id)arg2;
- (id)runAsyncWithFeeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3 executionDescriptor:(id)arg4;
- (void)runAsyncWithMTLCommandQueue:(id)arg1 feeds:(id)arg2 targetOperations:(id)arg3 resultsDictionary:(id)arg4 executionDescriptor:(id)arg5;
- (id)runAsyncWithMTLCommandQueue:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4 executionDescriptor:(id)arg5;
- (id)runInternalWithMPSCommandBuffer:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4 resultsDictionary:(id)arg5 executionDescriptor:(id)arg6 mpsGraphOwnedCommandBuffer:(bool)arg7;
- (id)runInternalWithMTLCommandQueue:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4 resultsDictionary:(id)arg5 executionDescriptor:(id)arg6;
- (id)runWithFeeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3;
- (void)runWithMTLCommandQueue:(id)arg1 feeds:(id)arg2 targetOperations:(id)arg3 resultsDictionary:(id)arg4;
- (id)runWithMTLCommandQueue:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4;
- (id)scatterNDWithUpdatesTensor:(id)arg1 indicesTensor:(id)arg2 shape:(id)arg3 batchDimensions:(unsigned long long)arg4 name:(id)arg5;
- (id)selectWithPredicateTensor:(id)arg1 truePredicateTensor:(id)arg2 falsePredicateTensor:(id)arg3 name:(id)arg4;
- (void)setCompilerOptions:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)shapeOfTensor:(id)arg1 name:(id)arg2;
- (id)sigmoidGradientWithIncomingGradient:(id)arg1 sourceTensor:(id)arg2 name:(id)arg3;
- (id)sigmoidWithTensor:(id)arg1 name:(id)arg2;
- (id)signWithTensor:(id)arg1 name:(id)arg2;
- (id)signbitWithTensor:(id)arg1 name:(id)arg2;
- (id)sinWithTensor:(id)arg1 name:(id)arg2;
- (id)sinhWithTensor:(id)arg1 name:(id)arg2;
- (id)sizeOfTensor:(id)arg1 name:(id)arg2;
- (id)sliceTensor:(id)arg1 dimension:(unsigned long long)arg2 start:(long long)arg3 length:(long long)arg4 name:(id)arg5;
- (id)softMaxCrossEntropyGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 axis:(long long)arg4 reductionType:(unsigned long long)arg5 name:(id)arg6;
- (id)softMaxCrossEntropyWithSourceTensor:(id)arg1 labelsTensor:(id)arg2 axis:(long long)arg3 reductionType:(unsigned long long)arg4 name:(id)arg5;
- (id)softMaxGradientWithIncomingGradient:(id)arg1 sourceTensor:(id)arg2 axis:(long long)arg3 name:(id)arg4;
- (id)softMaxWithTensor:(id)arg1 axis:(long long)arg2 name:(id)arg3;
- (id)squareRootWithTensor:(id)arg1 name:(id)arg2;
- (id)squareWithTensor:(id)arg1 name:(id)arg2;
- (id)stitchedOpsWithBlock:(id /* block */)arg1 name:(id)arg2;
- (id)stochasticGradientDescentWithLearningRateTensor:(id)arg1 valuesTensor:(id)arg2 gradientTensor:(id)arg3 name:(id)arg4;
- (id)subtractionWithPrimaryTensor:(id)arg1 secondaryTensor:(id)arg2 name:(id)arg3;
- (id)tanWithTensor:(id)arg1 name:(id)arg2;
- (id)tanhWithTensor:(id)arg1 name:(id)arg2;
- (id)tileGradientWithIncomingGradientTensor:(id)arg1 sourceTensor:(id)arg2 withMultiplier:(id)arg3 name:(id)arg4;
- (id)tileTensor:(id)arg1 withMultiplier:(id)arg2 name:(id)arg3;
- (id)tileTensorWithMultiplier:(id)arg1;
- (id)traininableHighLevelOpVariables;
- (id)transposeTensor:(id)arg1 dimension:(unsigned long long)arg2 withDimension:(unsigned long long)arg3 name:(id)arg4;
- (id)variableOps;
- (id)variableWithData:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 name:(id)arg4;
- (id)varianceOfTensor:(id)arg1 axes:(id)arg2 name:(id)arg3;
- (id)varianceOfTensor:(id)arg1 meanTensor:(id)arg2 axes:(id)arg3 name:(id)arg4;
- (id)velocityUpdateWithBetaTensor:(id)arg1 velocityTensor:(id)arg2 gradientTensor:(id)arg3 name:(id)arg4;

@end