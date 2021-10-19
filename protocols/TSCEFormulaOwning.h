/* Generated by RuntimeBrowser.
 */

@protocol TSCEFormulaOwning <NSObject>

@required

- (long long)evaluationMode;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (<TSCEReferenceResolving> *)linkedResolver;
- (unsigned short)ownerKind;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })ownerUID;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;

@optional

- (struct TSCERecalculationState { unsigned char x1; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState { unsigned char x1; })arg3;
- (struct TSCERecalculationState { unsigned char x1; })multiEvaluateFormulasAt:(const struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::__value_type<unsigned short, TSUIndexSet>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, std::__1::__value_type<unsigned short, TSUIndexSet>, std::__1::less<unsigned short>, true>> { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState { unsigned char x1; })arg3;

@end