/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWCameraParameters : NSObject {
    NSDictionary * _cameraParameters;
    NSDictionary * _coreImagePortraitFilterParameters;
    NSDictionary * _landmarksParameters;
    NSDictionary * _learnedMattingParameters;
    NSDictionary * _meteorParameters;
    NSDictionary * _motionAttachmentsParameters;
    NSDictionary * _stereoDisparityParameters;
    NSDictionary * _videoStabilizationParameters;
}

@property (nonatomic, readonly) NSDictionary *cameraParameters;
@property (nonatomic, readonly) NSDictionary *cameraTuningParameters;
@property (nonatomic, readonly) int meteorHeadroomProcessingType;
@property (nonatomic, readonly) NSDictionary *motionAttachmentsParameters;
@property (nonatomic, readonly) NSDictionary *stereoDisparityParameters;
@property (nonatomic, readonly) NSDictionary *videoStabilizationParameters;

+ (void)initialize;
+ (id)sensorIDStringFromMetadata:(id)arg1;
+ (id)sensorIDStringFromModuleInfo:(id)arg1;
+ (id)sharedInstance;

- (id)_initWithModelSpecificName:(id)arg1;
- (id)cameraParameters;
- (id)cameraTuningParameters;
- (bool)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2;
- (bool)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (bool)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)coreImagePortraitFilterVersion;
- (void)dealloc;
- (int)disparityRefinementTypeForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)disparityVersion;
- (int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)focalLengthCharacterizationForStream:(id)arg1;
- (int)focusPixelDisparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)init;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)arg1;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })landmarksVersionForInferenceType:(int)arg1;
- (int)learnedMattingVersion;
- (int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)meteorHeadroomProcessingType;
- (id)motionAttachmentsParameters;
- (bool)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)sdofRenderingVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)sensorIDDictionaryForStream:(id)arg1;
- (id)stereoDisparityParameters;
- (id)videoStabilizationParameters;

@end
