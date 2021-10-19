/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionResult : NSObject <NSSecureCoding> {
    NSNumber * _appliedImageOrientation;
    NSString * _detectedTextDescription;
    NSArray * _effectiveTextDetectionLocales;
    NSData * _equivalenceToken;
    NSSet * _evaluatedFeatureTypes;
    NSArray * _features;
    CIImage * _image;
    long long  _imageRegistrationState;
    AXMetricSession * _metricSession;
    NSObject<NSSecureCoding> * _userContext;
}

@property (nonatomic, retain) NSNumber *appliedImageOrientation;
@property (nonatomic, readonly) AXMVisionFeature *assetMetadataFeature;
@property (nonatomic, readonly) NSArray *blurFeatures;
@property (nonatomic, readonly) NSArray *brightnessFeatures;
@property (nonatomic, readonly) NSArray *captionFeatures;
@property (nonatomic, readonly) bool captionMayContainSensitiveContent;
@property (nonatomic, readonly) AXMVisionFeature *colorInfoFeature;
@property (nonatomic, retain) NSString *detectedTextDescription;
@property (nonatomic, retain) NSArray *effectiveTextDetectionLocales;
@property (nonatomic, retain) NSData *equivalenceToken;
@property (nonatomic, retain) NSSet *evaluatedFeatureTypes;
@property (nonatomic, readonly) NSArray *faceFeatures;
@property (nonatomic, readonly) NSDictionary *featureGates;
@property (nonatomic, retain) NSArray *features;
@property (nonatomic, readonly) NSArray *iconClassFeatures;
@property (nonatomic, retain) CIImage *image;
@property (nonatomic) long long imageRegistrationState;
@property (nonatomic, readonly) bool includesNSFWFeatures;
@property (nonatomic, readonly) NSString *localizedDetectedIconHint;
@property (nonatomic, readonly) NSString *localizedDetectedTextHint;
@property (nonatomic, retain) AXMetricSession *metricSession;
@property (nonatomic, readonly) NSArray *modelClassificationFeatures;
@property (nonatomic, readonly) NSArray *objectClassificationFeatures;
@property (nonatomic, readonly) NSArray *ocrFeatures;
@property (nonatomic, readonly) NSArray *sceneClassificationFeatures;
@property (nonatomic, readonly) NSArray *sensitiveContentForCaptionFeatures;
@property (nonatomic, retain) NSObject<NSSecureCoding> *userContext;

+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 metricSession:(id)arg4 userContext:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)appliedImageOrientation;
- (id)assetMetadataFeature;
- (id)blurFeatures;
- (id)brightnessFeatures;
- (id)captionFeatures;
- (bool)captionMayContainSensitiveContent;
- (id)colorInfoFeature;
- (id)description;
- (id)detectedFeatureDescriptionWithOptions:(id)arg1;
- (id)detectedTextDescription;
- (id)effectiveTextDetectionLocales;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalenceToken;
- (id)evaluatedFeatureTypes;
- (id)faceFeatures;
- (id)featureGates;
- (id)features;
- (unsigned long long)hash;
- (id)iconClassFeatures;
- (id)image;
- (long long)imageRegistrationState;
- (bool)includesNSFWFeatures;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAXMVisionResult:(id)arg1;
- (id)localizedDetectedIconHint;
- (id)localizedDetectedTextHint;
- (id)metricSession;
- (id)modelClassificationFeatures;
- (id)objectClassificationFeatures;
- (id)ocrFeatures;
- (id)sceneClassificationFeatures;
- (id)sensitiveContentFeatures;
- (id)sensitiveContentForCaptionFeatures;
- (void)setAppliedImageOrientation:(id)arg1;
- (void)setDetectedTextDescription:(id)arg1;
- (void)setEffectiveTextDetectionLocales:(id)arg1;
- (void)setEquivalenceToken:(id)arg1;
- (void)setEvaluatedFeatureTypes:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageRegistrationState:(long long)arg1;
- (void)setMetricSession:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)sortedFeatures;
- (id)userContext;

@end