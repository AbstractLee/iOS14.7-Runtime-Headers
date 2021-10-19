/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVVCMetricsManager : NSObject {
    NSMutableDictionary * _avvcProfilingInfoDictionary;
    unsigned long long  _callToStartRecordHostTime;
    NSMutableDictionary * _publicMetrics;
    unsigned long long  _voiceTriggerStartHostTime;
    unsigned long long  mAudioDataAnalysisSiriSession;
    long long  mAudioIssueDetector;
    CAReporter * mMetricsReporter;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (retain) NSMutableDictionary *avvcProfilingInfoDictionary;
@property (nonatomic) unsigned long long callToStartRecordHostTime;
@property (retain) NSMutableDictionary *publicMetrics;
@property (nonatomic) unsigned long long voiceTriggerStartHostTime;

+ (void)createSharedManager;
+ (void)destroySharedManager;
+ (struct CAMutex { int (**x1)(); char *x2; struct _opaque_pthread_t {} *x3; struct _opaque_pthread_mutex_t { long long x_4_1_1; BOOL x_4_1_2[56]; } x4; }*)getLock;
+ (id)sharedManager;

- (void).cxx_destruct;
- (int)adamAnalyzeBuffer:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; })arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg3 shouldAnalyze:(bool)arg4;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; })arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg3 shouldAnalyze:(bool)arg4;
- (id)avvcProfilingInfoDictionary;
- (unsigned long long)callToStartRecordHostTime;
- (void)checkAndUpdateReporterID;
- (void)dealloc;
- (id)getStringDate:(id)arg1;
- (id)init;
- (void)logProfileMetrics:(id)arg1;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2;
- (void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned int)arg3 type:(unsigned short)arg4;
- (void)logSessionMetric:(id)arg1 value:(id)arg2 category:(unsigned int)arg3 type:(unsigned short)arg4 context:(id)arg5;
- (void)logSingleMetric:(id)arg1 value:(id)arg2 category:(unsigned int)arg3 type:(unsigned short)arg4;
- (bool)measureElapseTimeForMetric:(id)arg1 block:(id /* block */)arg2;
- (id)publicMetrics;
- (int)resetADAM;
- (int)resetAudioIssueDetector;
- (void)resetProfileMetrics;
- (id)retrieveMetrics;
- (id)retrieveProfileMetrics;
- (int)setADAMFormat:(struct CAStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 numFrames:(unsigned int)arg2;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 numFrames:(unsigned int)arg2;
- (void)setAvvcProfilingInfoDictionary:(id)arg1;
- (void)setCallToStartRecordHostTime:(unsigned long long)arg1;
- (void)setPublicMetrics:(id)arg1;
- (void)setVoiceTriggerStartHostTime:(unsigned long long)arg1;
- (void)updateWithReporterID:(long long)arg1;
- (unsigned long long)voiceTriggerStartHostTime;

@end