/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOrderedTestTab : NSObject <WBSOrderedTab> {
    NSArray * _ancestorTabIdentifiers;
    bool  _closing;
    NSString * _identifier;
    bool  _isPinnedTab;
    double  _lastActivationTime;
    bool  _shouldSelectOriginatingTabWhenClosed;
    NSString * _windowIdentifier;
}

@property (nonatomic, copy) NSArray *ancestorTabIdentifiers;
@property (getter=isClosing, nonatomic) bool closing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isPinnedTab;
@property (nonatomic) double lastActivationTime;
@property (nonatomic) bool shouldSelectOriginatingTabWhenClosed;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *windowIdentifier;

+ (id)_nextTabID;
+ (id)orderedTestTabWithParent:(id)arg1;
+ (void)resetIDCounter;

- (void).cxx_destruct;
- (id)ancestorTabIdentifiers;
- (id)description;
- (id)identifier;
- (bool)isClosing;
- (bool)isPinnedTab;
- (double)lastActivationTime;
- (void)setAncestorTabIdentifiers:(id)arg1;
- (void)setClosing:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsPinnedTab:(bool)arg1;
- (void)setLastActivationTime:(double)arg1;
- (void)setShouldSelectOriginatingTabWhenClosed:(bool)arg1;
- (void)setWindowIdentifier:(id)arg1;
- (bool)shouldSelectOriginatingTabWhenClosed;
- (id)windowIdentifier;

@end