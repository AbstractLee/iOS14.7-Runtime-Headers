/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSPersonalizationEvaluation : NSObject {
    NSNumber * _accuracyGainThresholdForSwap;
    MLModelConfiguration * _adaptableModelConfiguration;
    NSString * _adaptableModelDeployPath;
    long long  _adaptationStrategy;
    NSNumber * _batchSize;
    ODCurareEvaluationAndReportingModule * _curareEvaluationAndReporting;
    NSNumber * _engagementRateGainThresholdForSwap;
    NSNumber * _epoc;
    NSNumber * _evaluationIterationCount;
    NSMutableArray * _featureDateForAllShareEvents;
    NSMutableArray * _featureDateForShareEventsSinceLastAdaptation;
    NSMutableArray * _featureMatricesForAllShareEvents;
    NSMutableDictionary * _featureNameDict;
    NSURL * _intermediateCompiledModelURL;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSNumber * _learningRate;
    NSNumber * _maxDepth;
    NSNumber * _minChildWeight;
    NSNumber * _minSampleCountForAdaptation;
    NSNumber * _minimumTestDataSizeForSwap;
    NSNumber * _numClasses;
    NSNumber * _numTrees;
    NSUserDefaults * _psAdaptationDefaults;
    NSDictionary * _recipe;
    NSNumber * _recipeID;
    NSMutableArray * _results;
    NSMutableArray * _sampledFeatureVectors;
    NSMutableDictionary * _sampledFeatureVectorsForSplits;
    NSDictionary * _selectedFeaturesConfig;
    NSNumber * _swapOK;
    NSNumber * _testDataCount;
    NSNumber * _testSplitPercent;
    NSNumber * _topN;
    NSNumber * _trainDataCount;
}

@property (nonatomic, retain) NSNumber *accuracyGainThresholdForSwap;
@property (nonatomic, retain) MLModelConfiguration *adaptableModelConfiguration;
@property (nonatomic, retain) NSString *adaptableModelDeployPath;
@property (nonatomic) long long adaptationStrategy;
@property (nonatomic, retain) NSNumber *batchSize;
@property (nonatomic, retain) ODCurareEvaluationAndReportingModule *curareEvaluationAndReporting;
@property (nonatomic, retain) NSNumber *engagementRateGainThresholdForSwap;
@property (nonatomic, retain) NSNumber *epoc;
@property (nonatomic, retain) NSNumber *evaluationIterationCount;
@property (nonatomic, retain) NSMutableArray *featureDateForAllShareEvents;
@property (nonatomic, retain) NSMutableArray *featureDateForShareEventsSinceLastAdaptation;
@property (nonatomic, retain) NSMutableArray *featureMatricesForAllShareEvents;
@property (nonatomic, retain) NSMutableDictionary *featureNameDict;
@property (nonatomic, retain) NSURL *intermediateCompiledModelURL;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) NSNumber *learningRate;
@property (nonatomic, retain) NSNumber *maxDepth;
@property (nonatomic, retain) NSNumber *minChildWeight;
@property (nonatomic, retain) NSNumber *minSampleCountForAdaptation;
@property (nonatomic, retain) NSNumber *minimumTestDataSizeForSwap;
@property (nonatomic, retain) NSNumber *numClasses;
@property (nonatomic, retain) NSNumber *numTrees;
@property (nonatomic, retain) NSUserDefaults *psAdaptationDefaults;
@property (nonatomic, readonly) NSDictionary *recipe;
@property (nonatomic, retain) NSNumber *recipeID;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) NSMutableArray *sampledFeatureVectors;
@property (nonatomic, retain) NSMutableDictionary *sampledFeatureVectorsForSplits;
@property (nonatomic, retain) NSDictionary *selectedFeaturesConfig;
@property (nonatomic, retain) NSNumber *swapOK;
@property (nonatomic, retain) NSNumber *testDataCount;
@property (nonatomic, retain) NSNumber *testSplitPercent;
@property (nonatomic, retain) NSNumber *topN;
@property (nonatomic, retain) NSNumber *trainDataCount;

