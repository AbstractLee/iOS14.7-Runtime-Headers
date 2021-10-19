/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVideoAnalyzer : HMFObject {
    HMIVideoAnalyzerConfiguration * _configuration;
    <HMIVideoAnalyzerDelegate> * _delegate;
    NSSet * _externalPersonManagers;
    HMIHomePersonManager * _homePersonManager;
    NSUUID * _identifier;
    NSDictionary * _options;
    unsigned long long  _status;
}

@property (nonatomic) double analysisFPS;
@property (readonly, copy) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly) double delay;
@property <HMIVideoAnalyzerDelegate> *delegate;
@property (nonatomic) bool encode;
@property (retain) NSSet *externalPersonManagers;
@property (retain) HMIHomePersonManager *homePersonManager;
@property (readonly) NSUUID *identifier;
@property (nonatomic) bool monitored;
@property (readonly, copy) NSDictionary *options;
@property (readonly) NSString *stateDescription;
@property (readonly) unsigned long long status;

+ (id)allowedClasses;
+ (id)analyzerWithConfiguration:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
+ (id)analyzerWithConfiguration:(id)arg1 identifier:(id)arg2 legacy:(bool)arg3 remote:(bool)arg4 error:(id*)arg5;
+ (id)analyzerWithOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (double)analysisFPS;
- (void)analyzeFragment:(id)arg1 configuration:(id)arg2;
- (void)cancel;
- (id)configuration;
- (double)delay;
- (id)delegate;
- (bool)encode;
- (id)externalPersonManagers;
- (void)finish;
- (void)flush;
- (void)flushAsync;
- (void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleAssetData:(id)arg1 withOptions:(id)arg2 errorHandler:(id /* block */)arg3;
- (void)handleMessageWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)homePersonManager;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;
- (bool)monitored;
- (id)options;
- (void)setAnalysisFPS:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncode:(bool)arg1;
- (void)setExternalPersonManagers:(id)arg1;
- (void)setHomePersonManager:(id)arg1;
- (void)setMonitored:(bool)arg1;
- (id)stateDescription;
- (unsigned long long)status;

@end