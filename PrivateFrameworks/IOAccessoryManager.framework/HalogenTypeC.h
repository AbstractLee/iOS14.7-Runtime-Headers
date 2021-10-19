/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface HalogenTypeC : NSObject <HalogenAudioDelegate> {
    int  _AceSettlingTimeInMs;
    struct OpaqueAudioComponentInstance { } * _audioComponentInst;
    NSCondition * _audioTimeoutCond;
    int  _audioTimeoutInSec;
    int  _bitDepth;
    double  _calCurrentAmplitude;
    double  _calCurrentNoiseLevel;
    double  _calCurrentSNR;
    double  _calCurrentSignalLevel;
    double  _calVoltageAmplitude;
    double  _calVoltageNoiseLevel;
    double  _calVoltageSNR;
    double  _calVoltageSignalLevel;
    int  _calibrationSampleOffsetInFrames;
    double  _capacitanceInNanoF;
    double  _clippingScore;
    double  _compensatedImpedance;
    double  _compensatedPhase;
    unsigned int  _connect;
    NSMutableData * _currentData;
    double  _currentGainCorrection;
    double  _currentPhaseCompensation;
    double  _goertzelImpedance;
    double  _goertzelPhase;
    HalogenAudio * _halogenAudioUnit;
    HalogenCalcTypeC * _halogenCalcTypeC;
    int  _halogenResult;
    int  _initalPhaseInDegrees;
    int  _inputFrameSizeInBytes;
    bool  _isCalibrationDone;
    bool  _isInternalBuild;
    bool  _isMeasurementDone;
    int  _ldcmState;
    unsigned short  _maxOutputAmplitude;
    bool  _measureSBU;
    double  _measurementCondetSNR;
    double  _measurementCurrentAmplitude;
    double  _measurementCurrentNoiseLevel;
    double  _measurementCurrentPhase;
    double  _measurementCurrentSNR;
    double  _measurementCurrentSignalLevel;
    NSMutableString * _measurementInfoAcchalogenOutputString;
    struct { 
        int type; 
        int pin; 
        int halogenResult; 
        double voltageGainCorrection; 
        double currentGainCorrection; 
        double currentPhaseCompensation; 
        double calVoltageSNR; 
        double calCurrentSNR; 
        double calVoltageAmplitude; 
        double calCurrentAmplitude; 
        double goertzelImpedance; 
        double goertzelPhase; 
        double compensatedImpedance; 
        double compensatedPhase; 
        double resistanceInOhms; 
        double capacitanceInNanoF; 
        double measurementVoltageSNR; 
        double measurementCurrentSNR; 
        double measurementVoltageAmplitude; 
        double measurementCurrentAmplitude; 
        double measurementVoltagePhase; 
        double measurementCurrentPhase; 
        double measurementLoadImpedanceMagnitude; 
        double measurementLoadImpedancePhase; 
    }  _measurementInfoDefault;
    NSMutableString * _measurementInfoOutputString;
    double  _measurementLoadImpedanceMagnitude;
    double  _measurementLoadImpedancePhase;
    int  _measurementSampleOffsetInFrames;
    double  _measurementVoltageAmplitude;
    double  _measurementVoltageNoiseLevel;
    double  _measurementVoltagePhase;
    double  _measurementVoltageSNR;
    double  _measurementVoltageSignalLevel;
    int  _nAceSettlingSamples;
    int  _nInputChannels;
    int  _nMeasurementSamples;
    int  _nOutputChannels;
    int  _nPaddingSamples;
    int  _nTotalSamples;
    int  _nWarmupSamples;
    int  _outputFrameSizeInBytes;
    NSMutableData * _pcmInputData;
    int  _pcmInputDataIndexInBytes;
    int  _pcmInputDataMaxSzInBytes;
    int  _pcmInputDataSampleCnt;
    NSMutableData * _pcmOutputData;
    int  _pcmOutputDataIndexInBytes;
    int  _pcmOutputDataMaxSzInBytes;
    int  _pinToMeasure;
    int  _powerState;
    NSCondition * _powerStateCond;
    double  _precalCurrentNoiseLevel;
    double  _precalCurrentSNR;
    double  _precalCurrentSignalLevel;
    double  _precalVoltageNoiseLevel;
    double  _precalVoltageSNR;
    double  _precalVoltageSignalLevel;
    int  _precalibrationSampleOffsetInFrames;
    double  _resistanceInOhms;
    int  _sampleRate;
    bool  _selfTestCapable;
    unsigned int  _service;
    double  _signalFreq;
    unsigned short  _signalOffset;
    unsigned int  _systemPowerIterator;
    struct IONotificationPort { } * _systemPowerNotifyPortRef;
    unsigned int  _systemPowerPort;
    NSObject<OS_dispatch_queue> * _systemPowerQueue;
    NSMutableData * _voltageData;
    double  _voltageGainCorrection;
    int  _warmupTimeInMs;
}

