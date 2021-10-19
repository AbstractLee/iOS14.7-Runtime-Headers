/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewListCell : UICollectionViewCell <UITableConstantsCellProviding, _UICollectionViewListCellReorderControlDelegate> {
    NSArray * _accessories;
    NSDictionary * _accessoriesByIdentifier;
    UICellAccessoryManager * _accessoryManager;
    <UITableConstants> * _constants;
    NSArray * _contentViewConstraints;
    long long  _defaultIndentationLevel;
    id /* block */  _disclosureWasTappedHandler;
    double  _extraLeadingLayoutMarginForIndentation;
    long long  _indentationLevel;
    double  _indentationWidth;
    id  _itemIdentifier;
    NSArray * _leadingAccessoryConfigurations;
    NSArray * _leadingEditingAccessoryConfigurations;
    struct { 
        unsigned int style : 3; 
        unsigned int isStyledAsHeader : 1; 
        unsigned int forceHeaderStylingDueToSPIOutlineDisclosureAccessory : 1; 
        unsigned int selectionStyle : 1; 
        unsigned int expanded : 1; 
        unsigned int needsUpdateAccessories : 1; 
        unsigned int hasCustomIndentationLevel : 1; 
        unsigned int hasCustomIndentationWidth : 1; 
        unsigned int cellSelectionTogglesExpansionState : 1; 
        unsigned int indentsAccessories : 1; 
        unsigned int separatorLayoutGuideLeadingReferencesPrimaryText : 1; 
    }  _listCellFlags;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _sectionSeparatorInsets;
    UILayoutGuide * _separatorLayoutGuide;
    NSLayoutConstraint * _separatorLayoutGuideHeightConstraint;
    NSLayoutConstraint * _separatorLayoutGuideLeadingConstraint;
    NSLayoutConstraint * _separatorLayoutGuideTrailingConstraint;
    NSArray * _trailingAccessoryConfigurations;
    NSArray * _trailingEditingAccessoryConfigurations;
    _UICollectionViewListCellVisualProvider * _visualProvider;
}

@property (getter=_expanded, setter=_setExpanded:, nonatomic) bool _expanded;
@property (nonatomic, copy) NSArray *accessories;
@property (getter=_accessoryManager, nonatomic, readonly) UICellAccessoryManager *accessoryManager;
@property (getter=_cellStyle, nonatomic, readonly) long long cellStyle;
@property (getter=_constants, nonatomic, readonly) <UITableConstants> *constants;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultIndentationLevel, setter=_setDefaultIndentationLevel:, nonatomic) long long defaultIndentationLevel;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ disclosureWasTappedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indentationWidth;
@property (nonatomic) bool indentsAccessories;
@property (getter=_itemIdentifier, setter=_setItemIdentifier:, nonatomic, retain) id itemIdentifier;
@property (nonatomic, copy) NSArray *leadingAccessoryConfigurations;
@property (nonatomic, copy) NSArray *leadingEditingAccessoryConfigurations;
@property (getter=_minimumCellAccessoryMargin, nonatomic, readonly) double minimumCellAccessoryMargin;
@property (getter=_owningViewForSeparatorLayoutGuide, nonatomic, readonly) UIView *owningViewForSeparatorLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *separatorLayoutGuide;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingAccessoryConfigurations;
@property (nonatomic, copy) NSArray *trailingEditingAccessoryConfigurations;

+ (id)_createDefaultContentViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_createVisualProviderForCell:(id)arg1;

