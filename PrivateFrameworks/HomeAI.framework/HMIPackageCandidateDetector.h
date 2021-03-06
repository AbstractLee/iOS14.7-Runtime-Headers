/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIPackageCandidateDetector : HMFObject {
    HMIBoundingBoxExtractor * _boxExtractor;
    HMIPackageCandidateDetectorConfiguration * _config;
    CIImage * _referenceImage;
    HMIAverageImage * _temporalAverageImage;
}

@property (readonly) HMIBoundingBoxExtractor *boxExtractor;
@property (readonly) HMIPackageCandidateDetectorConfiguration *config;
@property (readonly) CIImage *referenceImage;
@property (readonly) HMIAverageImage *temporalAverageImage;

- (void).cxx_destruct;
- (id)boxExtractor;
- (id)config;
- (id)detectedPackageCandidates;
- (id)initWithReferenceImage:(id)arg1 config:(id)arg2;
- (id)referenceImage;
- (id)temporalAverageImage;
- (bool)updateWithFrame:(id)arg1;

@end