@property int AceSettlingTimeInMs;
@property struct OpaqueAudioComponentInstance { }*audioComponentInst;
@property NSCondition *audioTimeoutCond;
@property int audioTimeoutInSec;
@property int bitDepth;
@property (readonly) double calCurrentAmplitude;
@property (readonly) double calCurrentNoiseLevel;
@property (readonly) double calCurrentSNR;
@property (readonly) double calCurrentSignalLevel;
@property (readonly) double calVoltageAmplitude;
@property (readonly) double calVoltageNoiseLevel;
@property (readonly) double calVoltageSNR;
@property (readonly) double calVoltageSignalLevel;
@property (readonly) int calibrationSampleOffsetInFrames;
@property (readonly) double capacitanceInNanoF;
@property (readonly) double clippingScore;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property unsigned int connect;
@property NSMutableData *currentData;
@property (readonly) double currentGainCorrection;
@property (readonly) double currentPhaseCompensation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property HalogenAudio *halogenAudioUnit;
@property HalogenCalcTypeC *halogenCalcTypeC;
@property (readonly) int halogenResult;
@property (readonly) unsigned long long hash;
@property int initalPhaseInDegrees;
@property int inputFrameSizeInBytes;
@property bool isCalibrationDone;
@property bool isInternalBuild;
@property bool isMeasurementDone;
@property int ldcmState;
@property (nonatomic, readonly) unsigned short maxOutputAmplitude;
@property bool measureSBU;
@property (readonly) double measurementCondetSNR;
@property (readonly) double measurementCurrentAmplitude;
@property (readonly) double measurementCurrentNoiseLevel;
@property (readonly) double measurementCurrentPhase;
@property (readonly) double measurementCurrentSNR;
@property (readonly) double measurementCurrentSignalLevel;
@property NSMutableString *measurementInfoAcchalogenOutputString;
@property (nonatomic) struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; } measurementInfoDefault;
@property NSMutableString *measurementInfoOutputString;
@property (readonly) double measurementLoadImpedanceMagnitude;
@property (readonly) double measurementLoadImpedancePhase;
@property int measurementSampleOffsetInFrames;
@property (readonly) double measurementVoltageAmplitude;
@property (readonly) double measurementVoltageNoiseLevel;
@property (readonly) double measurementVoltagePhase;
@property (readonly) double measurementVoltageSNR;
@property (readonly) double measurementVoltageSignalLevel;
@property int nAceSettlingSamples;
@property int nInputChannels;
@property int nMeasurementSamples;
@property int nOutputChannels;
@property int nPaddingSamples;
@property int nTotalSamples;
@property int nWarmupSamples;
@property int outputFrameSizeInBytes;
@property NSMutableData *pcmInputData;
@property int pcmInputDataIndexInBytes;
@property int pcmInputDataMaxSzInBytes;
@property int pcmInputDataSampleCnt;
@property NSMutableData *pcmOutputData;
@property int pcmOutputDataIndexInBytes;
@property int pcmOutputDataMaxSzInBytes;
@property int pinToMeasure;
@property (nonatomic) int powerState;
@property NSCondition *powerStateCond;
@property (readonly) double precalCurrentNoiseLevel;
@property (readonly) double precalCurrentSNR;
@property (readonly) double precalCurrentSignalLevel;
@property (readonly) double precalVoltageNoiseLevel;
@property (readonly) double precalVoltageSNR;
@property (readonly) double precalVoltageSignalLevel;
@property (readonly) int precalibrationSampleOffsetInFrames;
@property (readonly) double resistanceInOhms;
@property int sampleRate;
@property bool selfTestCapable;
@property unsigned int service;
@property double signalFreq;
@property (nonatomic, readonly) unsigned short signalOffset;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemPowerIterator;
@property (nonatomic) struct IONotificationPort { }*systemPowerNotifyPortRef;
@property (nonatomic) unsigned int systemPowerPort;
@property (nonatomic) NSObject<OS_dispatch_queue> *systemPowerQueue;
@property NSMutableData *voltageData;
@property (readonly) double voltageGainCorrection;
@property int warmupTimeInMs;

