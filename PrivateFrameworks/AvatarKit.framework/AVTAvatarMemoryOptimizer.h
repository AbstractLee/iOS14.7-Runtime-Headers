/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatarMemoryOptimizer : NSObject {
    AVTMemoji * _memoji;
    NSMutableArray * _presetVariantPrefixes;
    NSMutableArray * _requiredPresetVariantComponents;
    NSMapTable * _requiredVariantsPerMorpher;
}

+ (void)optimizeMemoji:(id)arg1;

- (void).cxx_destruct;
- (void)applyMorphTarget:(id)arg1 weight:(float)arg2 toBaseGeometryBuffer:(void*)arg3 vertexCount:(unsigned long long)arg4;
- (void)applyMorphTarget:(id)arg1 weight:(float)arg2 toMorphTargetBuffer:(struct { float x1; float x2; float x3; }*)arg3 vertexCount:(unsigned long long)arg4;
- (void)changeTargetsAndInBetweens:(id)arg1 weights:(id)arg2 inBetweenCounts:(id)arg3 inBetweenWeights:(id)arg4 ofNode:(id)arg5 targetsToFlattenInBaseGeometry:(id)arg6 targetsToFlattenInOtherTarget:(id)arg7 nonOneWeightsOfTargetsToFlatten:(id)arg8;
- (bool)clearCPUDataAfterUpload;
- (id)flattenTarget0:(id)arg1 weight0:(float)arg2 target1:(id)arg3 weight1:(float)arg4 inMorphTarget:(id)arg5 originalMorphTarget:(id)arg6;
- (id)initWithMemoji:(id)arg1;
- (bool)keepCreasesAndCorners;
- (void)optimize;
- (void)optimizeNode:(id)arg1;
- (void)optimizeNodeHierarchy:(id)arg1;
- (void)performFlatteningInNode:(id)arg1 targetsAndInBetweens:(id)arg2 targetsToFlattenInBaseGeometry:(id)arg3 targetsToFlattenInOtherTarget:(id)arg4 nonOneWeightsOfTargetsToFlatten:(id)arg5;
- (void)preprocess;
- (void)registerRequiredVariant:(id)arg1 weight:(float)arg2 inHierarchy:(id)arg3;
- (void)resolveInBetweensForTopLevelTargetAtIndex:(unsigned long long)arg1 topLevelTargetWeight:(float)arg2 topLevelTarget:(id)arg3 inBetweenWeights:(id)arg4 inBetweenTargets:(id)arg5 block:(id /* block */)arg6;

@end