- (void).cxx_destruct;
- (id)_getDataStatistics:(id)arg1;
- (id)_getRecentUserData;
- (id)accuracyGainThresholdForSwap;
- (void)adaptMLModel:(id)arg1 overDataSplit:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4;
- (void)adaptMLModel:(id)arg1 withTrainingData:(id)arg2;
- (id)adaptableModelConfiguration;
- (id)adaptableModelDeployPath;
- (long long)adaptationStrategy;
- (id)allUserDataAdapted;
- (id)allUserDataDefault;
- (id)batchSize;
- (unsigned long long)bucketedValue:(unsigned long long)arg1;
- (bool)cloneAdaptableModel:(id)arg1 toFilePath:(id)arg2 originalXgboostModelName:(id)arg3 clonedXgboostModelName:(id)arg4;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2;
- (id)createMLArrayBatchProviderOverDataSplitType:(id)arg1 mlModelType:(id)arg2 dataStartingIndex:(long long)arg3 dataLength:(long long)arg4;
- (id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg1 forMLModel:(id)arg2;
- (id)createMLFeatureProviderInstanceForMLModelType:(id)arg1 forFeatureVector:(id)arg2;
- (id)curareEvaluationAndReporting;
- (id)engagementRateGainThresholdForSwap;
- (id)engagementSimulationWithMLModel:(id)arg1 mlModelType:(id)arg2 labelName:(id)arg3;
- (id)epoc;
- (id)evaluateClassicMLModel:(id)arg1;
- (id)evaluateWithModel:(id)arg1 dataArray:(id)arg2 modelType:(unsigned long long)arg3;
- (id)evaluationIterationCount;
- (id)featureDateForAllShareEvents;
- (id)featureDateForShareEventsSinceLastAdaptation;
- (id)featureMatricesForAllShareEvents;
- (id)featureNameDict;
- (void)getSamplesWithTestSplitPercentWithSeed:(int)arg1;
- (id)initWithRecipe:(id)arg1 knowledgeStore:(id)arg2;
- (id)intermediateCompiledModelURL;
- (bool)isAdaptedModelCreated;
- (id)knowledgeStore;
- (id)learningRate;
- (id)loadAdaptableModelUnderDirectory:(id)arg1;
- (id)loadDefaultModel;
- (id)maxDepth;
- (id)measureTestAccuracyOf:(id)arg1 againstTrueValuesOf:(id)arg2 labelName:(id)arg3;
- (id)minChildWeight;
- (id)minSampleCountForAdaptation;
- (id)minimumTestDataSizeForSwap;
- (id)numClasses;
- (id)numTrees;
- (bool)performPrerequisitesBeforeAdaptationWithFeaturesConfigDeployPath:(id)arg1;
- (id)personalize;
- (void)processData;
- (id)psAdaptationDefaults;
- (id)recipe;
- (id)recipeID;
- (id)results;
- (id)runAdaptationAndEvaluation;
- (id)runAdaptationAndEvaluationWithFeaturesConfigDeployPath:(id)arg1 adaptableModelDeployPath:(id)arg2;
- (void)sampleFromDataWithSeed:(int)arg1;
- (id)sampledFeatureVectors;
- (id)sampledFeatureVectorsForSplits;
- (id)selectedFeaturesConfig;
- (void)setAccuracyGainThresholdForSwap:(id)arg1;
- (void)setAdaptableModelConfiguration:(id)arg1;
- (void)setAdaptableModelDeployPath:(id)arg1;
- (void)setAdaptationStrategy:(long long)arg1;
- (void)setBatchSize:(id)arg1;
- (void)setCurareEvaluationAndReporting:(id)arg1;
- (void)setEngagementRateGainThresholdForSwap:(id)arg1;
- (void)setEpoc:(id)arg1;
- (void)setEvaluationIterationCount:(id)arg1;
- (void)setFeatureDateForAllShareEvents:(id)arg1;
- (void)setFeatureDateForShareEventsSinceLastAdaptation:(id)arg1;
- (void)setFeatureMatricesForAllShareEvents:(id)arg1;
- (void)setFeatureNameDict:(id)arg1;
- (void)setIntermediateCompiledModelURL:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLastDayOfAdaptation:(id)arg1;
- (void)setLearningRate:(id)arg1;
- (void)setMaxDepth:(id)arg1;
- (void)setMinChildWeight:(id)arg1;
- (void)setMinSampleCountForAdaptation:(id)arg1;
- (void)setMinimumTestDataSizeForSwap:(id)arg1;
- (void)setNumClasses:(id)arg1;
- (void)setNumTrees:(id)arg1;
- (void)setParametersFromRecipe;
- (void)setPsAdaptationDefaults:(id)arg1;
- (void)setRecipeID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSampledFeatureVectors:(id)arg1;
- (void)setSampledFeatureVectorsForSplits:(id)arg1;
- (void)setSelectedFeaturesConfig:(id)arg1;
- (void)setSwapOK:(id)arg1;
- (void)setTestDataCount:(id)arg1;
- (void)setTestSplitPercent:(id)arg1;
- (void)setTopN:(id)arg1;
- (void)setTrainDataCount:(id)arg1;
- (id)swapOK;
- (id)testDataCount;
- (id)testSplitPercent;
- (id)topN;
- (id)trainDataCount;
- (void)updateAdaptableModelConfigWithUpdateType:(long long)arg1 numTrees:(id)arg2;
- (id)updateMLModelWithURL:(id)arg1 overDataSplit:(id)arg2;

@end
