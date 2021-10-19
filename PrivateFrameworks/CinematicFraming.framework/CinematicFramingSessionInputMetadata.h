/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
 */

@interface CinematicFramingSessionInputMetadata : NSObject <NSSecureCoding> {
    float  _aspectRatio;
    NSArray * _bodyDetections;
    NSDictionary * _calibrationDictionary;
    NSArray * _faceDetections;
    float  _gravityX;
    float  _gravityY;
    float  _gravityZ;
    bool  _hasGravity;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic, readonly) float aspectRatio;
@property (nonatomic, readonly) NSArray *bodyDetections;
@property (nonatomic, readonly) NSDictionary *calibrationDataDictionary;
@property (nonatomic, readonly) NSArray *faceDetections;
@property (nonatomic, readonly) float gravityX;
@property (nonatomic, readonly) float gravityY;
@property (nonatomic, readonly) float gravityZ;
@property (nonatomic, readonly) bool hasGravity;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_parseDetectedObjectsInfo:(id)arg1;
- (float)aspectRatio;
- (id)bodyDetections;
- (id)calibrationDataDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)faceDetections;
- (float)gravityX;
- (float)gravityY;
- (float)gravityZ;
- (bool)hasGravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedObjectsInfo:(id)arg1 calibrationData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 aspectRatio:(float)arg4;
- (void)setGravityX:(float)arg1 y:(float)arg2 z:(float)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end