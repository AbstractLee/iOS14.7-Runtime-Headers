/* Generated by RuntimeBrowser.
 */

@protocol TSPKnownFieldRuleProvider <NSObject>

@required

- (void)enumerateKnownFieldRulesUsingBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct FieldPath { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct RepeatedField<unsigned int> { int x_3_1_1; int x_3_1_2; void *x_3_1_3; } x3; struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; }*, struct FieldInfoRuleAttributes { int x1; unsigned long long x2; id x3; }*, unsigned long long, bool*, void*
- (bool)isContentUnknown;

@end
