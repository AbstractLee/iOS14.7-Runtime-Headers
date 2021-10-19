/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADNetworkProvider : NSObject {
    float  _highConfidenceThresholdSuggestion;
    NSDictionary * _ioBufferMap;
    bool  _isOutputInversed;
    NSMutableDictionary * _layoutNames;
    float  _lowConfidenceThresholdSuggestion;
    unsigned long long  _rawConfidenceUnits;
    NSMutableDictionary * _sizesForInput;
    NSMutableDictionary * _sizesForOutput;
    NSURL * _url;
}

@property float highConfidenceThresholdSuggestion;
@property bool isOutputInversed;
@property float lowConfidenceThresholdSuggestion;
@property unsigned long long rawConfidenceUnits;
@property (retain) NSURL *url;

+ (id)getAlternativePathForNetwork:(id)arg1 andPriority:(long long)arg2;
+ (bool)getAndVerifySizesFromConfig:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3 sizes:(id)arg4 layout:(unsigned long long*)arg5;
+ (id)getConfigFolderForNetwork:(id)arg1;
+ (id)getDefaultPathForNetwork:(id)arg1 andPriority:(long long)arg2;
+ (id)getEspressoFileNameForNetwork:(id)arg1 andPriority:(long long)arg2;
+ (id)providerForNetwork:(id)arg1 prioritization:(long long)arg2;
+ (void)updateSizeForItem:(id)arg1 fromShape:(id)arg2 forLayout:(unsigned long long)arg3 target:(id)arg4;

- (void).cxx_destruct;
- (id)bufferNameForType:(id)arg1;
- (id)configurationNameForLayout:(unsigned long long)arg1;
- (id)descriptorForBuffer:(id)arg1 isInput:(bool)arg2 pixelFormat:(unsigned int)arg3;
- (id)descriptorForBufferOfType:(id)arg1 isInput:(bool)arg2 pixelFormat:(unsigned int)arg3;
- (float)highConfidenceThresholdSuggestion;
- (id)initWithNetwork:(id)arg1 prioritization:(long long)arg2;
- (bool)isOutputInversed;
- (float)lowConfidenceThresholdSuggestion;
- (unsigned long long)rawConfidenceUnits;
- (void)setHighConfidenceThresholdSuggestion:(float)arg1;
- (void)setIsOutputInversed:(bool)arg1;
- (void)setLowConfidenceThresholdSuggestion:(float)arg1;
- (void)setRawConfidenceUnits:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeFor:(id)arg1 isInput:(bool)arg2 requestedLayout:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1 withLayout:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeForOutput:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForOutput:(id)arg1 withLayout:(unsigned long long)arg2;
- (id)supportedSizesForInput:(id)arg1;
- (id)supportedSizesForOutput:(id)arg1;
- (id)url;

@end