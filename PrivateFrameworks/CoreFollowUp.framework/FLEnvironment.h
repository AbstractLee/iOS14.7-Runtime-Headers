/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLEnvironment : NSObject

@property (nonatomic, readonly) bool followUpExtensionSupportEnabled;
@property (nonatomic, readonly) bool followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (bool)followUpExtensionSupportEnabled;
- (bool)followUpZeroActionsForTheWorld;
- (bool)isInternal;
- (bool)isUnlocked;
- (void)setFollowUpExtensionSupportEnabled:(bool)arg1;
- (bool)shouldHideAllFollowUps;
- (id)stressBundleIdentifiers;
- (bool)stressMode;
- (id)supportedBundleIdentifiers;
- (id)supportedNotifyingAppIds;

@end
