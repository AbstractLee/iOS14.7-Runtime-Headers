/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPointerArray : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding>

@property unsigned long long count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)strongObjectsPointerArray;
+ (bool)supportsSecureCoding;
+ (id)weakObjectsPointerArray;

- (void)addPointer:(void*)arg1;
- (id)allObjects;
- (Class)classForCoder;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableArray;
- (void*)pointerAtIndex:(unsigned long long)arg1;
- (id)pointerFunctions;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 successSoFar:(bool)arg2 errorSoFar:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

- (bool)doc_containsPointer:(void*)arg1;
- (long long)doc_indexOfPointer:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (void)hmf_addObject:(id)arg1;
- (bool)hmf_removeObject:(id)arg1;
- (bool)hmf_removePointer:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tsu_enumerateNonNullPointersUsingBlock:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfPointer:(void*)arg1;
- (void)tsu_insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (void)tsu_addPointersFromPointerArray:(id)arg1;
- (id)tsu_description;
- (void)tsu_enumerateNonNullObjectUsingBlock:(id /* block */)arg1;
- (void)tsu_enumerateNonNullPointersUsingBlock:(id /* block */)arg1;
- (bool)tsu_hasNonNullPointers;
- (unsigned long long)tsu_indexOfPointer:(void*)arg1;
- (void)tsu_insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)tsu_removeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility

- (void)tsu_addPointersFromPointerArray:(id)arg1;
- (id)tsu_description;
- (void)tsu_enumerateNonNullObjectUsingBlock:(id /* block */)arg1;
- (void)tsu_enumerateNonNullPointersUsingBlock:(id /* block */)arg1;
- (bool)tsu_hasNonNullPointers;
- (unsigned long long)tsu_indexOfPointer:(void*)arg1;
- (void)tsu_insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)tsu_removeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
