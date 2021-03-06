/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKPlayerGameCell : GKBaseGameCell {
    UILabel * _dateLabel;
    UILabel * _statsLabel;
}

@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, retain) UILabel *statsLabel;

- (void).cxx_destruct;
- (id)achievementsStringWithGameRecord:(id)arg1;
- (id)dateLabel;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (void)prepareForReuse;
- (void)setDateLabel:(id)arg1;
- (void)setStatsLabel:(id)arg1;
- (id)statText;
- (id)statsLabel;

@end
