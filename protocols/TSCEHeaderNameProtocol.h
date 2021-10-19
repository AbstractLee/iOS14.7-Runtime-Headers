/* Generated by RuntimeBrowser.
 */

@protocol TSCEHeaderNameProtocol <NSObject>

@required

- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })NRM_formulaOwnerUID;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })baseHeaderColumnsForCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg1;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })baseHeaderRowsForCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg1;
- (void)beginTrackingNamesInTable:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)endTrackingNamesInTable:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })formulaOwnerUID;
- (id)initWithContext:(TSPObjectContext *)arg1 calcEngine:(TSCECalculationEngine *)arg2;
- (struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::__1::less<TSKUIDStruct>, std::__1::allocator<std::__1::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__1::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__1::__map_value_compare<TSKUIDStruct, std::__1::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__1::less<TSKUIDStruct>, true>, std::__1::allocator<std::__1::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<TSKUIDStruct, std::__1::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__1::less<TSKUIDStruct>, true>> { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; })nameFragmentPrecedentsForReferenceString:(NSString *)arg1;
- (void)setCalcEngine:(TSCECalculationEngine *)arg1;
- (void)setNRM_formulaOwnerUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)updateTableUIDFrom:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1 toTableUID:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)updateTrackedHeaders:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)updateTrackedHeadersForDocumentLocaleChange:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)willClose;

@end