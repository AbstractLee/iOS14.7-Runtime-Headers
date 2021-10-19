/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerViewController : UIViewController <AVTAvatarPickerDelegate, AVTAvatarRecordDataSourceObserver, AVTObjectViewController, AVTPaddleViewDelegate, AVTPresenterDelegate, AVTStickerPagingControllerDelegate, AVTUIViewSnapshotProvider> {
    bool  _allowEditing;
    bool  _allowPeel;
    AVTSimpleAvatarPicker * _avatarPicker;
    AVTAvatarPickerDataSource * _avatarPickerDataSource;
    <AVTStickerDisclosureValidationDelegate> * _disclosureValidationDelegate;
    AVTUIEnvironment * _environment;
    <AVTUILogger> * _logger;
    AVTPaddleView * _paddleView;
    AVTStickerPagingController * _pagingController;
    AVTAvatarRecordDataSource * _recordDataSource;
    NSString * _selectedRecordIdentifier;
    <AVTAvatarStore> * _store;
    AVTStickerTaskScheduler * _taskScheduler;
    <AVTPresenterDelegate> * presenterDelegate;
}

@property (nonatomic) bool allowEditing;
@property (nonatomic, readonly) bool allowPeel;
@property (nonatomic, retain) AVTSimpleAvatarPicker *avatarPicker;
@property (nonatomic, retain) AVTAvatarPickerDataSource *avatarPickerDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AVTStickerDisclosureValidationDelegate> *disclosureValidationDelegate;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, retain) AVTPaddleView *paddleView;
@property (nonatomic, retain) AVTStickerPagingController *pagingController;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *recordDataSource;
@property (nonatomic, retain) NSString *selectedRecordIdentifier;
@property (nonatomic, readonly) <AVTAvatarStore> *store;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVTStickerTaskScheduler *taskScheduler;
@property (nonatomic, readonly) UIView *view;

+ (double)headerEdgeMarginForEnvironment:(id)arg1;
+ (double)headerHeightForWidth:(double)arg1 interitemSpacing:(double)arg2 environment:(id)arg3;
+ (id)inUseStickerPack;
+ (unsigned long long)minimumNumberOfVisibleItemForWidth:(double)arg1 environment:(id)arg2;
+ (id)stickerViewControllerForStore:(id)arg1 allowEditing:(bool)arg2 allowPeel:(bool)arg3;
+ (id)stickersAvatarsFetchRequest;

- (void).cxx_destruct;
- (bool)allowAvatarCreation;
- (bool)allowEditing;
- (bool)allowPeel;
- (id)avatarPicker;
- (void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2;
- (id)avatarPickerDataSource;
- (void)avatarPickerDidEndCameraSession:(id)arg1;
- (void)avatarPickerWillStartCameraSession:(id)arg1;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)disclosureValidationDelegate;
- (void)dismissAvatarUIControllerAnimated:(bool)arg1;
- (void)dismissPaddleViewIfNecessary;
- (void)editCurrentMemoji;
- (id)environment;
- (double)headerMaxY;
- (id)initWithStore:(id)arg1 selectedRecordIdentifier:(id)arg2 allowEditing:(bool)arg3 allowPeel:(bool)arg4 environment:(id)arg5;
- (id)logger;
- (id)paddleView;
- (void)paddleViewTapped:(id)arg1;
- (void)paddleViewWantsToBeDismissed:(id)arg1;
- (id)pagingController;
- (void)presentAvatarUIController:(id)arg1 animated:(bool)arg2;
- (void)presentMemojiEditorForCreation;
- (void)presentPaddleViewIfNeeded;
- (id)presenterDelegate;
- (id)recordDataSource;
- (void)reloadData;
- (void)reloadPickerView;
- (void)selectAvatarRecordAtIndex:(long long)arg1 hideHeader:(bool)arg2;
- (void)selectDefaultAvatarIfNeeded;
- (void)selectRecordForIdentifier:(id)arg1;
- (id)selectedRecordIdentifier;
- (void)setAllowEditing:(bool)arg1;
- (void)setAvatarPicker:(id)arg1;
- (void)setAvatarPickerDataSource:(id)arg1;
- (void)setDisclosureValidationDelegate:(id)arg1;
- (void)setPaddleView:(id)arg1;
- (void)setPagingController:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setSelectedRecordIdentifier:(id)arg1;
- (void)setTaskScheduler:(id)arg1;
- (bool)shouldPresentPaddleView;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)snapshotInBlock:(id /* block */)arg1;
- (void)stickerControllerDidEnterBackground;
- (void)stickerControllerWillEnterForeground;
- (void)stickerPagingController:(id)arg1 pageDidScrollToOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)store;
- (void)swipeLeftWithDelay:(long long)arg1 forCompletionHandler:(id /* block */)arg2;
- (void)swipeRightWithDelay:(long long)arg1 forCompletionHandler:(id /* block */)arg2;
- (id)taskScheduler;
- (void)updateHeaderPositionWithContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateHeaderSize;
- (void)updatePaddleViewLayoutIfNecessary;
- (void)updatePagingControllerInsets;
- (void)updateScrollToShowAvatarPicker:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end