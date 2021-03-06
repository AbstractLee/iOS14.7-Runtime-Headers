/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPasswordTableViewCell : UITableViewCell <SFPasswordTableViewCell> {
    <SFPasswordTableViewCellDelegate> * _delegate;
    UIView * _monogramBackgroundView;
    UILabel * _monogramLabel;
    WBSSavedPassword * _savedPassword;
    NSString * _searchPattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFPasswordTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIconMonogram;
@property (nonatomic, readonly) WBSSavedPassword *savedPassword;
@property (nonatomic, readonly) NSString *searchPattern;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAccessibilityIdentifiers;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isIconMonogram;
- (void)safari_copyPassword;
- (void)safari_copyUserName;
- (id)savedPassword;
- (id)searchPattern;
- (void)setDelegate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSavedPassword:(id)arg1 searchPattern:(id)arg2;
- (void)setSavedPassword:(id)arg1 withWarnings:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(bool)arg3;
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;

@end
