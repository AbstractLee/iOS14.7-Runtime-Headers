/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARWorldTrackingConfiguration : ARConfiguration {
    bool  _accuratePlaneExtentCheckEnabled;
    bool  _alwaysUsePrimaryCameraForTracking;
    long long  _appClipCodePerformanceTestingMode;
    bool  _appClipCodeTrackingEnabled;
    bool  _automaticImageScaleEstimationEnabled;
    bool  _collaborationEnabled;
    bool  _deliverRawSceneUnderstandingResults;
    bool  _depthOptimizedForStaticScene;
    bool  _depthTemporalSmoothingEnabled;
    NSSet * _detectionImages;
    NSSet * _detectionObjects;
    long long  _environmentTexturing;
    bool  _ignoreAppClipCodeURLLimitation;
    ARWorldMap * _initialWorldMap;
    bool  _lowQosSchedulingEnabled;
    long long  _maximumNumberOfTrackedImages;
    double  _minVergenceAngle;
    bool  _mlModelEnabled;
    unsigned long long  _planeDetection;
    bool  _recordForGeoTracking;
    bool  _relocalizationEnabled;
    unsigned long long  _sceneReconstruction;
    ARSceneReconstructionOptions * _sceneReconstructionOptions;
    bool  _shouldUseUltraWideIfAvailable;
    NSString * _slamConfiguration;
    bool  _userFaceTrackingEnabled;
    bool  _wantsHDREnvironmentTextures;
}

@property (getter=isAccuratePlaneExtentCheckEnabled, nonatomic) bool accuratePlaneExtentCheckEnabled;
@property (nonatomic) bool alwaysUsePrimaryCameraForTracking;
@property (nonatomic) long long appClipCodePerformanceTestingMode;
@property (nonatomic) bool appClipCodeTrackingEnabled;
@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool automaticImageScaleEstimationEnabled;
@property (getter=isCollaborationEnabled, nonatomic) bool collaborationEnabled;
@property (nonatomic) bool deliverRawSceneUnderstandingResults;
@property (nonatomic) bool depthOptimizedForStaticScene;
@property (nonatomic) bool depthTemporalSmoothingEnabled;
@property (nonatomic, copy) NSSet *detectionImages;
@property (nonatomic, copy) NSSet *detectionObjects;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) bool ignoreAppClipCodeURLLimitation;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic, retain) ARWorldMap *initialWorldMap;
@property (getter=isLowQosSchedulingEnabled, nonatomic) bool lowQosSchedulingEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic) double minVergenceAngle;
@property (getter=isMLModelEnabled, nonatomic) bool mlModelEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool recordForGeoTracking;
@property (nonatomic) bool relocalizationEnabled;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (nonatomic, retain) ARSceneReconstructionOptions *sceneReconstructionOptions;
@property (nonatomic) bool shouldUseUltraWideIfAvailable;
@property (nonatomic, copy) NSString *slamConfiguration;
@property (nonatomic) struct ARSpatialMappingParameters { long long x1; long long x2; } spatialMappingParameters;
@property (nonatomic) bool useSpatialMappingQualityMode;
@property (getter=userFaceTrackingEnabled, nonatomic) bool userFaceTrackingEnabled;
@property (nonatomic) bool wantsHDREnvironmentTextures;

+ (id)_querySupportedVideoFormats;
+ (id)_querySupportedVideoFormatsForUltraWide;
+ (id)_querySupportedVideoFormatsForUserFaceTracking;
+ (bool)isSupported;
+ (id)new;
+ (void)setShouldProvide30FPSVideoFormats:(bool)arg1;
+ (bool)shouldProvide30FPSVideoFormats;
+ (id)supportedVideoFormats;
+ (id)supportedVideoFormatsForUltraWide;
+ (id)supportedVideoFormatsForUserFaceTracking;
+ (bool)supportsAppClipCodeTracking;
+ (bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (bool)supportsFrontCameraFaceAnchors;
+ (bool)supportsSceneReconstruction:(unsigned long long)arg1;
+ (bool)supportsUserFaceTracking;

- (void).cxx_destruct;
- (long long)_depthPrioritization;
- (id)_trackingOptions;
- (bool)alwaysUsePrimaryCameraForTracking;
- (long long)appClipCodePerformanceTestingMode;
- (bool)appClipCodeTrackingEnabled;
- (bool)automaticImageScaleEstimationEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (bool)deliverRawSceneUnderstandingResults;
- (bool)depthOptimizedForStaticScene;
- (bool)depthTemporalSmoothingEnabled;
- (id)description;
- (id)detectionImages;
- (id)detectionObjects;
- (long long)environmentTexturing;
- (bool)ignoreAppClipCodeURLLimitation;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (id)imageSensorSettingsForUserFaceTracking;
- (id)init;
- (id)initialWorldMap;
- (bool)isAccuratePlaneExtentCheckEnabled;
- (bool)isCollaborationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isLowQosSchedulingEnabled;
- (bool)isMLModelEnabled;
- (long long)maximumNumberOfTrackedImages;
- (double)minVergenceAngle;
- (id)parentImageSensorSettings;
- (unsigned long long)planeDetection;
- (bool)recordForGeoTracking;
- (bool)relocalizationEnabled;
- (unsigned long long)sceneReconstruction;
- (id)sceneReconstructionOptions;
- (id)secondaryTechniques;
- (void)setAccuratePlaneExtentCheckEnabled:(bool)arg1;
- (void)setAlwaysUsePrimaryCameraForTracking:(bool)arg1;
- (void)setAppClipCodePerformanceTestingMode:(long long)arg1;
- (void)setAppClipCodeTrackingEnabled:(bool)arg1;
- (void)setAutomaticImageScaleEstimationEnabled:(bool)arg1;
- (void)setCollaborationEnabled:(bool)arg1;
- (void)setDeliverRawSceneUnderstandingResults:(bool)arg1;
- (void)setDepthOptimizedForStaticScene:(bool)arg1;
- (void)setDepthTemporalSmoothingEnabled:(bool)arg1;
- (void)setDetectionImages:(id)arg1;
- (void)setDetectionObjects:(id)arg1;
- (void)setEnvironmentTexturing:(long long)arg1;
- (void)setFrontCameraFaceAnchorsEnabled:(bool)arg1;
- (void)setIgnoreAppClipCodeURLLimitation:(bool)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setLowQosSchedulingEnabled:(bool)arg1;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setMinVergenceAngle:(double)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setRecordForGeoTracking:(bool)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setSceneReconstruction:(unsigned long long)arg1;
- (void)setSceneReconstructionOptions:(id)arg1;
- (void)setShouldUseUltraWideIfAvailable:(bool)arg1;
- (void)setSlamConfiguration:(id)arg1;
- (void)setSpatialMappingParameters:(struct ARSpatialMappingParameters { long long x1; long long x2; })arg1;
- (void)setUseSpatialMappingQualityMode:(bool)arg1;
- (void)setUserFaceTrackingEnabled:(bool)arg1;
- (void)setWantsHDREnvironmentTextures:(bool)arg1;
- (bool)shouldEnableVisionDataForImageSensorSettings:(id)arg1;
- (bool)shouldUseJasper;
- (bool)shouldUseUltraWide;
- (bool)shouldUseUltraWideIfAvailable;
- (id)slamConfiguration;
- (struct ARSpatialMappingParameters { long long x1; long long x2; })spatialMappingParameters;
- (bool)useSpatialMappingQualityMode;
- (bool)userFaceTrackingEnabled;
- (bool)wantsHDREnvironmentTextures;

@end
