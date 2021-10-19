/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    struct unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor>> { 
        struct __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor>> { 
            struct ngt_DayStreamProcessor {} *__value_; 
        } __ptr_; 
    }  _dayStreamProcessor;
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
- (id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)arg1;
- (void)appendDay:(id)arg1;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)init;
- (id)initWithConfig:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (void)hkmc_appendEmptyDayAtIndex:(long long)arg1;

@end