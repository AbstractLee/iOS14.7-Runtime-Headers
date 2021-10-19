/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate> {
    unsigned long long  _characterIndex;
}

@property (readonly) unsigned long long characterIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEndOfDocument, readonly) bool endOfDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *type;

+ (id)endOfDocumentLocation;

- (unsigned long long)characterIndex;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIndex:(unsigned long long)arg1;
- (bool)isEndOfDocument;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextLocation:(id)arg1;
- (id)shortDescription;
- (id)type;

@end