- (void).cxx_destruct;
- (id)_accessoryManager;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_adjustedRawLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withLeadingLayoutMarginAdjustment:(double)arg2;
- (void)_applyCellAccessoriesToNormalConfiguration:(id)arg1 editingConfiguration:(id)arg2;
- (bool)_canFocusProgrammatically;
- (id)_cellAccessoriesForConfigurations:(id)arg1 isLeadingEdge:(bool)arg2;
- (id)_cellAccessoryForConfiguration:(id)arg1 isLeadingEdge:(bool)arg2 usingState:(id)arg3;
- (bool)_cellSelectionTogglesExpansionState;
- (long long)_cellStyle;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (id)_constants;
- (void)_constantsDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInset;
- (bool)_contentViewShouldBeIndented;
- (void)_createAccessoryManager;
- (id)_createSystemTypeAccessoryViewWithCellAccessory:(id)arg1 orConfiguration:(id)arg2;
- (id)_defaultBackgroundConfiguration;
- (id)_defaultBackgroundView;
- (long long)_defaultFocusStyle;
- (long long)_defaultIndentationLevel;
- (id)_defaultSelectedBackgroundView;
- (void)_deleteAccessoryTriggered;
- (id)_editingControlTintColorForStyle:(long long)arg1;
- (bool)_expanded;
- (bool)_hasCustomSelectionAction;
- (id)_internalAccessoriesForCellAccessories:(id)arg1;
- (bool)_isAccompaniedSidebar;
- (bool)_isFocusableWhenStyledAsHeader;
- (id)_itemIdentifier;
- (void)_layoutAccessoriesAndContentView;
- (double)_leadingIndentation;
- (double)_minimumCellAccessoryMargin;
- (id)_owningViewForSeparatorLayoutGuide;
- (bool)_performCustomSelectionAction;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (bool)_removesHighlightedAndSelectedStatesForBackground;
- (void)_reorderControl:(id)arg1 didUpdateWithOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_reorderControlDidBeginReordering:(id)arg1;
- (void)_reorderControlDidEndReordering:(id)arg1 cancelled:(bool)arg2;
- (bool)_reorderControlShouldBeginReordering:(id)arg1;
- (void)_resetRawLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_separatorInsetsFromLayoutGuide;
- (void)_setContentView:(id)arg1 addToHierarchy:(bool)arg2;
- (void)_setDefaultIndentationLevel:(long long)arg1;
- (void)_setExpanded:(bool)arg1;
- (void)_setIndentationLevel:(long long)arg1;
- (void)_setIndentationWidth:(double)arg1;
- (void)_setItemIdentifier:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setNeedsUpdateAccessories;
- (void)_setRawLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldIncreaseCellLeadingLayoutMarginForIndentation;
- (long long)_styleFromLayoutAttributes:(id)arg1;
- (long long)_tableStyle;
- (void)_toggleExpansionState;
- (void)_updateAccessoriesIfNeeded;
- (void)_updateAccessoryLayoutMetrics;
- (void)_updateCellSelectionTogglesExpansionState;
- (void)_updateConfigurationUsingState:(id)arg1;
- (void)_updateConstants;
- (void)_updateContentViewConstraintsIfNeeded;
- (void)_updateCurrentSystemTypeAccessoryViewsUsingState:(id)arg1;
- (void)_updateDefaultIndentationWidth;
- (void)_updateLeadingLayoutMarginForIndentation;
- (void)_updateSeparatorLayoutGuideForSectionSeparatorInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateSeparatorLayoutGuideHeight;
- (void)_updateSystemTypeAccessoryView:(id)arg1 withCellAccessory:(id)arg2 orConfiguration:(id)arg3 usingState:(id)arg4;
- (id)_viewForMultiSelectAccessory;
- (id)accessories;
- (bool)canBeEdited;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (id /* block */)disclosureWasTappedHandler;
- (void)encodeWithCoder:(id)arg1;
- (long long)indentationLevel;
- (double)indentationWidth;
- (bool)indentsAccessories;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leadingAccessoryConfigurations;
- (id)leadingEditingAccessoryConfigurations;
- (void)prepareForReuse;
- (void)safeAreaInsetsDidChange;
- (long long)selectionStyle;
- (id)separatorLayoutGuide;
- (void)setAccessories:(id)arg1;
- (void)setDisclosureWasTappedHandler:(id /* block */)arg1;
- (void)setEditing:(bool)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (void)setIndentationWidth:(double)arg1;
- (void)setIndentsAccessories:(bool)arg1;
- (void)setLeadingAccessoryConfigurations:(id)arg1;
- (void)setLeadingEditingAccessoryConfigurations:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setTrailingAccessoryConfigurations:(id)arg1;
- (void)setTrailingEditingAccessoryConfigurations:(id)arg1;
- (id)trailingAccessoryConfigurations;
- (id)trailingEditingAccessoryConfigurations;
- (void)traitCollectionDidChange:(id)arg1;

@end