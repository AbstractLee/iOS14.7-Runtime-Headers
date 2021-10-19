/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFShowWidgetConfigurationEvent : WFEvent {
    NSString * _appBundleIdentifier;
    NSString * _intentType;
    NSString * _key;
    NSString * _sizeClass;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *intentType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sizeClass;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2 sizeClass:(id)arg3;
- (id)intentType;
- (id)key;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSizeClass:(id)arg1;
- (id)sizeClass;

@end