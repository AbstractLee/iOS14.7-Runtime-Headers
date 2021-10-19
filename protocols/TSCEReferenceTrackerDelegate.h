/* Generated by RuntimeBrowser.
 */

@protocol TSCEReferenceTrackerDelegate <NSObject>

@required

- (NSArray *)cellRangeWasInserted:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct TSKUIDStruct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg1;
- (void)referencedCellWasModified:(TSCETrackedReference *)arg1;
- (bool)shouldRewriteOnCellMerge;
- (bool)shouldRewriteOnRangeMove;
- (bool)shouldRewriteOnSort;
- (bool)shouldRewriteOnTableIDReassignment;
- (bool)shouldRewriteOnTectonicShift;
- (bool)shouldRewriteOnTranspose;

@end