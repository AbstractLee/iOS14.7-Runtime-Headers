/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeartHealth.framework/HeartHealth
 */

@interface HKHRCardioFitnessWatchSettings : NSObject {
    HKHRCardioFitnessFooter * _footer;
    bool  _settingEnabled;
    bool  _settingVisible;
}

@property (nonatomic, retain) HKHRCardioFitnessFooter *footer;
@property (nonatomic) bool settingEnabled;
@property (nonatomic) bool settingVisible;

+ (id)hiddenSettings;

- (void).cxx_destruct;
- (id)footer;
- (id)initWithSettingVisible:(bool)arg1 settingEnabled:(bool)arg2 footer:(id)arg3;
- (void)setFooter:(id)arg1;
- (void)setSettingEnabled:(bool)arg1;
- (void)setSettingVisible:(bool)arg1;
- (bool)settingEnabled;
- (bool)settingVisible;

@end