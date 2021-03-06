/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBEDR : NSObject {
    float  _appliedCompensation;
    float  _brightnessCap;
    float  _currentHeadroom;
    float  _currentMaxBrightness;
    float  _maxHeadroom;
    float  _panelMax;
    unsigned long long  _rampPolicy;
    float  _referenceHeadroom;
    float  _requestedHeadroom;
    float  _sdrBrightness;
    float  _secondsPerStop;
}

@property float appliedCompensation;
@property float brightnessCap;
@property float panelMax;
@property float sdrBrightness;
@property float secondsPerStop;

+ (float)animatedHeadroomForOrigin:(float)arg1 target:(float)arg2 andProgress:(float)arg3;

- (float)appliedCompensation;
- (float)availableHeadroom;
- (float)brightnessCap;
- (float)cappedHeadroomFromUncapped:(float)arg1;
- (id)copyStatusInfo;
- (id)description;
- (id)initWithRampPolicy:(unsigned long long)arg1 potentialHeadroom:(float)arg2 andReferenceHeadroom:(float)arg3;
- (float)maxHeadroom;
- (float)panelMax;
- (float)referenceHeadroom;
- (void)sanityCheck;
- (float)sdrBrightness;
- (float)secondsPerStop;
- (void)setAppliedCompensation:(float)arg1;
- (void)setBrightnessCap:(float)arg1;
- (void)setPanelMax:(float)arg1;
- (void)setSdrBrightness:(float)arg1;
- (void)setSecondsPerStop:(float)arg1;
- (bool)shouldUpdateEDRForRequestedHeadroom:(float)arg1 targetHeadroom:(float*)arg2 rampTime:(double*)arg3;
- (float)stopsFromHeadroomRatio:(float)arg1;

@end