- (int)AceSettlingTimeInMs;
- (bool)_allocBuffers;
- (id)_buildMeasurementOutputString:(struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; }*)arg1;
- (id)_buildVerboseMeasurementOutputString:(struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; }*)arg1;
- (bool)_connectToAccessoryManager:(int)arg1;
- (bool)_createSleepWakeNotifier;
- (void)_destroySleepWakeNotifier;
- (void)_disconnectFromAccessoryManager;
- (bool)_doLDCMCalculation:(bool)arg1 isReceptacleWet:(bool)arg2 withWetTransitionThreshold:(double)arg3 withDryTransitionThreshold:(double)arg4 pinParasitics:(double)arg5;
- (int)_doLDCMMeasurement:(int)arg1 isReceptacleEmpty:(bool)arg2 isReceptacleWet:(bool)arg3 withWetTransitionThreshold:(double)arg4 withDryTransitionThreshold:(double)arg5;
- (void)_freeBuffers;
- (void)_generateSineWave;
- (id)_getHalogenMeasurementTypeString:(int)arg1;
- (id)_getLDCMPinString:(int)arg1;
- (bool)_readCalibrationParameters:(id)arg1;
- (void)_resetCalcValues;
- (void)_runHPMTool:(bool)arg1;
- (void)_storeMeasurementData:(int)arg1 measurementType:(int)arg2 measurementInfo:(struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; }*)arg3 halogenResult:(int)arg4;
- (bool)_writeCalResults:(id)arg1;
- (struct OpaqueAudioComponentInstance { }*)audioComponentInst;
- (id)audioTimeoutCond;
- (int)audioTimeoutInSec;
- (int)bitDepth;
- (double)calCurrentAmplitude;
- (double)calCurrentNoiseLevel;
- (double)calCurrentSNR;
- (double)calCurrentSignalLevel;
- (double)calVoltageAmplitude;
- (double)calVoltageNoiseLevel;
- (double)calVoltageSNR;
- (double)calVoltageSignalLevel;
- (int)calibrationSampleOffsetInFrames;
- (double)capacitanceInNanoF;
- (double)clippingScore;
- (double)compensatedImpedance;
- (double)compensatedPhase;
- (unsigned int)connect;
- (id)currentData;
- (double)currentGainCorrection;
- (double)currentPhaseCompensation;
- (void)dealloc;
- (int)doLDCMMeasurement:(int)arg1 isCalibrationNeeded:(bool)arg2 isReceptacleEmpty:(bool)arg3 isReceptacleWet:(bool)arg4 withWetTransitionThreshold:(double)arg5 withDryTransitionThreshold:(double)arg6;
- (id)getHalogenResultString:(int)arg1;
- (struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; })getMeasurementInfo;
- (id)getMeasurementOutputString;
- (id)getVerboseMeasurementOutputString;
- (double)goertzelImpedance;
- (double)goertzelPhase;
- (id)halogenAudioUnit;
- (id)halogenCalcTypeC;
- (int)halogenResult;
- (id)initWithParams:(int)arg1 onPort:(int)arg2;
- (int)initalPhaseInDegrees;
- (int)inputFrameSizeInBytes;
- (bool)isCalibrationDone;
- (bool)isHWSelfTestCapable;
- (bool)isInternalBuild;
- (bool)isMeasurementDone;
- (int)ldcmState;
- (unsigned short)maxOutputAmplitude;
- (bool)measureSBU;
- (double)measurementCondetSNR;
- (double)measurementCurrentAmplitude;
- (double)measurementCurrentNoiseLevel;
- (double)measurementCurrentPhase;
- (double)measurementCurrentSNR;
- (double)measurementCurrentSignalLevel;
- (id)measurementInfoAcchalogenOutputString;
- (struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; })measurementInfoDefault;
- (id)measurementInfoOutputString;
- (double)measurementLoadImpedanceMagnitude;
- (double)measurementLoadImpedancePhase;
- (int)measurementSampleOffsetInFrames;
- (double)measurementVoltageAmplitude;
- (double)measurementVoltageNoiseLevel;
- (double)measurementVoltagePhase;
- (double)measurementVoltageSNR;
- (double)measurementVoltageSignalLevel;
- (int)nAceSettlingSamples;
- (int)nInputChannels;
- (int)nMeasurementSamples;
- (int)nOutputChannels;
- (int)nPaddingSamples;
- (int)nTotalSamples;
- (int)nWarmupSamples;
- (int)outputFrameSizeInBytes;
- (id)pcmInputData;
- (int)pcmInputDataIndexInBytes;
- (int)pcmInputDataMaxSzInBytes;
- (int)pcmInputDataSampleCnt;
- (id)pcmOutputData;
- (int)pcmOutputDataIndexInBytes;
- (int)pcmOutputDataMaxSzInBytes;
- (int)pinToMeasure;
- (int)playbackCallBackFunc:(unsigned int*)arg1 AudioTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg2 busNum:(unsigned int)arg3 numFrames:(unsigned int)arg4 AudioBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg5;
- (int)powerState;
- (id)powerStateCond;
- (double)precalCurrentNoiseLevel;
- (double)precalCurrentSNR;
- (double)precalCurrentSignalLevel;
- (double)precalVoltageNoiseLevel;
- (double)precalVoltageSNR;
- (double)precalVoltageSignalLevel;
- (int)precalibrationSampleOffsetInFrames;
- (int)recordCallBackFunc:(unsigned int*)arg1 AudioTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg2 busNum:(unsigned int)arg3 numFrames:(unsigned int)arg4 AudioBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg5;
- (double)resistanceInOhms;
- (int)sampleRate;
- (int)saveAsWav:(id)arg1;
- (bool)selfTestCapable;
- (unsigned int)service;
- (void)setAceSettlingTimeInMs:(int)arg1;
- (void)setAudioComponentInst:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setAudioTimeoutCond:(id)arg1;
- (void)setAudioTimeoutInSec:(int)arg1;
- (void)setBitDepth:(int)arg1;
- (void)setConnect:(unsigned int)arg1;
- (void)setCurrentData:(id)arg1;
- (void)setHalogenAudioUnit:(id)arg1;
- (void)setHalogenCalcTypeC:(id)arg1;
- (void)setInitalPhaseInDegrees:(int)arg1;
- (void)setInputFrameSizeInBytes:(int)arg1;
- (void)setIsCalibrationDone:(bool)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setIsMeasurementDone:(bool)arg1;
- (void)setLdcmState:(int)arg1;
- (void)setMeasureSBU:(bool)arg1;
- (void)setMeasurementInfoAcchalogenOutputString:(id)arg1;
- (void)setMeasurementInfoDefault:(struct { int x1; int x2; int x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; })arg1;
- (void)setMeasurementInfoOutputString:(id)arg1;
- (void)setMeasurementSampleOffsetInFrames:(int)arg1;
- (void)setNAceSettlingSamples:(int)arg1;
- (void)setNInputChannels:(int)arg1;
- (void)setNMeasurementSamples:(int)arg1;
- (void)setNOutputChannels:(int)arg1;
- (void)setNPaddingSamples:(int)arg1;
- (void)setNTotalSamples:(int)arg1;
- (void)setNWarmupSamples:(int)arg1;
- (void)setOutputFrameSizeInBytes:(int)arg1;
- (void)setPcmInputData:(id)arg1;
- (void)setPcmInputDataIndexInBytes:(int)arg1;
- (void)setPcmInputDataMaxSzInBytes:(int)arg1;
- (void)setPcmInputDataSampleCnt:(int)arg1;
- (void)setPcmOutputData:(id)arg1;
- (void)setPcmOutputDataIndexInBytes:(int)arg1;
- (void)setPcmOutputDataMaxSzInBytes:(int)arg1;
- (void)setPinToMeasure:(int)arg1;
- (void)setPowerState:(int)arg1;
- (void)setPowerStateCond:(id)arg1;
- (void)setSampleRate:(int)arg1;
- (void)setSelfTestCapable:(bool)arg1;
- (void)setService:(unsigned int)arg1;
- (void)setSignalFreq:(double)arg1;
- (void)setSystemPowerIterator:(unsigned int)arg1;
- (void)setSystemPowerNotifyPortRef:(struct IONotificationPort { }*)arg1;
- (void)setSystemPowerPort:(unsigned int)arg1;
- (void)setSystemPowerQueue:(id)arg1;
- (void)setVoltageData:(id)arg1;
- (void)setWarmupTimeInMs:(int)arg1;
- (double)signalFreq;
- (unsigned short)signalOffset;
- (bool)supportsSelfTest;
- (unsigned int)systemPowerIterator;
- (struct IONotificationPort { }*)systemPowerNotifyPortRef;
- (unsigned int)systemPowerPort;
- (id)systemPowerQueue;
- (id)voltageData;
- (double)voltageGainCorrection;
- (int)warmupTimeInMs;

@end