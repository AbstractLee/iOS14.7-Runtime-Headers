/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

@interface HAMenstrualAlgorithmsHistoricalAnalyzer : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::__1::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { 
        struct __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::__1::default_delete<Nightingale::ngt_HistoricalAnalyzer>> { 
            struct ngt_HistoricalAnalyzer {} *__value_; 
        } __ptr_; 
    }  _historicalAnalyzer;
    struct optional<unsigned int> { 
        union { 
            BOOL __null_state_; 
            unsigned int __val_; 
        } ; 
        bool __engaged_; 
    }  _julianDayOfLastInput;
    struct unique_ptr<HealthAlgorithms::PhaseCondenser, std::__1::default_delete<HealthAlgorithms::PhaseCondenser>> { 
        struct __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::__1::default_delete<HealthAlgorithms::PhaseCondenser>> { 
            struct PhaseCondenser {} *__value_; 
        } __ptr_; 
    }  _phaseCondenser;
}

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)analyze;
- (void)appendDay:(id)arg1;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)init;
- (id)phaseStringFromNumber:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (void)hkmc_appendEmptyDayAtIndex:(long long)arg1;

@end
