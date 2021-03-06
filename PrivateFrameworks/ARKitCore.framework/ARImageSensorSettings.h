/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARImageSensorSettings : NSObject <NSCopying> {
    bool  _autoFocusEnabled;
    bool  _backFacingCameraGeometricDistortionCorrectionEnabled;
    bool  _calibrationDataOutputEnabled;
    bool  _enabled;
    float  _maxGainOverride;
    unsigned long long  _maximumNumberOfTrackedFaces;
    NSString * _metaData;
    bool  _mirrorVideoOutput;
    ARVideoFormat * _videoFormat;
    bool  _visionDataOutputEnabled;
    NSDictionary * _visionDataOutputParameters;
}

@property (nonatomic) bool autoFocusEnabled;
@property (nonatomic) bool backFacingCameraGeometricDistortionCorrectionEnabled;
@property (nonatomic) bool calibrationDataOutputEnabled;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) float maxGainOverride;
@property (nonatomic) unsigned long long maximumNumberOfTrackedFaces;
@property (nonatomic, copy) NSString *metaData;
@property (nonatomic) bool mirrorVideoOutput;
@property (nonatomic, retain) ARVideoFormat *videoFormat;
@property (nonatomic) bool visionDataOutputEnabled;
@property (nonatomic, retain) NSDictionary *visionDataOutputParameters;

- (void).cxx_destruct;
- (bool)autoFocusEnabled;
- (bool)backFacingCameraGeometricDistortionCorrectionEnabled;
- (bool)calibrationDataOutputEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithVideoFormat:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (float)maxGainOverride;
- (unsigned long long)maximumNumberOfTrackedFaces;
- (id)metaData;
- (bool)mirrorVideoOutput;
- (void)setAutoFocusEnabled:(bool)arg1;
- (void)setBackFacingCameraGeometricDistortionCorrectionEnabled:(bool)arg1;
- (void)setCalibrationDataOutputEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMaxGainOverride:(float)arg1;
- (void)setMaximumNumberOfTrackedFaces:(unsigned long long)arg1;
- (void)setMetaData:(id)arg1;
- (void)setMirrorVideoOutput:(bool)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)setVisionDataOutputEnabled:(bool)arg1;
- (void)setVisionDataOutputParameters:(id)arg1;
- (id)videoFormat;
- (bool)visionDataOutputEnabled;
- (id)visionDataOutputParameters;

@end
