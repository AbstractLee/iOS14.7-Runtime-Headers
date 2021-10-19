/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INObjectCollection : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _sections;
    bool  _usesIndexedCollation;
}

@property (nonatomic, readonly, copy) NSArray *allItems;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (nonatomic) bool usesIndexedCollation;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_typedObjectCollectionWithCodableAttribute:(id)arg1;
- (id)_untypedObjectCollectionWithItemClass:(Class)arg1 codableAttribute:(id)arg2 error:(id*)arg3;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithSections:(id)arg1;
- (id)sections;
- (void)setUsesIndexedCollation:(bool)arg1;
- (bool)usesIndexedCollation;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_mapAsynchronously:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)wf_mapObjectsUsingBlock:(id /* block */)arg1;

@end