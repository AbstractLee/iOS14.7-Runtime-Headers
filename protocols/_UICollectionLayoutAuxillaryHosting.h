/* Generated by RuntimeBrowser.
 */

@protocol _UICollectionLayoutAuxillaryHosting <NSObject>

@required

- (NSArray *)auxillaryHostAuxillaryItems;
- (long long)auxillaryHostAuxillaryKind;
- (<NSCollectionLayoutContainer> *)auxillaryHostContainer;
- (struct CGSize { double x1; double x2; })auxillaryHostContentSize;
- (unsigned long long)auxillaryHostLayoutAxis;
- (struct CGSize { double x1; double x2; })auxillaryHostPinningContentSize;
- (<_UICollectionPreferredSizes> *)auxillaryHostPreferredSizes;
- (bool)auxillaryHostShouldLayoutRTL;
- (<_UICollectionLayoutSupplementaryEnrolling> *)auxillaryHostSupplementaryEnroller;

@optional

- (struct CGPoint { double x1; double x2; })auxillaryHostAdditionalFrameOffset;

@end