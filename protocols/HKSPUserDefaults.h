/* Generated by RuntimeBrowser.
 */

@protocol HKSPUserDefaults <NSObject>

@required

- (bool)boolForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;

@optional

- (void)synchronize;

@end