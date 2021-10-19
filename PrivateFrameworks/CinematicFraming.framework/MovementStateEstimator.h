/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface MovementStateEstimator : NSObject {
    unsigned long long  _historyMaxSize;
    unsigned long long  _historySize;
    unsigned long long  _historyTailInd;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMovingStateStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastStillStartTime;
    struct Measurement { float x1; float x2; } * _measurementHistory;
    MovementStateEstimatorOptions * _options;
    long long  _state;
    float  _sumSpeeds;
}

@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (long long)_estimateNewStateForMeasurement:(struct Measurement { float x1; float x2; })arg1 oldState:(long long)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (float)averageSpeed;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (long long)processMeasurementWithPosition:(float)arg1 referenceLength:(float)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (long long)state;

@end