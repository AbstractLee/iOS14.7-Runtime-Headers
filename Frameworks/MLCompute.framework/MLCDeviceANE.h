/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface MLCDeviceANE : NSObject <MLCEngineDispatch, MLCLayerOperations, MLComputeEngineControl, MLComputeEngineOptimizerUpdate, NSCopying> {
    _ANEClient * _clientConnection;
    NSArray * _deviceList;
    int  _deviceType;
}

@property (nonatomic, readonly) _ANEClient *clientConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceList;
@property (nonatomic, readonly) int deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)hasANE;

- (void).cxx_destruct;
- (id)ANERequestWithModelAttributes:(id)arg1 procedureName:(id)arg2 tensorLabelToIOSurfaceMap:(id)arg3;
- (bool)addInputs:(id)arg1 toNetwork:(id)arg2;
- (bool)addOutputs:(id)arg1 toNetwork:(id)arg2;
- (bool)allocateDeviceMemoryForSourceAndResultTensorsOfLayer:(id)arg1 model:(id)arg2 tensorLabelToIOSurfaceMap:(id*)arg3;
- (void)allocateDeviceMemoryForTensor:(id)arg1;
- (void)allocateDeviceMemoryForTensor:(id)arg1 modelAttributes:(id)arg2 procedureIndex:(unsigned long long)arg3 isInput:(bool)arg4;
- (id)allocateIOSurfaceForTensor:(id)arg1 modelAttributes:(id)arg2 procedureIndex:(unsigned long long)arg3 isInput:(bool)arg4;
- (unsigned long long)allocatedDeviceDataSizeForTraining:(bool)arg1 layer:(id)arg2;
- (id)arithmeticLayerWithOperation:(int)arg1 activationDescriptor:(id)arg2;
- (id)batchNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
- (void)broadcastTensor:(id)arg1;
- (void)broadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2;
- (bool)buildProcedureForFusedLayers:(id)arg1 graph:(id)arg2 liveInputs:(id)arg3 liveOutputs:(id)arg4;
- (bool)buildProcedureWithFusedLayer:(id)arg1 weightFileHandles:(id)arg2 toPlist:(id)arg3;
- (bool)buildProcedureWithLayer:(id)arg1 weightFileHandles:(id)arg2 toPlist:(id)arg3;
- (id)clientConnection;
- (void)commitAndWaitForCompletion:(id /* block */)arg1;
- (void)commitAndWaitForCompletion:(id /* block */)arg1 enableProfiling:(bool)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
- (void)commitWithCompletionHandler:(id /* block */)arg1 enableProfiling:(bool)arg2 graphExecutionTime:(id)arg3 graphResultTensor:(id)arg4;
- (void)commitWithProfiling:(bool)arg1 graphExecutionTime:(id)arg2;
- (id)compareLayerWithOperation:(int)arg1;
- (bool)compileLayerDeviceOps:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (bool)compileOptimizerDeviceOps:(id)arg1;
- (id)concatLayerWithConcatDimension:(unsigned long long)arg1 sourceShapeCount:(unsigned long long)arg2;
- (void)convertUpdatesToTensorDataForLayer:(id)arg1;
- (void)convertUpdatesToTensorDataForTensorParameters:(id)arg1;
- (id)convolutionLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (id)convolutionTransposeLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createOptimizerDeviceDataForTensor:(id)arg1 optimizer:(id)arg2 optimizerData:(id)arg3 isVector:(bool)arg4;
- (void)deallocateDeviceMemoryForTensor:(id)arg1;
- (id)description;
- (id)deviceList;
- (unsigned long long)deviceMemorySizeForTensor:(id)arg1;
- (unsigned long long)deviceMemorySizeForTensor:(id)arg1 deviceIndex:(unsigned long long)arg2;
- (int)deviceType;
- (void)dispatchBroadcastTensor:(id)arg1;
- (void)dispatchBroadcastTensor:(id)arg1 batchSize:(unsigned long long)arg2;
- (void)dispatchForwardAndGradientLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultGradientTensor:(id)arg7 resultTensorIsTemporary:(bool)arg8 resultTensorAllocate:(bool)arg9;
- (void)dispatchForwardCompareLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 resultTensor:(id)arg4 compareOp:(int)arg5 resultTensorIsTemporary:(bool)arg6 resultTensorAllocate:(bool)arg7 forTraining:(bool)arg8;
- (void)dispatchForwardConcatLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (void)dispatchForwardEmbeddingLayer:(id)arg1 weight:(id)arg2 sourceTensor:(id)arg3 resultTensor:(id)arg4;
- (void)dispatchForwardFullyConnectedLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5 forTraining:(bool)arg6;
- (void)dispatchForwardFusedArithmeticLayerNormalizationLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5 forTraining:(bool)arg6;
- (void)dispatchForwardLayer:(id)arg1;
- (void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardLayer:(id)arg1 sourceTensor:(id)arg2 secondaryTensor:(id)arg3 tertiaryTensor:(id)arg4 resultTensor:(id)arg5 resultTensorIsTemporary:(bool)arg6 resultStateIsTemporary:(bool)arg7 resultTensorAllocate:(bool)arg8 forTraining:(bool)arg9;
- (void)dispatchForwardLossLayer:(id)arg1 sourceTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultTensor:(id)arg6 resultTensorIsTemporary:(bool)arg7 resultStateIsTemporary:(bool)arg8 resultTensorAllocate:(bool)arg9 forTraining:(bool)arg10;
- (void)dispatchForwardMHALayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardMatMulLayer:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchForwardReduceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 reductionType:(int)arg4 reduceDimensions:(id)arg5 resultTensorIsTemporary:(bool)arg6 resultTensorAllocate:(bool)arg7 forTraining:(bool)arg8;
- (void)dispatchForwardReshapeLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardSelectLayer:(id)arg1 conditionTensor:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchForwardSliceLayer:(id)arg1 sourceTensor:(id)arg2 resultTensor:(id)arg3 resultTensorAllocate:(bool)arg4 forTraining:(bool)arg5;
- (void)dispatchForwardSplitLayer:(id)arg1 sourceTensor:(id)arg2 resultTensors:(id)arg3;
- (void)dispatchGradientConcatLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3;
- (void)dispatchGradientEmbeddingLayer:(id)arg1 sourceGradientTensor:(id)arg2;
- (void)dispatchGradientFullyConnectedLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 secondaryResultGradientTensor:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchGradientLossLayer:(id)arg1 sourceGradientTensor:(id)arg2 labelsTensor:(id)arg3 labelsTensorStride:(unsigned long long)arg4 weightsTensor:(id)arg5 resultGradientTensor:(id)arg6 resultTensorIsTemporary:(bool)arg7 resultTensorAllocate:(bool)arg8;
- (void)dispatchGradientMHALayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchGradientMatMulLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientReduceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 reductionType:(int)arg4 reduceDimensions:(id)arg5 resultTensorIsTemporary:(bool)arg6 resultTensorAllocate:(bool)arg7;
- (void)dispatchGradientReshapeLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchGradientSelectLayer:(id)arg1 conditionTensor:(id)arg2 sourceGradientTensor:(id)arg3 resultGradientTensors:(id)arg4 resultTensorIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6;
- (void)dispatchGradientSliceLayer:(id)arg1 sourceGradientTensor:(id)arg2 resultGradientTensor:(id)arg3 resultTensorAllocate:(bool)arg4;
- (void)dispatchGradientSplitLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensor:(id)arg3;
- (void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultStateIsTemporary:(bool)arg5 resultTensorAllocate:(bool)arg6 forTraining:(bool)arg7;
- (void)dispatchRNNForwardLayer:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchRNNGradientLayer:(id)arg1 sourceGradientTensors:(id)arg2 resultGradientTensors:(id)arg3 resultTensorIsTemporary:(bool)arg4 resultTensorAllocate:(bool)arg5;
- (void)dispatchReadTensor:(id)arg1 targetBuffer:(void*)arg2 batchSize:(unsigned long long)arg3;
- (id)dropoutLayerWithRate:(float)arg1 seed:(unsigned long long)arg2;
- (id)fullyConnectedLayerWithDescriptor:(id)arg1 weights:(id)arg2 biasTerms:(id)arg3;
- (void)fuseLayersForInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2;
- (void)fuseLayersForTrainingGraph:(id)arg1 stopGradientTensorList:(id)arg2;
- (id)fusedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 numOfFeatureChannels:(unsigned long long)arg2 mean:(id)arg3 variance:(id)arg4 beta:(id)arg5 gamma:(id)arg6 varianceEpsilon:(float)arg7 momentum:(float)arg8;
- (id)fusedConvolutionAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4;
- (id)fusedConvolutionBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10;
- (id)fusedFullyConnectedAndNeuronLayerWithDescriptor:(id)arg1 convolutionDescriptor:(id)arg2 weights:(id)arg3 biasTerms:(id)arg4;
- (id)fusedFullyConnectedBatchNormalizationAndNeuronLayerWithDescriptor:(id)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7 neuronDescriptor:(id)arg8 weights:(id)arg9 biasTerms:(id)arg10;
- (id)gramMatrixLayerWithScaleFactor:(float)arg1;
- (id)groupNormalizationLayerWithFeatureChannelCount:(unsigned long long)arg1 groupCount:(unsigned long long)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5;
- (id)imageReshapeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCorners:(bool)arg3;
- (void)incrementReadCountForGradientState:(id)arg1 increment:(long long)arg2;
- (void)incrementReadCountForTensorDeviceMemory:(id)arg1 increment:(long long)arg2;
- (id)initWithType:(int)arg1;
- (id)instanceNormalizationLayerWithChannelCount:(unsigned long long)arg1 mean:(id)arg2 variance:(id)arg3 beta:(id)arg4 gamma:(id)arg5 varianceEpsilon:(float)arg6 momentum:(float)arg7;
- (bool)isDeviceMemorySharableBetweenSourceAndGradientTensor:(id)arg1 sourceTensor:(id)arg2;
- (id)layerNormalizationLayerWithNormalizedShape:(id)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 isFusedWithArithmeticLayer:(bool)arg5;
- (id)lossLayerWithDescriptor:(id)arg1;
- (id)lossYOLOLayerWithDescriptor:(id)arg1;
- (id)lstmLayerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biasTerms:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7;
- (id)matMulLayerWithDescriptor:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 inferenceOnly:(bool)arg4;
- (id)multiheadAttentionLayerWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attnBias:(id)arg4 inferenceOnly:(bool)arg5;
- (bool)needToAllocateDeviceMemoryForTensor:(id)arg1;
- (id)neuronLayerWithDescriptor:(id)arg1;
- (unsigned long long)numDevices;
- (unsigned long long)numberOfDevices;
- (id)optimizerAdamWithDescriptor:(id)arg1 beta1:(double)arg2 beta2:(double)arg3 epsilon:(float)arg4 timeStep:(unsigned long long)arg5;
- (id)optimizerRMSPropWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(bool)arg5;
- (id)optimizerSGDWithDescriptor:(id)arg1 momentunScale:(float)arg2 useNesterovMomentum:(bool)arg3;
- (id)paddingLayerWithPaddingType:(int)arg1 paddingLeft:(unsigned long long)arg2 paddingRight:(unsigned long long)arg3 paddingTop:(unsigned long long)arg4 paddingBottom:(unsigned long long)arg5 constantValue:(float)arg6;
- (id)partitionInferenceGraph:(id)arg1 startAtLayerIndex:(unsigned long long)arg2 aneDevice:(id)arg3 secondaryDevice:(id)arg4;
- (id)poolingLayerWithDescriptor:(id)arg1 paddingSizes:(unsigned long long*)arg2;
- (bool)postProcessCompiledGraph:(id)arg1 compilerOptions:(unsigned long long)arg2;
- (bool)procedureInformationWithModelAttributes:(id)arg1 procedureName:(id)arg2 procedureID:(unsigned long long*)arg3 procedureInputSymbols:(id*)arg4 procedureInputSymbolIndices:(id*)arg5 procedureOutputSymbols:(id*)arg6 procedureOutputSymbolIndices:(id*)arg7;
- (id)readTensor:(id)arg1;
- (id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2;
- (id)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4;
- (void)readTensor:(id)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void*)arg3 batchSize:(unsigned long long)arg4 reduceOverBatch:(bool)arg5;
- (void)readTensor:(id)arg1 targetBuffer:(void*)arg2;
- (id)reductionLayerWithReduceType:(int)arg1 dimensions:(id)arg2 sourceShapeCount:(unsigned long long)arg3;
- (void)reloadParameterDataFromHostToDeviceMemoryForTensor:(id)arg1;
- (void)resetLayer:(id)arg1;
- (id)reshapeLayerWithShape:(id)arg1;
- (bool)setConvolutionLayerOptimizerDataForDeviceOps:(id)arg1 weights:(id)arg2 bias:(id)arg3;
- (void)setDeviceMemoryForTensor:(id)arg1 data:(id)arg2;
- (bool)setLSTMLayerOptimizerDataForDeviceOps:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biasTerms:(id)arg4;
- (bool)setMHALayerOptimizerDataForDeviceOps:(id)arg1 optimizerDataForWeights:(id)arg2 optimizerDataForBias:(id)arg3;
- (bool)setNormalizationLayerOptimizerDataForDeviceOps:(id)arg1 beta:(id)arg2 gamma:(id)arg3;
- (void)setOptimizerLearningRate:(id)arg1 learningRate:(float)arg2;
- (void)setOptimizerTimeStep:(id)arg1 timeStep:(unsigned long long)arg2;
- (bool)shareDeviceMemoryWithResultTensor:(id)arg1 sourceTensor:(id)arg2;
- (bool)shareSourceAndResultGradientTensorDeviceMemory:(id)arg1 sourceTensor:(id)arg2 resultGradientTensor:(id)arg3;
- (void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)signalNextEvent;
- (id)sliceLayerWithbegin:(id)arg1 end:(id)arg2 stride:(id)arg3 inferenceOnly:(bool)arg4;
- (id)softmaxLayerWithOperation:(int)arg1 dimension:(unsigned long long)arg2 sourceShapeCount:(unsigned long long)arg3;
- (void)sumSharedGradientsForConvolutionLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2;
- (void)sumSharedGradientsForNormalizationLayerTensorParameter:(id)arg1 layerIndexForSummedGradients:(unsigned long long)arg2 isBetaTensor:(bool)arg3;
- (void)synchronizeOptimizerUpdatesForTensor:(id)arg1;
- (bool)synchronizeTensor:(id)arg1;
- (void)synchronizeUpdatesForLayer:(id)arg1;
- (bool)transferTensor:(id)arg1 fromDevice:(id)arg2;
- (id)transposeLayerWithShape:(id)arg1;
- (void)updateBatchNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4 meanTensor:(id)arg5 varianceTensor:(id)arg6;
- (void)updateConvolutionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
- (void)updateEmbeddingLayer:(id)arg1 weightsParameter:(id)arg2 optimizer:(id)arg3;
- (void)updateFullyConnectedLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
- (void)updateGroupNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
- (void)updateInstanceNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
- (void)updateLayerNormalizationLayer:(id)arg1 optimizer:(id)arg2 betaParameter:(id)arg3 gammaParameter:(id)arg4;
- (void)updateMultiheadAttentionLayer:(id)arg1 optimizer:(id)arg2 weightsParameter:(id)arg3 biasesParameter:(id)arg4;
- (void)updateRNNLayer:(id)arg1 optimizer:(id)arg2 inputWeightsParameter:(id)arg3 hiddenWeightsParameter:(id)arg4 biasesParameter:(id)arg5;
- (void)updateTensorParameter:(id)arg1 optimizer:(id)arg2 gradient:(id)arg3;
- (bool)updateTensorsForFusedLayers:(id)arg1 ofInferenceGraph:(id)arg2;
- (id)upsampleLayerWithScaleFactorX:(float)arg1 scaleFactorY:(float)arg2 sampleMode:(int)arg3 alignCorners:(bool)arg4;
- (void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)waitForOthers;
- (bool)writeScalesAndBiasesOfGocUnit:(id)arg1 tensorWithBiases:(id)arg2 tensorWithScales:(id)arg3 weightFileHandle:(id)arg4;
- (void)writeToAllDevices:(id)arg1 allocateData:(bool)arg2 batchSize:(unsigned long long)arg3;
- (void)writeToDevice:(id)arg1 toDeviceIndex:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;
- (bool)writeWeightsOfConvolutionLayer:(id)arg1 weightFileHandles:(id)arg2;
- (bool)writeWeightsOfLayer:(id)arg1 weightFileHandles:(id)arg2 network:(id)arg3;
- (bool)writeWeightsOfLayerNormalizationLayer:(id)arg1 weightFileHandle:(id)arg2 network:(id)arg3;
- (bool)writeWeightsOfNormalizationLayer:(id)arg1 weightFileHandle:(id)arg2;

@end
