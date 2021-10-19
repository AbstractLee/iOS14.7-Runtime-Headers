/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSPropertyList : NSObject <LSDetachable, NSCopying>

@property (readonly) NSString *_applicationIdentifier;
@property (nonatomic, readonly) NSDictionary *_expensiveDictionaryRepresentation;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)new;
+ (id)propertyListWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)propertyListWithData:(id)arg1;
+ (id)propertyListWithDictionary:(id)arg1;

- (id)_applicationIdentifier;
- (id)_expensiveDictionaryRepresentation;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)detach;
- (id)init;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForKeys:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)dictionaryOfObjectsForKeys:(id)arg1;

@end