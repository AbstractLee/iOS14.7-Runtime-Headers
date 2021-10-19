/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer> {
    unsigned long long  _domainSize;
    double  _epsilon;
    double  _flipProbability;
    struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> { 
        unsigned int __x_[624]; 
        unsigned long long __i_; 
    }  _rng;
}

+ (id)oheBitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;

- (id).cxx_construct;
- (id)description;
- (unsigned long long)drawNumberOfFlippedBits;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2;
- (id)randomize:(id)arg1;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWithMessageIndex:(unsigned long long)arg1 numberOfFlippedBits:(unsigned long long)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end