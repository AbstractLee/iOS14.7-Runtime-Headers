/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetworkMontreal {
    long long  _cosAngleFeatureIndex;
    NSString * _directionalFeaturesInputName;
    long long  _distanceFeatureIndex;
    long long  _endpointFeatureIndex;
    long long  _sinAngleFeatureIndex;
    NSString * _textStrokeProbabilityOutputName;
}

@property (nonatomic, readonly) long long cosAngleFeatureIndex;
@property (nonatomic, readonly, retain) NSString *directionalFeaturesInputName;
@property (nonatomic, readonly) long long distanceFeatureIndex;
@property (nonatomic, readonly) long long endpointFeatureIndex;
@property (nonatomic, readonly) long long sinAngleFeatureIndex;
@property (nonatomic, readonly, retain) NSString *textStrokeProbabilityOutputName;

- (struct vector<float, std::__1::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float>> { float *x_3_1_1; } x3; })_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id*)arg4;
- (bool)classifyStrokesInDrawing:(id)arg1 outTextStrokeProbabilities:(struct vector<double, std::__1::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::__1::allocator<double>> { double *x_3_1_1; } x3; }*)arg2 cancellationBlock:(id /* block */)arg3;
- (long long)cosAngleFeatureIndex;
- (void)dealloc;
- (id)directionalFeaturesInputName;
- (long long)distanceFeatureIndex;
- (long long)endpointFeatureIndex;
- (id)initWithModelName:(id)arg1;
- (long long)maxSequenceLength;
- (id)normalizedDrawing:(id)arg1 targetHeight:(double)arg2 interpolationDistance:(double)arg3 outputPointMap:(struct vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>>, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>>>> { struct map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>> {} *x1; struct map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>> {} *x2; struct __compressed_pair<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>> *, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>>>> { struct map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long>>> {} *x_3_1_1; } x3; }*)arg4;
- (long long)sinAngleFeatureIndex;
- (id)textStrokeProbabilityOutputName;
- (long long)windowOverlap;

@end
