/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVContentKeySpecifier : NSObject {
    id  identifier;
    NSString * keySystem;
    NSDictionary * options;
}

@property (readonly) id identifier;
@property (readonly) NSString *keySystem;
@property (readonly) NSDictionary *options;

+ (id)contentKeySpecifierForKeySystem:(id)arg1 identifier:(id)arg2 options:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)identifier;
- (id)initForKeySystem:(id)arg1 identifier:(id)arg2 options:(id)arg3;
- (id)keySystem;
- (id)options;

@end
