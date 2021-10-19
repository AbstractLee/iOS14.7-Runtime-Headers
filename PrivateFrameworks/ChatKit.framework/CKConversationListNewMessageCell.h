/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListNewMessageCell : UITableViewCell {
    CKAvatarView * _avatarView;
    UIButton * _closeButton;
    CKConversation * _conversation;
    NSObject<CKConversationListCellDelegate> * _delegate;
}

@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) NSObject<CKConversationListCellDelegate> *delegate;

+ (id)identifier;

- (void).cxx_destruct;
- (bool)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isCollapsed;
- (void)_updateLabelVisibility;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (id)avatarView;
- (id)conversation;
- (id)delegate;
- (void)deleteButtonTapped;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)leadingLayoutMargin;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (bool)showingEditControl;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateFontSize;
- (void)updateWithForwardedConfigurationState:(unsigned long long)arg1;

@end