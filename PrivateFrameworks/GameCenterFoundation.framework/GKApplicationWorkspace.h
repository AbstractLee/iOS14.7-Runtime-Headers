/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationWorkspace : NSObject {
    LSApplicationWorkspace * _lsWorkspace;
}

@property (nonatomic, retain) LSApplicationWorkspace *lsWorkspace;

+ (id)defaultWorkspace;

- (void).cxx_destruct;
- (bool)applicationIsInstalled:(id)arg1;
- (id)applicationProxyForBundleID:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;
- (id)initWithWorkspace:(id)arg1;
- (id)lsWorkspace;
- (void)openGameCenterSettings;
- (void)openICloudSettings;
- (void)openSettings;
- (void)openURL:(id)arg1;
- (void)setLsWorkspace:(id)arg1;

@end